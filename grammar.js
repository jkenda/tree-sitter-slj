module.exports = grammar({
    name: 'slj',

    rules: {
        source_file: $ => repeat($._stavek),
        zaporedje: $ => repeat1($._stavek),

        _stavek: $ => choice(
            $.makro_funkcija,
            $.inicializacija,
            $.prirejanje,
            $.kombinirano_prirejanje,
            $.okvir,
            $.pogojni_stavek,
            $.zanka_dokler,
            $.funkcija,
            $.funkcijski_klic,
            $.vrni,
            $.komentar,
        ),

        makro_funkcija: $ => seq($.ime, "!", "(", optional($.argumenti), ")"),

        inicializacija: $ => seq("naj", $.ime, "=", $._izraz),
        prirejanje: $ => seq($.ime, "=", $._izraz),
        kombinirano_prirejanje: $ => seq($.ime, $.prireditveni_op, $._izraz),

        okvir: $ => seq("{", $.zaporedje, "}"),
        pogojni_stavek: $ => seq("če", $.pogoj, $.okvir, optional(
            seq("čene", choice(
                $.pogojni_stavek,
                $.okvir,
            )),
        )),

        zanka_dokler: $ => seq("dokler", $.pogoj, $.okvir),
        funkcija: $ => seq("funkcija", $.ime, "(", optional($.parametri), ")", optional(seq("->", $.tip, )), $.okvir),
        funkcijski_klic: $ => seq($.ime, "(", optional($.argumenti), ")"),
        vrni: $ => seq("vrni", $._izraz),

        pogoj: $ => $._izraz,
        argumenti: $ => seq(repeat(seq($._izraz, ",")), $._izraz),

        _izraz: $ => choice(
            $._unarni_izraz,
            $._binarni_izraz,
            $._osnovni,
        ),

        _unarni_izraz: $ => prec.right(choice(
            seq("-", $._izraz),
            seq("!", $._izraz),
        )),

        _binarni_izraz: $ => prec.left(choice(
            seq($._izraz, "||", $._izraz),
            seq($._izraz, "&&", $._izraz),

            seq($._izraz, "|",  $._izraz),
            seq($._izraz, "^",  $._izraz),
            seq($._izraz, "&",  $._izraz),
            seq($._izraz, "<<", $._izraz),
            seq($._izraz, ">>", $._izraz),

            seq($._izraz, "==", $._izraz),
            seq($._izraz, "!=", $._izraz),
            seq($._izraz, ">",  $._izraz),
            seq($._izraz, ">=", $._izraz),
            seq($._izraz, "<",  $._izraz),
            seq($._izraz, "<=", $._izraz),

            seq($._izraz, "+",  $._izraz),
            seq($._izraz, "-", $._izraz),

            seq($._izraz, "*", $._izraz),
            seq($._izraz, "/", $._izraz),
            seq($._izraz, "%", $._izraz),

            seq($._izraz, "**", $._izraz),
        )),

        _osnovni: $ => choice(
            "resnica",
            "laž",
            $.stevilo,
            $.niz,
            $.ime,
            seq("(", $._izraz, ")"),
            $.funkcijski_klic,
            seq("@", $.ime),
        ),

        tip: $ => choice(
            "brez",
            "bool",
            "celo",
            "real",
            "znak",
            seq("[", $.tip, ";", $._celo, "]"),
            seq("{", optional($.parametri), "}"),
            seq("@", $.tip),
        ),

        parametri: $ => seq(repeat(seq($.ime, ":", $.tip, ",")), seq($.ime, ":", $.tip)),

        prireditveni_op: _ => choice(
            "+=",
            "-=",
            "*=",
            "/=",
            "%=",
            "**=",
            "||=",
            "&&=",
            "<<=",
            ">>=",
            "|=",
            "^=",
            "&=",
        ),

        stevilo: $ => choice($._celo, $._real),
        _celo:    _ => /-?(\d+|\d{1,3}(_\d{3})+)/,
        _real:    _ => /-?(\d+\.\d+|\d{1,3}(_\d{3})+\.(\d{3}_)+\d{1,3})/,
        ime:     _ => /[_\p{Letter}][\w\dčžš]*/,
        niz:     _ => /\"[^\n\"]*\"/,
        komentar: _ => /#.*/,
    }
});
