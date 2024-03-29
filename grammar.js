module.exports = grammar({
    name: 'slj',

    rules: {
        datoteka: $ => repeat($._stavek),
        _zaporedje: $ => repeat1($._stavek),

        _stavek: $ => seq(
            choice(
                $.multifunkcijski_klic,
                $.funkcijski_klic,
                $.deklaracija,
                $.inicializacija,
                $.prirejanje_referenci,
                $.prirejanje,
                $.prirejanje_seznamu,
                $.okvir,
                $.pogojni_stavek,
                $.zanka_dokler,
                $.zanka_za,
                $.funkcija,
                $.vrni,
                $.prekini,
                $.komentar,
            ),
            optional(";"),
        ),

        // g!(2, 'a')
        multifunkcijski_klic: $ => seq(field("funkcija", $.ime), "!", "(", field("argumenti", optional($.argumenti)), ")"),

        // f(2.0)
        funkcijski_klic: $ => seq(field("funkcija", $.ime), "(", field("argumenti", optional($.argumenti)), ")"),

        // naj x: [real; 3]
        deklaracija: $ => seq("naj", $.ime, ":", $.tip),

        // naj x = 0
        inicializacija: $ => seq("naj", $.ime, "=", $._izraz),

        // x@ = 123; x@ += 2; x@ -= 1
        prirejanje_referenci: $ => seq($.ime, "@", $.prireditveni_op, $._izraz),

        // x = 0; x += 1; x -= 1 ...
        prirejanje: $ => seq($.ime, $.prireditveni_op, $._izraz),

        // x[2] = 3
        prirejanje_seznamu: $ => seq($.ime, "[", $._izraz, "]", "=", $._izraz),

        // { ... }
        okvir: $ => seq("{", optional($._zaporedje), "}"),

        // če x < 2 { ... }
        pogojni_stavek: $ => seq("če", field("pogoj", $._izraz), field("telo", $.okvir), optional(
            seq("čene", choice(
                $.pogojni_stavek,
                $.okvir,
            )),
        )),

        // dokler x < 2 { x += 1 }
        zanka_dokler: $ => seq("dokler", field("pogoj", $._izraz), field("telo", $.okvir)),
        zanka_za:     $ => seq("za", choice(
            // za i = 0; i < 3; { ... }
            seq(field("inicializacija", $.prirejanje), ";",
                field("pogoj", $.primerjalni_izraz), ";",
                field("korak", $._stavek), field("telo", $.okvir)),

            // za i v intervalu [5, MEJA] +2 { ... }
            seq(field("spremenljivka", $.ime), "v", "intervalu", field("interval", $.interval), field("telo", $.okvir)),
        )),

        // [2, 3]; [2, 3); (2, 3]; (2, 3); [2, 3) +3
        interval: $ => seq(choice("[", "("), $._izraz, ",", $._izraz, choice("]", ")"), 
            optional(seq(choice("+", "-", "*", "/", "**"), $._izraz))
        ),

        // funkcija f(x: real) -> celo { ... }; funkcija g(x: celo) { ... }
        funkcija: $ => seq("funkcija", field("ime", $.ime), 
            "(", field("parametri", optional($.parametri)), ")", 
            optional(seq("->", field("vrni", $.tip))), 
            field("telo", $.okvir)
        ),

        // x: celo, y: znak
        parametri: $ => seq(repeat(seq($.parameter, ",")), $.parameter),
        parameter: $ => seq($.ime, ":", $.tip),

        prekini: _ => "prekini",

        // vrni x**2
        vrni: $ => seq("vrni", $._izraz),

        // 32 kot real
        pretvorba: $ => seq($._izraz, "kot", $.tip),

        // x+3, 12, n*R*T / V
        argumenti: $ => seq(repeat(seq($._izraz, ",")), $._izraz),

        _izraz: $ => choice(
            $.logicni_izraz,
            $.bitni_izraz,
            $.primerjalni_izraz,
            $.aritmeticni_izraz,
            $._osnovni_izraz,
        ),

        logicni_izraz: $ => prec.left(-0, choice(
            prec.right(0, seq("!", $._izraz)),
            prec.left(-1, seq($._izraz, "&&", $._izraz)),
            prec.left(-2, seq($._izraz, "||", $._izraz)),
        )),

        bitni_izraz: $ => prec.left(-1, choice(
            prec(-0, seq($._izraz, "<<", $._izraz)),
            prec(-1, seq($._izraz, ">>", $._izraz)),
            prec(-2, seq($._izraz, "&" , $._izraz)),
            prec(-3, seq($._izraz, "^" , $._izraz)),
            prec(-4, seq($._izraz, "|" , $._izraz)),
        )),

        primerjalni_izraz: $ => prec.left(-2, choice(
            prec(-0, seq($._izraz, "==", $._izraz)),
            prec(-0, seq($._izraz, "!=", $._izraz)),
            prec(-1, seq($._izraz, ">" , $._izraz)),
            prec(-1, seq($._izraz, ">=", $._izraz)),
            prec(-1, seq($._izraz, "<" , $._izraz)),
            prec(-1, seq($._izraz, "<=", $._izraz)),
        )),

        aritmeticni_izraz: $ => prec.left(-3, choice(
            prec.right(0, seq("-", $._izraz)),
            prec.left(-1, seq($._izraz, "**", $._izraz)),
            prec.left(-2, seq($._izraz, "*" , $._izraz)),
            prec.left(-2, seq($._izraz, "/" , $._izraz)),
            prec.left(-2, seq($._izraz, "%" , $._izraz)),
            prec.left(-3, seq($._izraz, "+" , $._izraz)),
            prec.left(-3, seq($._izraz, "-" , $._izraz)),
        )),

        _osnovni_izraz: $ => prec(-4, choice(
            $.bool,
            $.stevilo,
            $.niz,
            $.ime,
            $.funkcijski_klic,
            $.pretvorba,
            seq("(", $._izraz, ")"),
            seq("@", $.ime),
            seq($.ime, "@"),
            seq($.ime, "[", $._izraz, "]"),
            seq($.ime, ".", $.ime),
        )),

        tip: $ => choice(
            "brez",
            "bool",
            "celo",
            "real",
            "znak",
            seq("[", $.tip, ";", $.velikost, "]"),
            seq("@", "[", $.tip, "]"),
            seq("{", optional($.parametri), "}"),
            seq("@", $.tip),
        ),
        velikost: $ => $._celo,

        prireditveni_op: _ => choice(
            prec(-0, "="  ),
            prec(-1, "+=" ),
            prec(-1, "-=" ),
            prec(-1, "*=" ),
            prec(-1, "/=" ),
            prec(-1, "%=" ),
            prec(-1, "**="),
            prec(-2, "||="),
            prec(-2, "&&="),
            prec(-3, "<<="),
            prec(-3, ">>="),
            prec(-4, "|=" ),
            prec(-4, "^=" ),
            prec(-4, "&=" ),
        ),

        stevilo: $ => choice($._celo, $._real),
        _celo:    _ => /-?(\d+|\d{1,3}(_\d{3})+)/,
        _real:    _ => /-?(\d+\.\d+|\d{1,3}(_\d{3})+\.(\d{3}_)+\d{1,3})/,
        ime:      _ => /[_\p{Letter}][_\p{Letter}\p{Number}]*/,
        niz:      _ => /\"[^\n\"]*\"/,
        bool:     _ => choice("resnica", "laž"),
        komentar: _ => /#.*/,
    }
});
