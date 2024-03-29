#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_SEMI = 1,
  anon_sym_BANG = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_naj = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_AT = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_e = 13,
  anon_sym_ene = 14,
  anon_sym_dokler = 15,
  anon_sym_za = 16,
  anon_sym_v = 17,
  anon_sym_intervalu = 18,
  anon_sym_COMMA = 19,
  anon_sym_PLUS = 20,
  anon_sym_DASH = 21,
  anon_sym_STAR = 22,
  anon_sym_SLASH = 23,
  anon_sym_STAR_STAR = 24,
  anon_sym_funkcija = 25,
  anon_sym_DASH_GT = 26,
  sym_prekini = 27,
  anon_sym_vrni = 28,
  anon_sym_kot = 29,
  anon_sym_AMP_AMP = 30,
  anon_sym_PIPE_PIPE = 31,
  anon_sym_LT_LT = 32,
  anon_sym_GT_GT = 33,
  anon_sym_AMP = 34,
  anon_sym_CARET = 35,
  anon_sym_PIPE = 36,
  anon_sym_EQ_EQ = 37,
  anon_sym_BANG_EQ = 38,
  anon_sym_GT = 39,
  anon_sym_GT_EQ = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_PERCENT = 43,
  anon_sym_DOT = 44,
  anon_sym_brez = 45,
  anon_sym_bool = 46,
  anon_sym_celo = 47,
  anon_sym_real = 48,
  anon_sym_znak = 49,
  anon_sym_PLUS_EQ = 50,
  anon_sym_DASH_EQ = 51,
  anon_sym_STAR_EQ = 52,
  anon_sym_SLASH_EQ = 53,
  anon_sym_PERCENT_EQ = 54,
  anon_sym_STAR_STAR_EQ = 55,
  anon_sym_PIPE_PIPE_EQ = 56,
  anon_sym_AMP_AMP_EQ = 57,
  anon_sym_LT_LT_EQ = 58,
  anon_sym_GT_GT_EQ = 59,
  anon_sym_PIPE_EQ = 60,
  anon_sym_CARET_EQ = 61,
  anon_sym_AMP_EQ = 62,
  sym__celo = 63,
  sym__real = 64,
  sym_ime = 65,
  sym_niz = 66,
  anon_sym_resnica = 67,
  anon_sym_la = 68,
  sym_komentar = 69,
  sym_datoteka = 70,
  aux_sym__zaporedje = 71,
  sym__stavek = 72,
  sym_multifunkcijski_klic = 73,
  sym_funkcijski_klic = 74,
  sym_deklaracija = 75,
  sym_inicializacija = 76,
  sym_prirejanje_referenci = 77,
  sym_prirejanje = 78,
  sym_prirejanje_seznamu = 79,
  sym_okvir = 80,
  sym_pogojni_stavek = 81,
  sym_zanka_dokler = 82,
  sym_zanka_za = 83,
  sym_interval = 84,
  sym_funkcija = 85,
  sym_parametri = 86,
  sym_parameter = 87,
  sym_vrni = 88,
  sym_pretvorba = 89,
  sym_argumenti = 90,
  sym__izraz = 91,
  sym_logicni_izraz = 92,
  sym_bitni_izraz = 93,
  sym_primerjalni_izraz = 94,
  sym_aritmeticni_izraz = 95,
  sym__osnovni_izraz = 96,
  sym_tip = 97,
  sym_velikost = 98,
  sym_prireditveni_op = 99,
  sym_stevilo = 100,
  sym_bool = 101,
  aux_sym_datoteka_repeat1 = 102,
  aux_sym_parametri_repeat1 = 103,
  aux_sym_argumenti_repeat1 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_naj] = "naj",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_e] = "če",
  [anon_sym_ene] = "čene",
  [anon_sym_dokler] = "dokler",
  [anon_sym_za] = "za",
  [anon_sym_v] = "v",
  [anon_sym_intervalu] = "intervalu",
  [anon_sym_COMMA] = ",",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_funkcija] = "funkcija",
  [anon_sym_DASH_GT] = "->",
  [sym_prekini] = "prekini",
  [anon_sym_vrni] = "vrni",
  [anon_sym_kot] = "kot",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DOT] = ".",
  [anon_sym_brez] = "brez",
  [anon_sym_bool] = "bool",
  [anon_sym_celo] = "celo",
  [anon_sym_real] = "real",
  [anon_sym_znak] = "znak",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_STAR_STAR_EQ] = "**=",
  [anon_sym_PIPE_PIPE_EQ] = "||=",
  [anon_sym_AMP_AMP_EQ] = "&&=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_AMP_EQ] = "&=",
  [sym__celo] = "_celo",
  [sym__real] = "_real",
  [sym_ime] = "ime",
  [sym_niz] = "niz",
  [anon_sym_resnica] = "resnica",
  [anon_sym_la] = "laž",
  [sym_komentar] = "komentar",
  [sym_datoteka] = "datoteka",
  [aux_sym__zaporedje] = "_zaporedje",
  [sym__stavek] = "_stavek",
  [sym_multifunkcijski_klic] = "multifunkcijski_klic",
  [sym_funkcijski_klic] = "funkcijski_klic",
  [sym_deklaracija] = "deklaracija",
  [sym_inicializacija] = "inicializacija",
  [sym_prirejanje_referenci] = "prirejanje_referenci",
  [sym_prirejanje] = "prirejanje",
  [sym_prirejanje_seznamu] = "prirejanje_seznamu",
  [sym_okvir] = "okvir",
  [sym_pogojni_stavek] = "pogojni_stavek",
  [sym_zanka_dokler] = "zanka_dokler",
  [sym_zanka_za] = "zanka_za",
  [sym_interval] = "interval",
  [sym_funkcija] = "funkcija",
  [sym_parametri] = "parametri",
  [sym_parameter] = "parameter",
  [sym_vrni] = "vrni",
  [sym_pretvorba] = "pretvorba",
  [sym_argumenti] = "argumenti",
  [sym__izraz] = "_izraz",
  [sym_logicni_izraz] = "logicni_izraz",
  [sym_bitni_izraz] = "bitni_izraz",
  [sym_primerjalni_izraz] = "primerjalni_izraz",
  [sym_aritmeticni_izraz] = "aritmeticni_izraz",
  [sym__osnovni_izraz] = "_osnovni_izraz",
  [sym_tip] = "tip",
  [sym_velikost] = "velikost",
  [sym_prireditveni_op] = "prireditveni_op",
  [sym_stevilo] = "stevilo",
  [sym_bool] = "bool",
  [aux_sym_datoteka_repeat1] = "datoteka_repeat1",
  [aux_sym_parametri_repeat1] = "parametri_repeat1",
  [aux_sym_argumenti_repeat1] = "argumenti_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_naj] = anon_sym_naj,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_ene] = anon_sym_ene,
  [anon_sym_dokler] = anon_sym_dokler,
  [anon_sym_za] = anon_sym_za,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_intervalu] = anon_sym_intervalu,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_funkcija] = anon_sym_funkcija,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_prekini] = sym_prekini,
  [anon_sym_vrni] = anon_sym_vrni,
  [anon_sym_kot] = anon_sym_kot,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_brez] = anon_sym_brez,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_celo] = anon_sym_celo,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_znak] = anon_sym_znak,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_STAR_STAR_EQ] = anon_sym_STAR_STAR_EQ,
  [anon_sym_PIPE_PIPE_EQ] = anon_sym_PIPE_PIPE_EQ,
  [anon_sym_AMP_AMP_EQ] = anon_sym_AMP_AMP_EQ,
  [anon_sym_LT_LT_EQ] = anon_sym_LT_LT_EQ,
  [anon_sym_GT_GT_EQ] = anon_sym_GT_GT_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_CARET_EQ] = anon_sym_CARET_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [sym__celo] = sym__celo,
  [sym__real] = sym__real,
  [sym_ime] = sym_ime,
  [sym_niz] = sym_niz,
  [anon_sym_resnica] = anon_sym_resnica,
  [anon_sym_la] = anon_sym_la,
  [sym_komentar] = sym_komentar,
  [sym_datoteka] = sym_datoteka,
  [aux_sym__zaporedje] = aux_sym__zaporedje,
  [sym__stavek] = sym__stavek,
  [sym_multifunkcijski_klic] = sym_multifunkcijski_klic,
  [sym_funkcijski_klic] = sym_funkcijski_klic,
  [sym_deklaracija] = sym_deklaracija,
  [sym_inicializacija] = sym_inicializacija,
  [sym_prirejanje_referenci] = sym_prirejanje_referenci,
  [sym_prirejanje] = sym_prirejanje,
  [sym_prirejanje_seznamu] = sym_prirejanje_seznamu,
  [sym_okvir] = sym_okvir,
  [sym_pogojni_stavek] = sym_pogojni_stavek,
  [sym_zanka_dokler] = sym_zanka_dokler,
  [sym_zanka_za] = sym_zanka_za,
  [sym_interval] = sym_interval,
  [sym_funkcija] = sym_funkcija,
  [sym_parametri] = sym_parametri,
  [sym_parameter] = sym_parameter,
  [sym_vrni] = sym_vrni,
  [sym_pretvorba] = sym_pretvorba,
  [sym_argumenti] = sym_argumenti,
  [sym__izraz] = sym__izraz,
  [sym_logicni_izraz] = sym_logicni_izraz,
  [sym_bitni_izraz] = sym_bitni_izraz,
  [sym_primerjalni_izraz] = sym_primerjalni_izraz,
  [sym_aritmeticni_izraz] = sym_aritmeticni_izraz,
  [sym__osnovni_izraz] = sym__osnovni_izraz,
  [sym_tip] = sym_tip,
  [sym_velikost] = sym_velikost,
  [sym_prireditveni_op] = sym_prireditveni_op,
  [sym_stevilo] = sym_stevilo,
  [sym_bool] = sym_bool,
  [aux_sym_datoteka_repeat1] = aux_sym_datoteka_repeat1,
  [aux_sym_parametri_repeat1] = aux_sym_parametri_repeat1,
  [aux_sym_argumenti_repeat1] = aux_sym_argumenti_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_naj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ene] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dokler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_za] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_intervalu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_funkcija] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_prekini] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_vrni] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brez] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_celo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_znak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym__celo] = {
    .visible = false,
    .named = true,
  },
  [sym__real] = {
    .visible = false,
    .named = true,
  },
  [sym_ime] = {
    .visible = true,
    .named = true,
  },
  [sym_niz] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_resnica] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_la] = {
    .visible = true,
    .named = false,
  },
  [sym_komentar] = {
    .visible = true,
    .named = true,
  },
  [sym_datoteka] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__zaporedje] = {
    .visible = false,
    .named = false,
  },
  [sym__stavek] = {
    .visible = false,
    .named = true,
  },
  [sym_multifunkcijski_klic] = {
    .visible = true,
    .named = true,
  },
  [sym_funkcijski_klic] = {
    .visible = true,
    .named = true,
  },
  [sym_deklaracija] = {
    .visible = true,
    .named = true,
  },
  [sym_inicializacija] = {
    .visible = true,
    .named = true,
  },
  [sym_prirejanje_referenci] = {
    .visible = true,
    .named = true,
  },
  [sym_prirejanje] = {
    .visible = true,
    .named = true,
  },
  [sym_prirejanje_seznamu] = {
    .visible = true,
    .named = true,
  },
  [sym_okvir] = {
    .visible = true,
    .named = true,
  },
  [sym_pogojni_stavek] = {
    .visible = true,
    .named = true,
  },
  [sym_zanka_dokler] = {
    .visible = true,
    .named = true,
  },
  [sym_zanka_za] = {
    .visible = true,
    .named = true,
  },
  [sym_interval] = {
    .visible = true,
    .named = true,
  },
  [sym_funkcija] = {
    .visible = true,
    .named = true,
  },
  [sym_parametri] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_vrni] = {
    .visible = true,
    .named = true,
  },
  [sym_pretvorba] = {
    .visible = true,
    .named = true,
  },
  [sym_argumenti] = {
    .visible = true,
    .named = true,
  },
  [sym__izraz] = {
    .visible = false,
    .named = true,
  },
  [sym_logicni_izraz] = {
    .visible = true,
    .named = true,
  },
  [sym_bitni_izraz] = {
    .visible = true,
    .named = true,
  },
  [sym_primerjalni_izraz] = {
    .visible = true,
    .named = true,
  },
  [sym_aritmeticni_izraz] = {
    .visible = true,
    .named = true,
  },
  [sym__osnovni_izraz] = {
    .visible = false,
    .named = true,
  },
  [sym_tip] = {
    .visible = true,
    .named = true,
  },
  [sym_velikost] = {
    .visible = true,
    .named = true,
  },
  [sym_prireditveni_op] = {
    .visible = true,
    .named = true,
  },
  [sym_stevilo] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_datoteka_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parametri_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argumenti_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argumenti = 1,
  field_funkcija = 2,
  field_ime = 3,
  field_inicializacija = 4,
  field_interval = 5,
  field_korak = 6,
  field_parametri = 7,
  field_pogoj = 8,
  field_spremenljivka = 9,
  field_telo = 10,
  field_vrni = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argumenti] = "argumenti",
  [field_funkcija] = "funkcija",
  [field_ime] = "ime",
  [field_inicializacija] = "inicializacija",
  [field_interval] = "interval",
  [field_korak] = "korak",
  [field_parametri] = "parametri",
  [field_pogoj] = "pogoj",
  [field_spremenljivka] = "spremenljivka",
  [field_telo] = "telo",
  [field_vrni] = "vrni",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pogoj, 1},
    {field_telo, 2},
  [2] =
    {field_funkcija, 0},
  [3] =
    {field_argumenti, 2},
    {field_funkcija, 0},
  [5] =
    {field_ime, 1},
    {field_telo, 4},
  [7] =
    {field_argumenti, 3},
    {field_funkcija, 0},
  [9] =
    {field_interval, 4},
    {field_spremenljivka, 1},
    {field_telo, 5},
  [12] =
    {field_ime, 1},
    {field_parametri, 3},
    {field_telo, 5},
  [15] =
    {field_inicializacija, 1},
    {field_korak, 5},
    {field_pogoj, 3},
    {field_telo, 6},
  [19] =
    {field_ime, 1},
    {field_telo, 6},
    {field_vrni, 5},
  [22] =
    {field_ime, 1},
    {field_parametri, 3},
    {field_telo, 7},
    {field_vrni, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 2,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 40,
  [41] = 37,
  [42] = 37,
  [43] = 36,
  [44] = 44,
  [45] = 14,
  [46] = 21,
  [47] = 30,
  [48] = 31,
  [49] = 33,
  [50] = 13,
  [51] = 12,
  [52] = 11,
  [53] = 28,
  [54] = 19,
  [55] = 10,
  [56] = 18,
  [57] = 6,
  [58] = 25,
  [59] = 5,
  [60] = 26,
  [61] = 17,
  [62] = 24,
  [63] = 3,
  [64] = 15,
  [65] = 16,
  [66] = 7,
  [67] = 27,
  [68] = 34,
  [69] = 32,
  [70] = 23,
  [71] = 4,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 73,
  [77] = 22,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 9,
  [82] = 82,
  [83] = 8,
  [84] = 79,
  [85] = 20,
  [86] = 86,
  [87] = 29,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 89,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 90,
  [98] = 98,
  [99] = 95,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 114,
  [119] = 119,
  [120] = 120,
  [121] = 111,
  [122] = 122,
  [123] = 123,
  [124] = 113,
  [125] = 125,
  [126] = 102,
  [127] = 120,
  [128] = 108,
  [129] = 119,
  [130] = 123,
  [131] = 115,
  [132] = 132,
  [133] = 125,
  [134] = 134,
  [135] = 100,
  [136] = 136,
  [137] = 104,
  [138] = 117,
  [139] = 116,
  [140] = 140,
  [141] = 141,
  [142] = 132,
  [143] = 143,
  [144] = 141,
  [145] = 112,
  [146] = 140,
  [147] = 147,
  [148] = 107,
  [149] = 136,
  [150] = 134,
  [151] = 151,
  [152] = 152,
  [153] = 152,
  [154] = 16,
  [155] = 18,
  [156] = 14,
  [157] = 157,
  [158] = 25,
  [159] = 17,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 163,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 19,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 164,
  [178] = 178,
  [179] = 179,
  [180] = 26,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 192,
  [195] = 191,
  [196] = 193,
  [197] = 193,
  [198] = 198,
  [199] = 199,
  [200] = 192,
  [201] = 199,
  [202] = 199,
  [203] = 203,
  [204] = 204,
  [205] = 204,
  [206] = 204,
  [207] = 207,
  [208] = 208,
  [209] = 208,
  [210] = 162,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 163,
  [215] = 164,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 221,
  [223] = 223,
  [224] = 223,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 227,
  [229] = 229,
  [230] = 230,
  [231] = 221,
  [232] = 227,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 236,
  [246] = 246,
  [247] = 234,
  [248] = 241,
  [249] = 249,
  [250] = 242,
  [251] = 237,
  [252] = 240,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 242,
  [260] = 260,
  [261] = 241,
  [262] = 258,
  [263] = 258,
  [264] = 236,
  [265] = 235,
};

static inline bool sym_ime_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_ime_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'y')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_ime_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_ime_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(91);
      if (lookahead == '!') ADVANCE(94);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '%') ADVANCE(164);
      if (lookahead == '&') ADVANCE(149);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(126);
      if (lookahead == '+') ADVANCE(122);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(129);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(157);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(152);
      if (lookahead == 'b') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(35);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'k') ADVANCE(68);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'n') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(118);
      if (lookahead == 'z') ADVANCE(27);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(153);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == 269) ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == 'l') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (sym_ime_character_set_1(lookahead)) ADVANCE(230);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == 'k') ADVANCE(68);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == 269) ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(117);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(18);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_ime_character_set_1(lookahead)) ADVANCE(230);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '>') ADVANCE(134);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'j') ADVANCE(97);
      END_STATE();
    case 50:
      if (lookahead == 'j') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(170);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(169);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 77:
      if (lookahead == 'v') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == 'z') ADVANCE(166);
      END_STATE();
    case 79:
      if (lookahead == 382) ADVANCE(234);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 88:
      if (eof) ADVANCE(91);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == ',') ADVANCE(120);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == ']') ADVANCE(104);
      if (lookahead == '^') ADVANCE(16);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'z') ADVANCE(194);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == 269) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == '%') ADVANCE(163);
      if (lookahead == '&') ADVANCE(150);
      if (lookahead == '(') ADVANCE(95);
      if (lookahead == '*') ADVANCE(127);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(123);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '>') ADVANCE(158);
      if (lookahead == '@') ADVANCE(102);
      if (lookahead == '[') ADVANCE(103);
      if (lookahead == '^') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'k') ADVANCE(222);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'z') ADVANCE(194);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '|') ADVANCE(154);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == 269) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '#') ADVANCE(236);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(221);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 'v') ADVANCE(225);
      if (lookahead == 'z') ADVANCE(194);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '}') ADVANCE(106);
      if (lookahead == 269) ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(230);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(156);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_naj);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_naj);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(155);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(203);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ene);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_ene);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_dokler);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_dokler);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_za);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_za);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_intervalu);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(172);
      if (lookahead == '>') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(131);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_funkcija);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_funkcija);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_prekini);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_prekini);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_vrni);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_vrni);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_kot);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_kot);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(179);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(142);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(141);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '|') ADVANCE(144);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(143);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(148);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(159);
      if (lookahead == '>') ADVANCE(147);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(146);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(145);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_brez);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_celo);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_znak);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(86);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__real);
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(211);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(230);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(116);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(230);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(133);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(230);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(229);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(230);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(233);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(230);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(208);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(197);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(110);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(226);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(108);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(112);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(223);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(215);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(138);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(136);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(212);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(199);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(219);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(98);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(195);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(216);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(198);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(210);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(204);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(206);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(214);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(207);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(209);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(213);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(227);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(114);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(205);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(217);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 's') ADVANCE(220);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 't') ADVANCE(140);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'u') ADVANCE(218);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 382) ADVANCE(235);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_ime);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_niz);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_resnica);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_resnica);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_la);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_la);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(230);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_komentar);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 89},
  [3] = {.lex_state = 89},
  [4] = {.lex_state = 89},
  [5] = {.lex_state = 89},
  [6] = {.lex_state = 89},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 89},
  [9] = {.lex_state = 89},
  [10] = {.lex_state = 89},
  [11] = {.lex_state = 89},
  [12] = {.lex_state = 89},
  [13] = {.lex_state = 89},
  [14] = {.lex_state = 89},
  [15] = {.lex_state = 89},
  [16] = {.lex_state = 89},
  [17] = {.lex_state = 89},
  [18] = {.lex_state = 89},
  [19] = {.lex_state = 89},
  [20] = {.lex_state = 89},
  [21] = {.lex_state = 89},
  [22] = {.lex_state = 89},
  [23] = {.lex_state = 89},
  [24] = {.lex_state = 89},
  [25] = {.lex_state = 89},
  [26] = {.lex_state = 89},
  [27] = {.lex_state = 89},
  [28] = {.lex_state = 89},
  [29] = {.lex_state = 89},
  [30] = {.lex_state = 89},
  [31] = {.lex_state = 89},
  [32] = {.lex_state = 89},
  [33] = {.lex_state = 89},
  [34] = {.lex_state = 89},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 88},
  [37] = {.lex_state = 88},
  [38] = {.lex_state = 88},
  [39] = {.lex_state = 88},
  [40] = {.lex_state = 88},
  [41] = {.lex_state = 88},
  [42] = {.lex_state = 88},
  [43] = {.lex_state = 88},
  [44] = {.lex_state = 88},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 88},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 88},
  [153] = {.lex_state = 88},
  [154] = {.lex_state = 88},
  [155] = {.lex_state = 88},
  [156] = {.lex_state = 88},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 88},
  [159] = {.lex_state = 88},
  [160] = {.lex_state = 88},
  [161] = {.lex_state = 88},
  [162] = {.lex_state = 90},
  [163] = {.lex_state = 90},
  [164] = {.lex_state = 90},
  [165] = {.lex_state = 88},
  [166] = {.lex_state = 88},
  [167] = {.lex_state = 88},
  [168] = {.lex_state = 88},
  [169] = {.lex_state = 88},
  [170] = {.lex_state = 88},
  [171] = {.lex_state = 88},
  [172] = {.lex_state = 88},
  [173] = {.lex_state = 88},
  [174] = {.lex_state = 88},
  [175] = {.lex_state = 88},
  [176] = {.lex_state = 88},
  [177] = {.lex_state = 88},
  [178] = {.lex_state = 88},
  [179] = {.lex_state = 88},
  [180] = {.lex_state = 88},
  [181] = {.lex_state = 88},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 89},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 6},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 88},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 88},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 88},
  [224] = {.lex_state = 88},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 6},
  [234] = {.lex_state = 6},
  [235] = {.lex_state = 6},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 6},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 88},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 88},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_naj] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_ene] = ACTIONS(1),
    [anon_sym_dokler] = ACTIONS(1),
    [anon_sym_za] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_intervalu] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_funkcija] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_prekini] = ACTIONS(1),
    [anon_sym_vrni] = ACTIONS(1),
    [anon_sym_kot] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_brez] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_celo] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_znak] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_STAR_STAR_EQ] = ACTIONS(1),
    [anon_sym_PIPE_PIPE_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [sym__celo] = ACTIONS(1),
    [sym__real] = ACTIONS(1),
    [sym_niz] = ACTIONS(1),
    [anon_sym_resnica] = ACTIONS(1),
    [anon_sym_la] = ACTIONS(1),
    [sym_komentar] = ACTIONS(1),
  },
  [1] = {
    [sym_datoteka] = STATE(260),
    [sym__stavek] = STATE(38),
    [sym_multifunkcijski_klic] = STATE(168),
    [sym_funkcijski_klic] = STATE(168),
    [sym_deklaracija] = STATE(168),
    [sym_inicializacija] = STATE(168),
    [sym_prirejanje_referenci] = STATE(168),
    [sym_prirejanje] = STATE(168),
    [sym_prirejanje_seznamu] = STATE(168),
    [sym_okvir] = STATE(168),
    [sym_pogojni_stavek] = STATE(168),
    [sym_zanka_dokler] = STATE(168),
    [sym_zanka_za] = STATE(168),
    [sym_funkcija] = STATE(168),
    [sym_vrni] = STATE(168),
    [aux_sym_datoteka_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_naj] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_e] = ACTIONS(9),
    [anon_sym_dokler] = ACTIONS(11),
    [anon_sym_za] = ACTIONS(13),
    [anon_sym_funkcija] = ACTIONS(15),
    [sym_prekini] = ACTIONS(17),
    [anon_sym_vrni] = ACTIONS(19),
    [sym_ime] = ACTIONS(21),
    [sym_komentar] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_DOT,
    ACTIONS(29), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(25), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [50] = 10,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(37), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
      sym_komentar,
    ACTIONS(39), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_ime,
  [104] = 2,
    ACTIONS(59), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(57), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [142] = 5,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(63), 13,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(61), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [186] = 10,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(61), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
      sym_komentar,
    ACTIONS(63), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_ime,
  [240] = 2,
    ACTIONS(67), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(65), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [278] = 17,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(71), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [346] = 17,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(89), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [414] = 14,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_komentar,
    ACTIONS(63), 9,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
  [476] = 16,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(63), 9,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
  [542] = 2,
    ACTIONS(93), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(91), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [580] = 5,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(93), 13,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(91), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [624] = 2,
    ACTIONS(97), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(95), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [662] = 5,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 13,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(37), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [706] = 2,
    ACTIONS(101), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(99), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [744] = 2,
    ACTIONS(105), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(103), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [782] = 2,
    ACTIONS(109), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(107), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [820] = 2,
    ACTIONS(113), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(111), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [858] = 17,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(117), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [926] = 10,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(119), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
      sym_komentar,
    ACTIONS(121), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_ime,
  [980] = 17,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(125), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [1048] = 2,
    ACTIONS(129), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(127), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1086] = 2,
    ACTIONS(63), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(61), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1124] = 2,
    ACTIONS(133), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(131), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1162] = 2,
    ACTIONS(137), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(135), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1200] = 5,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(121), 13,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(119), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1244] = 5,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(141), 13,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(139), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1288] = 17,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(83), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(145), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [1356] = 2,
    ACTIONS(149), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(147), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1394] = 5,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(153), 13,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(151), 16,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1438] = 2,
    ACTIONS(157), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(155), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1476] = 2,
    ACTIONS(161), 14,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_kot,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      sym_ime,
    ACTIONS(159), 19,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_komentar,
  [1514] = 14,
    ACTIONS(41), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_kot,
    ACTIONS(45), 1,
      anon_sym_AMP_AMP,
    ACTIONS(47), 1,
      anon_sym_LT_LT,
    ACTIONS(49), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      anon_sym_STAR,
    ACTIONS(79), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(81), 1,
      anon_sym_AMP,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(53), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(77), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      sym_komentar,
    ACTIONS(121), 9,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
  [1576] = 6,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_AT,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(29), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [1618] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1671] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1724] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(40), 2,
      sym__stavek,
      aux_sym_datoteka_repeat1,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1777] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1830] = 13,
    ACTIONS(179), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 1,
      anon_sym_naj,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_e,
    ACTIONS(190), 1,
      anon_sym_dokler,
    ACTIONS(193), 1,
      anon_sym_za,
    ACTIONS(196), 1,
      anon_sym_funkcija,
    ACTIONS(199), 1,
      sym_prekini,
    ACTIONS(202), 1,
      anon_sym_vrni,
    ACTIONS(205), 1,
      sym_ime,
    ACTIONS(208), 1,
      sym_komentar,
    STATE(40), 2,
      sym__stavek,
      aux_sym_datoteka_repeat1,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1883] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1936] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [1989] = 13,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(19), 1,
      anon_sym_vrni,
    ACTIONS(21), 1,
      sym_ime,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [2042] = 13,
    ACTIONS(217), 1,
      anon_sym_naj,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_e,
    ACTIONS(228), 1,
      anon_sym_dokler,
    ACTIONS(231), 1,
      anon_sym_za,
    ACTIONS(234), 1,
      anon_sym_funkcija,
    ACTIONS(237), 1,
      sym_prekini,
    ACTIONS(240), 1,
      anon_sym_vrni,
    ACTIONS(243), 1,
      sym_ime,
    ACTIONS(246), 1,
      sym_komentar,
    STATE(44), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [2095] = 2,
    ACTIONS(97), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(95), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2125] = 10,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(121), 3,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(119), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
  [2171] = 2,
    ACTIONS(149), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(147), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2201] = 5,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(153), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(151), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2237] = 2,
    ACTIONS(161), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(159), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2267] = 5,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2303] = 2,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(91), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2333] = 16,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
  [2391] = 5,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(141), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(139), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2427] = 2,
    ACTIONS(113), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2457] = 14,
    ACTIONS(63), 1,
      anon_sym_PIPE,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2511] = 2,
    ACTIONS(109), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(107), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2541] = 10,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(63), 3,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(61), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
  [2587] = 2,
    ACTIONS(133), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(131), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2617] = 5,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2653] = 2,
    ACTIONS(137), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2683] = 2,
    ACTIONS(105), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(103), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2713] = 2,
    ACTIONS(63), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(61), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2743] = 10,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(39), 3,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(37), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
  [2789] = 5,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(39), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(37), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2825] = 2,
    ACTIONS(101), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2855] = 2,
    ACTIONS(67), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(65), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2885] = 5,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(121), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(119), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [2921] = 14,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(119), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2975] = 2,
    ACTIONS(157), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(155), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [3005] = 2,
    ACTIONS(129), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(127), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [3035] = 2,
    ACTIONS(59), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 20,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [3065] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_za,
    ACTIONS(15), 1,
      anon_sym_funkcija,
    ACTIONS(17), 1,
      sym_prekini,
    ACTIONS(23), 1,
      sym_komentar,
    ACTIONS(277), 1,
      anon_sym_naj,
    ACTIONS(279), 1,
      anon_sym_e,
    ACTIONS(281), 1,
      anon_sym_vrni,
    ACTIONS(283), 1,
      sym_ime,
    STATE(230), 1,
      sym__stavek,
    STATE(168), 13,
      sym_multifunkcijski_klic,
      sym_funkcijski_klic,
      sym_deklaracija,
      sym_inicializacija,
      sym_prirejanje_referenci,
      sym_prirejanje,
      sym_prirejanje_seznamu,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
  [3114] = 13,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(301), 1,
      sym_niz,
    STATE(91), 1,
      aux_sym_argumenti_repeat1,
    STATE(245), 1,
      sym_argumenti,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(82), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3164] = 13,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(301), 1,
      sym_niz,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_argumenti_repeat1,
    STATE(236), 1,
      sym_argumenti,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(82), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3214] = 13,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(301), 1,
      sym_niz,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_argumenti_repeat1,
    STATE(239), 1,
      sym_argumenti,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(82), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3264] = 13,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(301), 1,
      sym_niz,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      aux_sym_argumenti_repeat1,
    STATE(264), 1,
      sym_argumenti,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(82), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3314] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(123), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3369] = 17,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3426] = 17,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_okvir,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3483] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(319), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3538] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(87), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3593] = 17,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3650] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(69), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3705] = 17,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_okvir,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3762] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(115), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3817] = 17,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    STATE(172), 1,
      sym_okvir,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3874] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(143), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3929] = 3,
    ACTIONS(325), 1,
      anon_sym_SEMI,
    ACTIONS(329), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(327), 15,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_kot,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
  [3957] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4011] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4065] = 11,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(335), 1,
      sym_niz,
    STATE(94), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(78), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4109] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4163] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4217] = 11,
    ACTIONS(341), 1,
      anon_sym_BANG,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    ACTIONS(347), 1,
      anon_sym_AT,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(353), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(359), 1,
      sym_ime,
    ACTIONS(362), 1,
      sym_niz,
    STATE(94), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(365), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(96), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4261] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4315] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4369] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4423] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4477] = 16,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4531] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(390), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(22), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4572] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(394), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(6), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4613] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(396), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(59), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4654] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(398), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(57), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4695] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(400), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(90), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4736] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(402), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(79), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4777] = 15,
    ACTIONS(249), 1,
      anon_sym_STAR_STAR,
    ACTIONS(251), 1,
      anon_sym_kot,
    ACTIONS(253), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_LT_LT,
    ACTIONS(257), 1,
      anon_sym_GT_GT,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(271), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(273), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      anon_sym_CARET,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    ACTIONS(259), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(261), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(265), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(269), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4828] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(404), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(99), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4869] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(406), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(93), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4910] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(408), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(84), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4951] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(410), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(86), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4992] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(412), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(55), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5033] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(414), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(81), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5074] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(416), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(29), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5115] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(418), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(52), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5156] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(420), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(63), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5197] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(422), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(13), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5238] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(424), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(12), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5279] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(426), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(11), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5320] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(428), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(31), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5361] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(430), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(28), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5402] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(432), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(10), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5443] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(434), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(98), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5484] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(436), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(62), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5525] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(438), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(87), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5566] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(440), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(67), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5607] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(442), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(5), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5648] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(444), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(53), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5689] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(446), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(89), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5730] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(448), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(48), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5771] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(450), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(24), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5812] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(452), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(3), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5853] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(454), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(15), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5894] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(456), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(27), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5935] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(458), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(21), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5976] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(460), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(77), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6017] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(462), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(34), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6058] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(464), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(97), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6099] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(466), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(51), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6140] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(468), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(50), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6181] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(470), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(83), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6222] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(472), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(85), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6263] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(474), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(64), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6304] = 11,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(476), 1,
      sym_niz,
    STATE(88), 1,
      sym_primerjalni_izraz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(106), 9,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6347] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(478), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(20), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6388] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(480), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(9), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6429] = 10,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      anon_sym_DASH,
    ACTIONS(384), 1,
      sym__celo,
    ACTIONS(386), 1,
      sym__real,
    ACTIONS(388), 1,
      sym_ime,
    ACTIONS(482), 1,
      sym_niz,
    ACTIONS(392), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(8), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6470] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(484), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(80), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6511] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(486), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(95), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6552] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(488), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(68), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6593] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(490), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(46), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6634] = 10,
    ACTIONS(285), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 1,
      anon_sym_AT,
    ACTIONS(293), 1,
      anon_sym_DASH,
    ACTIONS(295), 1,
      sym__celo,
    ACTIONS(297), 1,
      sym__real,
    ACTIONS(299), 1,
      sym_ime,
    ACTIONS(492), 1,
      sym_niz,
    ACTIONS(303), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(92), 10,
      sym_funkcijski_klic,
      sym_pretvorba,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6675] = 10,
    ACTIONS(494), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(500), 1,
      anon_sym_AT,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_prireditveni_op,
    ACTIONS(506), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(508), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(510), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(504), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6715] = 10,
    ACTIONS(494), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(512), 1,
      anon_sym_AT,
    ACTIONS(514), 1,
      anon_sym_LBRACK,
    STATE(144), 1,
      sym_prireditveni_op,
    ACTIONS(506), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(508), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(510), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(504), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6755] = 2,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_komentar,
    ACTIONS(101), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6776] = 2,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_komentar,
    ACTIONS(109), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6797] = 2,
    ACTIONS(95), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_komentar,
    ACTIONS(97), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6818] = 7,
    ACTIONS(498), 1,
      anon_sym_EQ,
    ACTIONS(516), 1,
      anon_sym_v,
    STATE(141), 1,
      sym_prireditveni_op,
    ACTIONS(506), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(508), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(510), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(504), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6849] = 2,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_komentar,
    ACTIONS(133), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6870] = 2,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_komentar,
    ACTIONS(105), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6891] = 6,
    ACTIONS(498), 1,
      anon_sym_EQ,
    STATE(112), 1,
      sym_prireditveni_op,
    ACTIONS(506), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(508), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(510), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(504), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6919] = 6,
    ACTIONS(498), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_prireditveni_op,
    ACTIONS(506), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(508), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(510), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(504), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6947] = 3,
    ACTIONS(522), 1,
      anon_sym_ene,
    ACTIONS(518), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(520), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6968] = 2,
    ACTIONS(524), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(526), 9,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [6987] = 2,
    ACTIONS(528), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(530), 9,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7006] = 2,
    ACTIONS(524), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(526), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7024] = 2,
    ACTIONS(532), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(534), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7042] = 2,
    ACTIONS(536), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(538), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7060] = 3,
    ACTIONS(542), 1,
      anon_sym_SEMI,
    ACTIONS(540), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(544), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7080] = 2,
    ACTIONS(546), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(548), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7098] = 2,
    ACTIONS(550), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(552), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7116] = 2,
    ACTIONS(554), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(556), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7134] = 2,
    ACTIONS(558), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(560), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7152] = 2,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(113), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7170] = 2,
    ACTIONS(562), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(564), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7188] = 2,
    ACTIONS(566), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(568), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7206] = 2,
    ACTIONS(570), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(572), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7224] = 2,
    ACTIONS(528), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(530), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7242] = 2,
    ACTIONS(574), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(576), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7260] = 2,
    ACTIONS(578), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(580), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7278] = 2,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(137), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7296] = 2,
    ACTIONS(582), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(584), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [7313] = 2,
    ACTIONS(586), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(588), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [7328] = 2,
    ACTIONS(590), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(592), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [7343] = 2,
    ACTIONS(586), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(588), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [7358] = 2,
    ACTIONS(586), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(588), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [7373] = 2,
    ACTIONS(586), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(588), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [7388] = 2,
    ACTIONS(586), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(588), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [7403] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7423] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7443] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7463] = 5,
    ACTIONS(602), 1,
      anon_sym_AT,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_tip,
    ACTIONS(608), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7483] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(263), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7503] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(221), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7523] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7543] = 5,
    ACTIONS(610), 1,
      anon_sym_AT,
    ACTIONS(612), 1,
      anon_sym_LBRACK,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_tip,
    ACTIONS(616), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7563] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7583] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7603] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(167), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7623] = 5,
    ACTIONS(602), 1,
      anon_sym_AT,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
    ACTIONS(618), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_tip,
    ACTIONS(608), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7643] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(258), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7663] = 5,
    ACTIONS(610), 1,
      anon_sym_AT,
    ACTIONS(614), 1,
      anon_sym_LBRACE,
    ACTIONS(620), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_tip,
    ACTIONS(616), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7683] = 5,
    ACTIONS(594), 1,
      anon_sym_AT,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    STATE(155), 1,
      sym_tip,
    ACTIONS(600), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7703] = 3,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    ACTIONS(628), 1,
      anon_sym_STAR,
    ACTIONS(626), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [7716] = 5,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(632), 1,
      sym_ime,
    STATE(211), 1,
      sym_parameter,
    STATE(213), 1,
      aux_sym_parametri_repeat1,
    STATE(248), 1,
      sym_parametri,
  [7732] = 5,
    ACTIONS(632), 1,
      sym_ime,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_parameter,
    STATE(213), 1,
      aux_sym_parametri_repeat1,
    STATE(261), 1,
      sym_parametri,
  [7748] = 5,
    ACTIONS(632), 1,
      sym_ime,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_parameter,
    STATE(213), 1,
      aux_sym_parametri_repeat1,
    STATE(241), 1,
      sym_parametri,
  [7764] = 5,
    ACTIONS(632), 1,
      sym_ime,
    ACTIONS(638), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_parameter,
    STATE(213), 1,
      aux_sym_parametri_repeat1,
    STATE(253), 1,
      sym_parametri,
  [7780] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(640), 1,
      anon_sym_e,
    STATE(179), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [7791] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(642), 1,
      anon_sym_e,
    STATE(179), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [7802] = 2,
    ACTIONS(644), 1,
      anon_sym_ene,
    ACTIONS(518), 2,
      anon_sym_SEMI,
      anon_sym_LBRACE,
  [7810] = 2,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(646), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7818] = 1,
    ACTIONS(650), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7824] = 3,
    ACTIONS(632), 1,
      sym_ime,
    STATE(217), 1,
      aux_sym_parametri_repeat1,
    STATE(219), 1,
      sym_parameter,
  [7834] = 1,
    ACTIONS(524), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_ene,
  [7840] = 1,
    ACTIONS(528), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_ene,
  [7846] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      anon_sym_DASH_GT,
    STATE(178), 1,
      sym_okvir,
  [7856] = 3,
    ACTIONS(654), 1,
      sym_ime,
    STATE(217), 1,
      aux_sym_parametri_repeat1,
    STATE(256), 1,
      sym_parameter,
  [7866] = 2,
    STATE(225), 1,
      sym_interval,
    ACTIONS(657), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [7874] = 2,
    ACTIONS(648), 1,
      anon_sym_COMMA,
    ACTIONS(659), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7882] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(661), 1,
      anon_sym_DASH_GT,
    STATE(166), 1,
      sym_okvir,
  [7892] = 2,
    ACTIONS(663), 1,
      anon_sym_SEMI,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
  [7899] = 2,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_RBRACK,
  [7906] = 2,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(673), 1,
      anon_sym_EQ,
  [7913] = 2,
    ACTIONS(671), 1,
      anon_sym_COLON,
    ACTIONS(675), 1,
      anon_sym_EQ,
  [7920] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_okvir,
  [7927] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_okvir,
  [7934] = 2,
    ACTIONS(677), 1,
      sym__celo,
    STATE(250), 1,
      sym_velikost,
  [7941] = 2,
    ACTIONS(677), 1,
      sym__celo,
    STATE(242), 1,
      sym_velikost,
  [7948] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_okvir,
  [7955] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_okvir,
  [7962] = 2,
    ACTIONS(679), 1,
      anon_sym_SEMI,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
  [7969] = 2,
    ACTIONS(677), 1,
      sym__celo,
    STATE(259), 1,
      sym_velikost,
  [7976] = 2,
    ACTIONS(683), 1,
      sym_ime,
    STATE(238), 1,
      sym_prirejanje,
  [7983] = 1,
    ACTIONS(165), 1,
      sym_ime,
  [7987] = 1,
    ACTIONS(339), 1,
      sym_ime,
  [7991] = 1,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
  [7995] = 1,
    ACTIONS(687), 1,
      sym_ime,
  [7999] = 1,
    ACTIONS(689), 1,
      anon_sym_SEMI,
  [8003] = 1,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
  [8007] = 1,
    ACTIONS(693), 1,
      anon_sym_EQ,
  [8011] = 1,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
  [8015] = 1,
    ACTIONS(697), 1,
      anon_sym_RBRACK,
  [8019] = 1,
    ACTIONS(699), 1,
      sym_ime,
  [8023] = 1,
    ACTIONS(701), 1,
      anon_sym_LPAREN,
  [8027] = 1,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
  [8031] = 1,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
  [8035] = 1,
    ACTIONS(31), 1,
      sym_ime,
  [8039] = 1,
    ACTIONS(707), 1,
      anon_sym_RBRACE,
  [8043] = 1,
    ACTIONS(709), 1,
      sym_ime,
  [8047] = 1,
    ACTIONS(711), 1,
      anon_sym_RBRACK,
  [8051] = 1,
    ACTIONS(713), 1,
      sym_ime,
  [8055] = 1,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [8059] = 1,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [8063] = 1,
    ACTIONS(719), 1,
      anon_sym_COLON,
  [8067] = 1,
    ACTIONS(721), 1,
      anon_sym_intervalu,
  [8071] = 1,
    ACTIONS(648), 1,
      anon_sym_COMMA,
  [8075] = 1,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
  [8079] = 1,
    ACTIONS(663), 1,
      anon_sym_SEMI,
  [8083] = 1,
    ACTIONS(725), 1,
      anon_sym_RBRACK,
  [8087] = 1,
    ACTIONS(727), 1,
      ts_builtin_sym_end,
  [8091] = 1,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
  [8095] = 1,
    ACTIONS(667), 1,
      anon_sym_SEMI,
  [8099] = 1,
    ACTIONS(679), 1,
      anon_sym_SEMI,
  [8103] = 1,
    ACTIONS(731), 1,
      anon_sym_RPAREN,
  [8107] = 1,
    ACTIONS(331), 1,
      sym_ime,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 278,
  [SMALL_STATE(9)] = 346,
  [SMALL_STATE(10)] = 414,
  [SMALL_STATE(11)] = 476,
  [SMALL_STATE(12)] = 542,
  [SMALL_STATE(13)] = 580,
  [SMALL_STATE(14)] = 624,
  [SMALL_STATE(15)] = 662,
  [SMALL_STATE(16)] = 706,
  [SMALL_STATE(17)] = 744,
  [SMALL_STATE(18)] = 782,
  [SMALL_STATE(19)] = 820,
  [SMALL_STATE(20)] = 858,
  [SMALL_STATE(21)] = 926,
  [SMALL_STATE(22)] = 980,
  [SMALL_STATE(23)] = 1048,
  [SMALL_STATE(24)] = 1086,
  [SMALL_STATE(25)] = 1124,
  [SMALL_STATE(26)] = 1162,
  [SMALL_STATE(27)] = 1200,
  [SMALL_STATE(28)] = 1244,
  [SMALL_STATE(29)] = 1288,
  [SMALL_STATE(30)] = 1356,
  [SMALL_STATE(31)] = 1394,
  [SMALL_STATE(32)] = 1438,
  [SMALL_STATE(33)] = 1476,
  [SMALL_STATE(34)] = 1514,
  [SMALL_STATE(35)] = 1576,
  [SMALL_STATE(36)] = 1618,
  [SMALL_STATE(37)] = 1671,
  [SMALL_STATE(38)] = 1724,
  [SMALL_STATE(39)] = 1777,
  [SMALL_STATE(40)] = 1830,
  [SMALL_STATE(41)] = 1883,
  [SMALL_STATE(42)] = 1936,
  [SMALL_STATE(43)] = 1989,
  [SMALL_STATE(44)] = 2042,
  [SMALL_STATE(45)] = 2095,
  [SMALL_STATE(46)] = 2125,
  [SMALL_STATE(47)] = 2171,
  [SMALL_STATE(48)] = 2201,
  [SMALL_STATE(49)] = 2237,
  [SMALL_STATE(50)] = 2267,
  [SMALL_STATE(51)] = 2303,
  [SMALL_STATE(52)] = 2333,
  [SMALL_STATE(53)] = 2391,
  [SMALL_STATE(54)] = 2427,
  [SMALL_STATE(55)] = 2457,
  [SMALL_STATE(56)] = 2511,
  [SMALL_STATE(57)] = 2541,
  [SMALL_STATE(58)] = 2587,
  [SMALL_STATE(59)] = 2617,
  [SMALL_STATE(60)] = 2653,
  [SMALL_STATE(61)] = 2683,
  [SMALL_STATE(62)] = 2713,
  [SMALL_STATE(63)] = 2743,
  [SMALL_STATE(64)] = 2789,
  [SMALL_STATE(65)] = 2825,
  [SMALL_STATE(66)] = 2855,
  [SMALL_STATE(67)] = 2885,
  [SMALL_STATE(68)] = 2921,
  [SMALL_STATE(69)] = 2975,
  [SMALL_STATE(70)] = 3005,
  [SMALL_STATE(71)] = 3035,
  [SMALL_STATE(72)] = 3065,
  [SMALL_STATE(73)] = 3114,
  [SMALL_STATE(74)] = 3164,
  [SMALL_STATE(75)] = 3214,
  [SMALL_STATE(76)] = 3264,
  [SMALL_STATE(77)] = 3314,
  [SMALL_STATE(78)] = 3369,
  [SMALL_STATE(79)] = 3426,
  [SMALL_STATE(80)] = 3483,
  [SMALL_STATE(81)] = 3538,
  [SMALL_STATE(82)] = 3593,
  [SMALL_STATE(83)] = 3650,
  [SMALL_STATE(84)] = 3705,
  [SMALL_STATE(85)] = 3762,
  [SMALL_STATE(86)] = 3817,
  [SMALL_STATE(87)] = 3874,
  [SMALL_STATE(88)] = 3929,
  [SMALL_STATE(89)] = 3957,
  [SMALL_STATE(90)] = 4011,
  [SMALL_STATE(91)] = 4065,
  [SMALL_STATE(92)] = 4109,
  [SMALL_STATE(93)] = 4163,
  [SMALL_STATE(94)] = 4217,
  [SMALL_STATE(95)] = 4261,
  [SMALL_STATE(96)] = 4315,
  [SMALL_STATE(97)] = 4369,
  [SMALL_STATE(98)] = 4423,
  [SMALL_STATE(99)] = 4477,
  [SMALL_STATE(100)] = 4531,
  [SMALL_STATE(101)] = 4572,
  [SMALL_STATE(102)] = 4613,
  [SMALL_STATE(103)] = 4654,
  [SMALL_STATE(104)] = 4695,
  [SMALL_STATE(105)] = 4736,
  [SMALL_STATE(106)] = 4777,
  [SMALL_STATE(107)] = 4828,
  [SMALL_STATE(108)] = 4869,
  [SMALL_STATE(109)] = 4910,
  [SMALL_STATE(110)] = 4951,
  [SMALL_STATE(111)] = 4992,
  [SMALL_STATE(112)] = 5033,
  [SMALL_STATE(113)] = 5074,
  [SMALL_STATE(114)] = 5115,
  [SMALL_STATE(115)] = 5156,
  [SMALL_STATE(116)] = 5197,
  [SMALL_STATE(117)] = 5238,
  [SMALL_STATE(118)] = 5279,
  [SMALL_STATE(119)] = 5320,
  [SMALL_STATE(120)] = 5361,
  [SMALL_STATE(121)] = 5402,
  [SMALL_STATE(122)] = 5443,
  [SMALL_STATE(123)] = 5484,
  [SMALL_STATE(124)] = 5525,
  [SMALL_STATE(125)] = 5566,
  [SMALL_STATE(126)] = 5607,
  [SMALL_STATE(127)] = 5648,
  [SMALL_STATE(128)] = 5689,
  [SMALL_STATE(129)] = 5730,
  [SMALL_STATE(130)] = 5771,
  [SMALL_STATE(131)] = 5812,
  [SMALL_STATE(132)] = 5853,
  [SMALL_STATE(133)] = 5894,
  [SMALL_STATE(134)] = 5935,
  [SMALL_STATE(135)] = 5976,
  [SMALL_STATE(136)] = 6017,
  [SMALL_STATE(137)] = 6058,
  [SMALL_STATE(138)] = 6099,
  [SMALL_STATE(139)] = 6140,
  [SMALL_STATE(140)] = 6181,
  [SMALL_STATE(141)] = 6222,
  [SMALL_STATE(142)] = 6263,
  [SMALL_STATE(143)] = 6304,
  [SMALL_STATE(144)] = 6347,
  [SMALL_STATE(145)] = 6388,
  [SMALL_STATE(146)] = 6429,
  [SMALL_STATE(147)] = 6470,
  [SMALL_STATE(148)] = 6511,
  [SMALL_STATE(149)] = 6552,
  [SMALL_STATE(150)] = 6593,
  [SMALL_STATE(151)] = 6634,
  [SMALL_STATE(152)] = 6675,
  [SMALL_STATE(153)] = 6715,
  [SMALL_STATE(154)] = 6755,
  [SMALL_STATE(155)] = 6776,
  [SMALL_STATE(156)] = 6797,
  [SMALL_STATE(157)] = 6818,
  [SMALL_STATE(158)] = 6849,
  [SMALL_STATE(159)] = 6870,
  [SMALL_STATE(160)] = 6891,
  [SMALL_STATE(161)] = 6919,
  [SMALL_STATE(162)] = 6947,
  [SMALL_STATE(163)] = 6968,
  [SMALL_STATE(164)] = 6987,
  [SMALL_STATE(165)] = 7006,
  [SMALL_STATE(166)] = 7024,
  [SMALL_STATE(167)] = 7042,
  [SMALL_STATE(168)] = 7060,
  [SMALL_STATE(169)] = 7080,
  [SMALL_STATE(170)] = 7098,
  [SMALL_STATE(171)] = 7116,
  [SMALL_STATE(172)] = 7134,
  [SMALL_STATE(173)] = 7152,
  [SMALL_STATE(174)] = 7170,
  [SMALL_STATE(175)] = 7188,
  [SMALL_STATE(176)] = 7206,
  [SMALL_STATE(177)] = 7224,
  [SMALL_STATE(178)] = 7242,
  [SMALL_STATE(179)] = 7260,
  [SMALL_STATE(180)] = 7278,
  [SMALL_STATE(181)] = 7296,
  [SMALL_STATE(182)] = 7313,
  [SMALL_STATE(183)] = 7328,
  [SMALL_STATE(184)] = 7343,
  [SMALL_STATE(185)] = 7358,
  [SMALL_STATE(186)] = 7373,
  [SMALL_STATE(187)] = 7388,
  [SMALL_STATE(188)] = 7403,
  [SMALL_STATE(189)] = 7423,
  [SMALL_STATE(190)] = 7443,
  [SMALL_STATE(191)] = 7463,
  [SMALL_STATE(192)] = 7483,
  [SMALL_STATE(193)] = 7503,
  [SMALL_STATE(194)] = 7523,
  [SMALL_STATE(195)] = 7543,
  [SMALL_STATE(196)] = 7563,
  [SMALL_STATE(197)] = 7583,
  [SMALL_STATE(198)] = 7603,
  [SMALL_STATE(199)] = 7623,
  [SMALL_STATE(200)] = 7643,
  [SMALL_STATE(201)] = 7663,
  [SMALL_STATE(202)] = 7683,
  [SMALL_STATE(203)] = 7703,
  [SMALL_STATE(204)] = 7716,
  [SMALL_STATE(205)] = 7732,
  [SMALL_STATE(206)] = 7748,
  [SMALL_STATE(207)] = 7764,
  [SMALL_STATE(208)] = 7780,
  [SMALL_STATE(209)] = 7791,
  [SMALL_STATE(210)] = 7802,
  [SMALL_STATE(211)] = 7810,
  [SMALL_STATE(212)] = 7818,
  [SMALL_STATE(213)] = 7824,
  [SMALL_STATE(214)] = 7834,
  [SMALL_STATE(215)] = 7840,
  [SMALL_STATE(216)] = 7846,
  [SMALL_STATE(217)] = 7856,
  [SMALL_STATE(218)] = 7866,
  [SMALL_STATE(219)] = 7874,
  [SMALL_STATE(220)] = 7882,
  [SMALL_STATE(221)] = 7892,
  [SMALL_STATE(222)] = 7899,
  [SMALL_STATE(223)] = 7906,
  [SMALL_STATE(224)] = 7913,
  [SMALL_STATE(225)] = 7920,
  [SMALL_STATE(226)] = 7927,
  [SMALL_STATE(227)] = 7934,
  [SMALL_STATE(228)] = 7941,
  [SMALL_STATE(229)] = 7948,
  [SMALL_STATE(230)] = 7955,
  [SMALL_STATE(231)] = 7962,
  [SMALL_STATE(232)] = 7969,
  [SMALL_STATE(233)] = 7976,
  [SMALL_STATE(234)] = 7983,
  [SMALL_STATE(235)] = 7987,
  [SMALL_STATE(236)] = 7991,
  [SMALL_STATE(237)] = 7995,
  [SMALL_STATE(238)] = 7999,
  [SMALL_STATE(239)] = 8003,
  [SMALL_STATE(240)] = 8007,
  [SMALL_STATE(241)] = 8011,
  [SMALL_STATE(242)] = 8015,
  [SMALL_STATE(243)] = 8019,
  [SMALL_STATE(244)] = 8023,
  [SMALL_STATE(245)] = 8027,
  [SMALL_STATE(246)] = 8031,
  [SMALL_STATE(247)] = 8035,
  [SMALL_STATE(248)] = 8039,
  [SMALL_STATE(249)] = 8043,
  [SMALL_STATE(250)] = 8047,
  [SMALL_STATE(251)] = 8051,
  [SMALL_STATE(252)] = 8055,
  [SMALL_STATE(253)] = 8059,
  [SMALL_STATE(254)] = 8063,
  [SMALL_STATE(255)] = 8067,
  [SMALL_STATE(256)] = 8071,
  [SMALL_STATE(257)] = 8075,
  [SMALL_STATE(258)] = 8079,
  [SMALL_STATE(259)] = 8083,
  [SMALL_STATE(260)] = 8087,
  [SMALL_STATE(261)] = 8091,
  [SMALL_STATE(262)] = 8095,
  [SMALL_STATE(263)] = 8099,
  [SMALL_STATE(264)] = 8103,
  [SMALL_STATE(265)] = 8107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datoteka, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicni_izraz, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicni_izraz, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitni_izraz, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitni_izraz, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pretvorba, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pretvorba, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inicializacija, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inicializacija, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje_referenci, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje_referenci, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primerjalni_izraz, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primerjalni_izraz, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aritmeticni_izraz, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aritmeticni_izraz, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje_seznamu, 6),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje_seznamu, 6),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stevilo, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stevilo, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tip, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicni_izraz, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicni_izraz, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrni, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrni, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aritmeticni_izraz, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aritmeticni_izraz, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datoteka, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_datoteka_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(237),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(41),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(105),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(110),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(233),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(243),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(168),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(113),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(153),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_datoteka_repeat1, 2), SHIFT_REPEAT(168),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [217] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(237),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(41),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(105),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(110),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(233),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(243),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(168),
  [240] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(113),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(153),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(168),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__izraz, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__izraz, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 7),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(127),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(128),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(234),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(129),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(70),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(70),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(35),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(96),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(71),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 2),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 2),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 3),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 6, .production_id = 7),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 6, .production_id = 7),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deklaracija, 4),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deklaracija, 4),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 1),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifunkcijski_klic, 4, .production_id = 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multifunkcijski_klic, 4, .production_id = 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_za, 6, .production_id = 6),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_za, 6, .production_id = 6),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 8, .production_id = 10),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 8, .production_id = 10),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_za, 7, .production_id = 8),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_za, 7, .production_id = 8),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multifunkcijski_klic, 5, .production_id = 5),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multifunkcijski_klic, 5, .production_id = 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 7, .production_id = 9),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 7, .production_id = 9),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 5, .production_id = 4),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 5, .production_id = 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 2),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 2),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prireditveni_op, 1),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prireditveni_op, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 5),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2), SHIFT_REPEAT(254),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_velikost, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [727] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_slj(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
