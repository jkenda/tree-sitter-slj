module.exports = grammar({
    name: 'slj',

    rules: {
        source_file: $ => repeat($._stavek),
        _zaporedje: $ => repeat1($._stavek),

        _stavek: $ => seq(
            choice(
                $.inicializacija,
                $.prirejanje,
                $.kombinirano_prirejanje,
                $.okvir,
                $.pogojni_stavek,
                $.zanka_dokler,
                $.funkcija,
                $.funkcijski_klic,
                $.makro_klic,
                $.vrni,
                $.komentar,
            ),
            optional(";"),
        ),

        // prirejanje (naj x = 0; x = 1)
        inicializacija: $ => seq("naj", $.ime, "=", $._izraz),
        prirejanje: $ => seq($.ime, "=", $._izraz),
        kombinirano_prirejanje: $ => seq($.ime, $.prireditveni_op, $._izraz),

        okvir: $ => seq("{", optional($._zaporedje), "}"),

        pogojni_stavek: $ => seq("če", $.pogoj, field("telo", $.okvir), optional(
            seq("čene", choice(
                $.pogojni_stavek,
                $.okvir,
            )),
        )),
        pogoj: $ => $._izraz,

        zanka_dokler: $ => seq("dokler", $.pogoj, field("telo", $.okvir)),

        funkcija: $ => seq("funkcija", $.ime, "(", optional($.parametri), ")", optional(seq("->", field("vrni", $.tip))), $.okvir),
        parametri: $ => seq(repeat(seq($.parameter, ",")), $.parameter),
        parameter: $ => seq($.ime, ":", $.tip),
        vrni: $ => seq("vrni", $._izraz),

        funkcijski_klic: $ => seq(field("funkcija", $.ime), "(", optional($.argumenti), ")"),
        makro_klic: $ => seq(field("funkcija", $.ime), "!", "(", optional($.argumenti), ")"),
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
            seq("[", $.tip, ";", $.velikost, "]"),
            seq("{", optional($.parametri), "}"),
            seq("@", $.tip),
        ),
        velikost: $ => $._celo,

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
