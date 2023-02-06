#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 292
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 0
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum {
  aux_sym__stavek_token1 = 1,
  anon_sym_naj = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_e = 6,
  anon_sym_ene = 7,
  anon_sym_dokler = 8,
  anon_sym_za = 9,
  anon_sym_SEMI = 10,
  anon_sym_v = 11,
  anon_sym_intervalu = 12,
  anon_sym_LBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_COMMA = 15,
  anon_sym_RBRACK = 16,
  anon_sym_RPAREN = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  anon_sym_STAR = 20,
  anon_sym_SLASH = 21,
  anon_sym_STAR_STAR = 22,
  anon_sym_funkcija = 23,
  anon_sym_DASH_GT = 24,
  anon_sym_COLON = 25,
  sym_prekini = 26,
  anon_sym_vrni = 27,
  anon_sym_BANG = 28,
  anon_sym_AMP_AMP = 29,
  anon_sym_PIPE_PIPE = 30,
  anon_sym_LT_LT = 31,
  anon_sym_GT_GT = 32,
  anon_sym_AMP = 33,
  anon_sym_CARET = 34,
  anon_sym_PIPE = 35,
  anon_sym_EQ_EQ = 36,
  anon_sym_BANG_EQ = 37,
  anon_sym_GT = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_PERCENT = 42,
  anon_sym_AT = 43,
  anon_sym_brez = 44,
  anon_sym_bool = 45,
  anon_sym_celo = 46,
  anon_sym_real = 47,
  anon_sym_znak = 48,
  anon_sym_PLUS_EQ = 49,
  anon_sym_DASH_EQ = 50,
  anon_sym_STAR_EQ = 51,
  anon_sym_SLASH_EQ = 52,
  anon_sym_PERCENT_EQ = 53,
  anon_sym_STAR_STAR_EQ = 54,
  anon_sym_PIPE_PIPE_EQ = 55,
  anon_sym_AMP_AMP_EQ = 56,
  anon_sym_LT_LT_EQ = 57,
  anon_sym_GT_GT_EQ = 58,
  anon_sym_PIPE_EQ = 59,
  anon_sym_CARET_EQ = 60,
  anon_sym_AMP_EQ = 61,
  sym__celo = 62,
  sym__real = 63,
  sym_ime = 64,
  sym_niz = 65,
  anon_sym_resnica = 66,
  anon_sym_la = 67,
  sym_komentar = 68,
  sym_source_file = 69,
  aux_sym__zaporedje = 70,
  sym__stavek = 71,
  sym_inicializacija = 72,
  sym_prirejanje = 73,
  sym_okvir = 74,
  sym_pogojni_stavek = 75,
  sym_zanka_dokler = 76,
  sym_zanka_za = 77,
  sym_interval = 78,
  sym_funkcija = 79,
  sym_parametri = 80,
  sym_parameter = 81,
  sym_vrni = 82,
  sym_funkcijski_klic = 83,
  sym_makro_klic = 84,
  sym_argumenti = 85,
  sym__izraz = 86,
  sym_logicni_izraz = 87,
  sym_bitni_izraz = 88,
  sym_primerjalni_izraz = 89,
  sym_aritmeticni_izraz = 90,
  sym__osnovni_izraz = 91,
  sym_tip = 92,
  sym_velikost = 93,
  sym_prireditveni_op = 94,
  sym_stevilo = 95,
  sym_bool = 96,
  aux_sym_source_file_repeat1 = 97,
  aux_sym_parametri_repeat1 = 98,
  aux_sym_argumenti_repeat1 = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__stavek_token1] = "_stavek_token1",
  [anon_sym_naj] = "naj",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_e] = "če",
  [anon_sym_ene] = "čene",
  [anon_sym_dokler] = "dokler",
  [anon_sym_za] = "za",
  [anon_sym_SEMI] = ";",
  [anon_sym_v] = "v",
  [anon_sym_intervalu] = "intervalu",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_funkcija] = "funkcija",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COLON] = ":",
  [sym_prekini] = "prekini",
  [anon_sym_vrni] = "vrni",
  [anon_sym_BANG] = "!",
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
  [anon_sym_AT] = "@",
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
  [sym_source_file] = "source_file",
  [aux_sym__zaporedje] = "_zaporedje",
  [sym__stavek] = "_stavek",
  [sym_inicializacija] = "inicializacija",
  [sym_prirejanje] = "prirejanje",
  [sym_okvir] = "okvir",
  [sym_pogojni_stavek] = "pogojni_stavek",
  [sym_zanka_dokler] = "zanka_dokler",
  [sym_zanka_za] = "zanka_za",
  [sym_interval] = "interval",
  [sym_funkcija] = "funkcija",
  [sym_parametri] = "parametri",
  [sym_parameter] = "parameter",
  [sym_vrni] = "vrni",
  [sym_funkcijski_klic] = "funkcijski_klic",
  [sym_makro_klic] = "makro_klic",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parametri_repeat1] = "parametri_repeat1",
  [aux_sym_argumenti_repeat1] = "argumenti_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__stavek_token1] = aux_sym__stavek_token1,
  [anon_sym_naj] = anon_sym_naj,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_ene] = anon_sym_ene,
  [anon_sym_dokler] = anon_sym_dokler,
  [anon_sym_za] = anon_sym_za,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_intervalu] = anon_sym_intervalu,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_funkcija] = anon_sym_funkcija,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_prekini] = sym_prekini,
  [anon_sym_vrni] = anon_sym_vrni,
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_AT] = anon_sym_AT,
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
  [sym_source_file] = sym_source_file,
  [aux_sym__zaporedje] = aux_sym__zaporedje,
  [sym__stavek] = sym__stavek,
  [sym_inicializacija] = sym_inicializacija,
  [sym_prirejanje] = sym_prirejanje,
  [sym_okvir] = sym_okvir,
  [sym_pogojni_stavek] = sym_pogojni_stavek,
  [sym_zanka_dokler] = sym_zanka_dokler,
  [sym_zanka_za] = sym_zanka_za,
  [sym_interval] = sym_interval,
  [sym_funkcija] = sym_funkcija,
  [sym_parametri] = sym_parametri,
  [sym_parameter] = sym_parameter,
  [sym_vrni] = sym_vrni,
  [sym_funkcijski_klic] = sym_funkcijski_klic,
  [sym_makro_klic] = sym_makro_klic,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parametri_repeat1] = aux_sym_parametri_repeat1,
  [aux_sym_argumenti_repeat1] = aux_sym_argumenti_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__stavek_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_naj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_SEMI] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_COLON] = {
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
  [anon_sym_BANG] = {
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
  [anon_sym_AT] = {
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
  [sym_source_file] = {
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
  [sym_inicializacija] = {
    .visible = true,
    .named = true,
  },
  [sym_prirejanje] = {
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
  [sym_funkcijski_klic] = {
    .visible = true,
    .named = true,
  },
  [sym_makro_klic] = {
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
  [aux_sym_source_file_repeat1] = {
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
  field_funkcija = 1,
  field_pogoj = 2,
  field_telo = 3,
  field_vrni = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_funkcija] = "funkcija",
  [field_pogoj] = "pogoj",
  [field_telo] = "telo",
  [field_vrni] = "vrni",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pogoj, 1},
    {field_telo, 2},
  [2] =
    {field_funkcija, 0},
  [3] =
    {field_telo, 4},
  [4] =
    {field_telo, 5},
  [5] =
    {field_telo, 6},
  [6] =
    {field_telo, 6},
    {field_vrni, 5},
  [8] =
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
  [3] = 2,
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
  [17] = 8,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 9,
  [23] = 23,
  [24] = 23,
  [25] = 6,
  [26] = 21,
  [27] = 4,
  [28] = 28,
  [29] = 10,
  [30] = 30,
  [31] = 11,
  [32] = 12,
  [33] = 13,
  [34] = 14,
  [35] = 15,
  [36] = 16,
  [37] = 5,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 18,
  [42] = 19,
  [43] = 20,
  [44] = 30,
  [45] = 7,
  [46] = 28,
  [47] = 40,
  [48] = 39,
  [49] = 38,
  [50] = 2,
  [51] = 14,
  [52] = 8,
  [53] = 28,
  [54] = 21,
  [55] = 23,
  [56] = 4,
  [57] = 6,
  [58] = 7,
  [59] = 40,
  [60] = 9,
  [61] = 10,
  [62] = 11,
  [63] = 12,
  [64] = 20,
  [65] = 19,
  [66] = 18,
  [67] = 13,
  [68] = 15,
  [69] = 16,
  [70] = 5,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 72,
  [75] = 72,
  [76] = 71,
  [77] = 77,
  [78] = 78,
  [79] = 72,
  [80] = 80,
  [81] = 71,
  [82] = 72,
  [83] = 71,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 84,
  [88] = 85,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 89,
  [94] = 94,
  [95] = 90,
  [96] = 89,
  [97] = 97,
  [98] = 94,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 39,
  [105] = 103,
  [106] = 106,
  [107] = 103,
  [108] = 100,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 111,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 119,
  [129] = 120,
  [130] = 130,
  [131] = 131,
  [132] = 115,
  [133] = 113,
  [134] = 134,
  [135] = 134,
  [136] = 110,
  [137] = 137,
  [138] = 110,
  [139] = 112,
  [140] = 140,
  [141] = 141,
  [142] = 114,
  [143] = 141,
  [144] = 112,
  [145] = 120,
  [146] = 146,
  [147] = 124,
  [148] = 119,
  [149] = 146,
  [150] = 130,
  [151] = 127,
  [152] = 141,
  [153] = 140,
  [154] = 134,
  [155] = 113,
  [156] = 115,
  [157] = 130,
  [158] = 127,
  [159] = 125,
  [160] = 122,
  [161] = 161,
  [162] = 118,
  [163] = 116,
  [164] = 125,
  [165] = 122,
  [166] = 111,
  [167] = 123,
  [168] = 116,
  [169] = 124,
  [170] = 118,
  [171] = 131,
  [172] = 140,
  [173] = 173,
  [174] = 173,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 178,
  [181] = 177,
  [182] = 179,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 184,
  [193] = 193,
  [194] = 178,
  [195] = 178,
  [196] = 196,
  [197] = 179,
  [198] = 193,
  [199] = 196,
  [200] = 191,
  [201] = 179,
  [202] = 190,
  [203] = 189,
  [204] = 188,
  [205] = 187,
  [206] = 186,
  [207] = 185,
  [208] = 183,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 219,
  [223] = 221,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 227,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 232,
  [234] = 232,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 235,
  [240] = 240,
  [241] = 236,
  [242] = 242,
  [243] = 243,
  [244] = 177,
  [245] = 178,
  [246] = 179,
  [247] = 247,
  [248] = 243,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 250,
  [253] = 253,
  [254] = 254,
  [255] = 251,
  [256] = 253,
  [257] = 249,
  [258] = 258,
  [259] = 254,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 262,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 266,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 272,
  [277] = 277,
  [278] = 273,
  [279] = 279,
  [280] = 271,
  [281] = 281,
  [282] = 274,
  [283] = 283,
  [284] = 281,
  [285] = 285,
  [286] = 262,
  [287] = 261,
  [288] = 266,
  [289] = 283,
  [290] = 268,
  [291] = 285,
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
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(138);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '%') ADVANCE(162);
      if (lookahead == '&') ADVANCE(147);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '+') ADVANCE(119);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(126);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(96);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == '[') ADVANCE(113);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '^') ADVANCE(150);
      if (lookahead == 'b') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 'v') ADVANCE(111);
      if (lookahead == 'z') ADVANCE(26);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 269) ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == 269) ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '@') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (sym_ime_character_set_1(lookahead)) ADVANCE(226);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(22);
      if (lookahead == '^') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(110);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(16);
      if (lookahead == 269) ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(17);
      if (lookahead == '=') ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (sym_ime_character_set_1(lookahead)) ADVANCE(226);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '>') ADVANCE(131);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '|') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(228);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 'j') ADVANCE(93);
      END_STATE();
    case 50:
      if (lookahead == 'j') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(168);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(73);
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
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 76:
      if (lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'z') ADVANCE(164);
      END_STATE();
    case 78:
      if (lookahead == 382) ADVANCE(230);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == '^') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(222);
      if (lookahead == 'z') ADVANCE(192);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 269) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(226);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == ';') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(222);
      if (lookahead == 'z') ADVANCE(192);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 269) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(226);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '#') ADVANCE(232);
      if (lookahead == '%') ADVANCE(161);
      if (lookahead == '&') ADVANCE(148);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(117);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(115);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(156);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '^') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 'f') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == 'v') ADVANCE(222);
      if (lookahead == 'z') ADVANCE(192);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '|') ADVANCE(152);
      if (lookahead == '}') ADVANCE(98);
      if (lookahead == 269) ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(226);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym__stavek_token1);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == ';') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym__stavek_token1);
      if (lookahead == '\n' ||
          lookahead == ';') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_naj);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_naj);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(201);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_ene);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ene);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_dokler);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_dokler);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_za);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_za);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_intervalu);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '>') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(128);
      if (lookahead == '=') ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_funkcija);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_funkcija);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_prekini);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_prekini);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_vrni);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_vrni);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(177);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(140);
      if (lookahead == '=') ADVANCE(181);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(139);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '|') ADVANCE(142);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(141);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(146);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(145);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(144);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(143);
      if (lookahead == '=') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_brez);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_celo);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_znak);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__real);
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(209);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(226);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(108);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(226);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(130);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(226);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(225);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(226);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(229);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(226);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(206);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(195);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(102);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(223);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(100);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(104);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(220);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(213);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(136);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(134);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(210);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(197);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(217);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(94);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(193);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(214);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(196);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(208);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(202);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(204);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(212);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(205);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(207);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(211);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(106);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(203);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(215);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 's') ADVANCE(218);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'u') ADVANCE(216);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 382) ADVANCE(231);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_ime);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_niz);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_resnica);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_resnica);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_la);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_la);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(226);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_komentar);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(232);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 89},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 89},
  [51] = {.lex_state = 89},
  [52] = {.lex_state = 89},
  [53] = {.lex_state = 89},
  [54] = {.lex_state = 89},
  [55] = {.lex_state = 89},
  [56] = {.lex_state = 89},
  [57] = {.lex_state = 89},
  [58] = {.lex_state = 89},
  [59] = {.lex_state = 89},
  [60] = {.lex_state = 89},
  [61] = {.lex_state = 89},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 89},
  [65] = {.lex_state = 89},
  [66] = {.lex_state = 89},
  [67] = {.lex_state = 89},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 89},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 89},
  [72] = {.lex_state = 89},
  [73] = {.lex_state = 89},
  [74] = {.lex_state = 89},
  [75] = {.lex_state = 89},
  [76] = {.lex_state = 89},
  [77] = {.lex_state = 89},
  [78] = {.lex_state = 89},
  [79] = {.lex_state = 89},
  [80] = {.lex_state = 89},
  [81] = {.lex_state = 89},
  [82] = {.lex_state = 89},
  [83] = {.lex_state = 89},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 89},
  [90] = {.lex_state = 89},
  [91] = {.lex_state = 89},
  [92] = {.lex_state = 89},
  [93] = {.lex_state = 89},
  [94] = {.lex_state = 89},
  [95] = {.lex_state = 89},
  [96] = {.lex_state = 89},
  [97] = {.lex_state = 89},
  [98] = {.lex_state = 89},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 89},
  [101] = {.lex_state = 89},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 89},
  [104] = {.lex_state = 89},
  [105] = {.lex_state = 89},
  [106] = {.lex_state = 89},
  [107] = {.lex_state = 89},
  [108] = {.lex_state = 89},
  [109] = {.lex_state = 89},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 89},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 3},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 88},
  [178] = {.lex_state = 88},
  [179] = {.lex_state = 88},
  [180] = {.lex_state = 88},
  [181] = {.lex_state = 88},
  [182] = {.lex_state = 88},
  [183] = {.lex_state = 87},
  [184] = {.lex_state = 87},
  [185] = {.lex_state = 87},
  [186] = {.lex_state = 87},
  [187] = {.lex_state = 87},
  [188] = {.lex_state = 87},
  [189] = {.lex_state = 87},
  [190] = {.lex_state = 87},
  [191] = {.lex_state = 87},
  [192] = {.lex_state = 87},
  [193] = {.lex_state = 87},
  [194] = {.lex_state = 87},
  [195] = {.lex_state = 87},
  [196] = {.lex_state = 87},
  [197] = {.lex_state = 87},
  [198] = {.lex_state = 87},
  [199] = {.lex_state = 87},
  [200] = {.lex_state = 87},
  [201] = {.lex_state = 87},
  [202] = {.lex_state = 87},
  [203] = {.lex_state = 87},
  [204] = {.lex_state = 87},
  [205] = {.lex_state = 87},
  [206] = {.lex_state = 87},
  [207] = {.lex_state = 87},
  [208] = {.lex_state = 87},
  [209] = {.lex_state = 89},
  [210] = {.lex_state = 89},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 89},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 6},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 3},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 6},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 6},
  [264] = {.lex_state = 6},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 2},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 6},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 2},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 6},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 6},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_naj] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_ene] = ACTIONS(1),
    [anon_sym_dokler] = ACTIONS(1),
    [anon_sym_za] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_intervalu] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_funkcija] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_prekini] = ACTIONS(1),
    [anon_sym_vrni] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_AT] = ACTIONS(1),
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
    [sym_source_file] = STATE(279),
    [sym__stavek] = STATE(80),
    [sym_inicializacija] = STATE(193),
    [sym_prirejanje] = STATE(193),
    [sym_okvir] = STATE(193),
    [sym_pogojni_stavek] = STATE(193),
    [sym_zanka_dokler] = STATE(193),
    [sym_zanka_za] = STATE(193),
    [sym_funkcija] = STATE(193),
    [sym_vrni] = STATE(193),
    [sym_funkcijski_klic] = STATE(193),
    [sym_makro_klic] = STATE(193),
    [aux_sym_source_file_repeat1] = STATE(80),
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
  [0] = 3,
    ACTIONS(25), 1,
      aux_sym__stavek_token1,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [39] = 3,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(27), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [78] = 4,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(35), 26,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [118] = 2,
    ACTIONS(41), 1,
      aux_sym__stavek_token1,
    ACTIONS(43), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [154] = 2,
    ACTIONS(33), 1,
      aux_sym__stavek_token1,
    ACTIONS(35), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [190] = 13,
    ACTIONS(45), 1,
      aux_sym__stavek_token1,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(47), 12,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [248] = 11,
    ACTIONS(45), 1,
      aux_sym__stavek_token1,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(47), 15,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [302] = 8,
    ACTIONS(45), 1,
      aux_sym__stavek_token1,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(47), 20,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [350] = 4,
    ACTIONS(45), 1,
      aux_sym__stavek_token1,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [390] = 2,
    ACTIONS(45), 1,
      aux_sym__stavek_token1,
    ACTIONS(47), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [426] = 8,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 20,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [474] = 4,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(73), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [514] = 4,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(75), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [554] = 8,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(75), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(77), 20,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [602] = 11,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(75), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(77), 15,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [656] = 11,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(47), 14,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [710] = 2,
    ACTIONS(93), 1,
      aux_sym__stavek_token1,
    ACTIONS(95), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [746] = 4,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(97), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [786] = 4,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(101), 1,
      aux_sym__stavek_token1,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(103), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [826] = 2,
    ACTIONS(105), 1,
      aux_sym__stavek_token1,
    ACTIONS(107), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [862] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(47), 19,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [910] = 2,
    ACTIONS(109), 1,
      aux_sym__stavek_token1,
    ACTIONS(111), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [946] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(111), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [982] = 2,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(35), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1018] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(107), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1054] = 4,
    ACTIONS(33), 1,
      aux_sym__stavek_token1,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(35), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1094] = 2,
    ACTIONS(113), 1,
      aux_sym__stavek_token1,
    ACTIONS(115), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1130] = 4,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(47), 26,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1170] = 14,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(119), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1230] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(47), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1266] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 19,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1314] = 4,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(73), 26,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1354] = 4,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(77), 26,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1394] = 8,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(77), 19,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1442] = 11,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(77), 14,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [1496] = 2,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(43), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1532] = 14,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(127), 1,
      aux_sym__stavek_token1,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(129), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1592] = 14,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    ACTIONS(133), 1,
      aux_sym__stavek_token1,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(135), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1652] = 2,
    ACTIONS(137), 1,
      aux_sym__stavek_token1,
    ACTIONS(139), 30,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1688] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(95), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1724] = 4,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(99), 26,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1764] = 4,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(103), 26,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1804] = 14,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(55), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 1,
      anon_sym_LT_LT,
    ACTIONS(61), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_AMP,
    ACTIONS(65), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      aux_sym__stavek_token1,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    ACTIONS(49), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(67), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(51), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(69), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(119), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1864] = 13,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(47), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [1922] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(115), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1958] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(139), 29,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_PERCENT,
      sym_ime,
      sym_komentar,
  [1994] = 14,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(135), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [2054] = 14,
    ACTIONS(37), 1,
      anon_sym_LT_LT,
    ACTIONS(81), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_AMP_AMP,
    ACTIONS(85), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(87), 1,
      anon_sym_GT_GT,
    ACTIONS(89), 1,
      anon_sym_AMP,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(125), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(121), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(79), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(91), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(129), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [2114] = 3,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(25), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2146] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(75), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2179] = 13,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(45), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2230] = 2,
    ACTIONS(115), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2259] = 2,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2288] = 2,
    ACTIONS(111), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2317] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(35), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2350] = 2,
    ACTIONS(35), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(33), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2379] = 15,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(45), 5,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2434] = 2,
    ACTIONS(139), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(137), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2463] = 9,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(47), 3,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(45), 11,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
  [2506] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(47), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2539] = 2,
    ACTIONS(47), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(45), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2568] = 9,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 3,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(71), 11,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
  [2611] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(103), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2644] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(97), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2677] = 2,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(93), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2706] = 4,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(73), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(71), 16,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2739] = 9,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(77), 3,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(75), 11,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_PERCENT,
  [2782] = 13,
    ACTIONS(77), 1,
      anon_sym_PIPE,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(75), 8,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2833] = 2,
    ACTIONS(43), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(41), 19,
      anon_sym_LBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [2862] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    STATE(77), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [2912] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(73), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [2962] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3012] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(71), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3062] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    STATE(76), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3112] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3162] = 13,
    ACTIONS(201), 1,
      anon_sym_naj,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      anon_sym_e,
    ACTIONS(212), 1,
      anon_sym_dokler,
    ACTIONS(215), 1,
      anon_sym_za,
    ACTIONS(218), 1,
      anon_sym_funkcija,
    ACTIONS(221), 1,
      sym_prekini,
    ACTIONS(224), 1,
      anon_sym_vrni,
    ACTIONS(227), 1,
      sym_ime,
    ACTIONS(230), 1,
      sym_komentar,
    STATE(77), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3212] = 13,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_e,
    ACTIONS(244), 1,
      anon_sym_dokler,
    ACTIONS(247), 1,
      anon_sym_za,
    ACTIONS(250), 1,
      anon_sym_funkcija,
    ACTIONS(253), 1,
      sym_prekini,
    ACTIONS(256), 1,
      anon_sym_vrni,
    ACTIONS(259), 1,
      sym_ime,
    ACTIONS(262), 1,
      sym_komentar,
    STATE(78), 2,
      sym__stavek,
      aux_sym_source_file_repeat1,
    STATE(193), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3262] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(81), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3312] = 13,
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
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(78), 2,
      sym__stavek,
      aux_sym_source_file_repeat1,
    STATE(193), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3362] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3412] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(83), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3462] = 13,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_e,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3512] = 13,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(291), 1,
      sym_niz,
    STATE(99), 1,
      aux_sym_argumenti_repeat1,
    STATE(268), 1,
      sym_argumenti,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(97), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3561] = 13,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(291), 1,
      sym_niz,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_argumenti_repeat1,
    STATE(270), 1,
      sym_argumenti,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(97), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3610] = 13,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(291), 1,
      sym_niz,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_argumenti_repeat1,
    STATE(266), 1,
      sym_argumenti,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(97), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3659] = 13,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(291), 1,
      sym_niz,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_argumenti_repeat1,
    STATE(290), 1,
      sym_argumenti,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(97), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3708] = 13,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(291), 1,
      sym_niz,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      aux_sym_argumenti_repeat1,
    STATE(288), 1,
      sym_argumenti,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(97), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3757] = 16,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    STATE(181), 1,
      sym_okvir,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3811] = 12,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(307), 1,
      anon_sym_e,
    STATE(249), 1,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3857] = 16,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [3911] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(313), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3963] = 16,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_okvir,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4017] = 16,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    STATE(192), 1,
      sym_okvir,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4071] = 12,
    ACTIONS(169), 1,
      anon_sym_naj,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      anon_sym_dokler,
    ACTIONS(179), 1,
      anon_sym_za,
    ACTIONS(181), 1,
      anon_sym_funkcija,
    ACTIONS(183), 1,
      sym_prekini,
    ACTIONS(185), 1,
      anon_sym_vrni,
    ACTIONS(187), 1,
      sym_ime,
    ACTIONS(189), 1,
      sym_komentar,
    ACTIONS(307), 1,
      anon_sym_e,
    STATE(257), 1,
      sym__stavek,
    STATE(198), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_zanka_za,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [4117] = 16,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(244), 1,
      sym_okvir,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4171] = 16,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4225] = 16,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    STATE(184), 1,
      sym_okvir,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4279] = 11,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(321), 1,
      sym_niz,
    STATE(102), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(91), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4322] = 3,
    ACTIONS(323), 1,
      anon_sym_SEMI,
    ACTIONS(327), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 14,
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
  [4349] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4400] = 11,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(334), 1,
      anon_sym_DASH,
    ACTIONS(337), 1,
      anon_sym_BANG,
    ACTIONS(340), 1,
      anon_sym_AT,
    ACTIONS(343), 1,
      sym__celo,
    ACTIONS(346), 1,
      sym__real,
    ACTIONS(349), 1,
      sym_ime,
    ACTIONS(352), 1,
      sym_niz,
    STATE(102), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(355), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(109), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4443] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4494] = 15,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4545] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(360), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4596] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(362), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4647] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(364), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4698] = 3,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    ACTIONS(327), 5,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 14,
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
  [4725] = 15,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [4776] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(368), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(89), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4816] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(384), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(45), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4856] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(388), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(103), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4896] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(390), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(67), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4936] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(392), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(98), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4976] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(394), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(63), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5016] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(410), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(27), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5056] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(414), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(101), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5096] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(416), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(6), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5136] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(418), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(19), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5176] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(420), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(20), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5216] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(422), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(7), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5256] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(424), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(8), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5296] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(426), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(38), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5336] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(428), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(39), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5376] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(430), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(9), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5416] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(432), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(92), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5456] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(434), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(10), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5496] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(436), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(42), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5536] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(438), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(43), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5576] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(440), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(11), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5616] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(442), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(44), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5656] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(444), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(12), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5696] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(446), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(13), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5736] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(448), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(14), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5776] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(450), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(51), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5816] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(452), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(96), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5856] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(454), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(106), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5896] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(456), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(93), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5936] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(458), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(107), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [5976] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(460), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(15), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6016] = 10,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(398), 1,
      anon_sym_DASH,
    ACTIONS(400), 1,
      anon_sym_BANG,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(404), 1,
      sym__celo,
    ACTIONS(406), 1,
      sym__real,
    ACTIONS(408), 1,
      sym_ime,
    ACTIONS(462), 1,
      sym_niz,
    ACTIONS(412), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(16), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6056] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(464), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(94), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6096] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(466), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(69), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6136] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(468), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(105), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6176] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(470), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(64), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6216] = 11,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(472), 1,
      sym_niz,
    STATE(100), 1,
      sym_primerjalni_izraz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(161), 8,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6258] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(474), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(104), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6298] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(476), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(65), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6338] = 11,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(472), 1,
      sym_niz,
    STATE(108), 1,
      sym_primerjalni_izraz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(161), 8,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6380] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(478), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(62), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6420] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(480), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(61), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6460] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(482), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(36), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6500] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(484), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(35), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6540] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(486), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(34), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6580] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(488), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(33), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6620] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(490), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(32), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6660] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(492), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(31), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6700] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(494), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(29), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6740] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(496), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(22), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6780] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(498), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(17), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6820] = 14,
    ACTIONS(143), 1,
      anon_sym_LT_LT,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_AMP_AMP,
    ACTIONS(155), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(157), 1,
      anon_sym_GT_GT,
    ACTIONS(159), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      anon_sym_CARET,
    ACTIONS(305), 1,
      anon_sym_PIPE,
    ACTIONS(145), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(161), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(163), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6868] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(500), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(25), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6908] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(502), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(4), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6948] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(504), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(60), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6988] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(506), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(52), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7028] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(508), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(58), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7068] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(510), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(49), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7108] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(512), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(56), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7148] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(514), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(48), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7188] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(516), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(57), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7228] = 10,
    ACTIONS(370), 1,
      anon_sym_LPAREN,
    ACTIONS(372), 1,
      anon_sym_DASH,
    ACTIONS(374), 1,
      anon_sym_BANG,
    ACTIONS(376), 1,
      anon_sym_AT,
    ACTIONS(378), 1,
      sym__celo,
    ACTIONS(380), 1,
      sym__real,
    ACTIONS(382), 1,
      sym_ime,
    ACTIONS(518), 1,
      sym_niz,
    ACTIONS(386), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(30), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7268] = 10,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 1,
      anon_sym_DASH,
    ACTIONS(281), 1,
      anon_sym_BANG,
    ACTIONS(283), 1,
      anon_sym_AT,
    ACTIONS(285), 1,
      sym__celo,
    ACTIONS(287), 1,
      sym__real,
    ACTIONS(289), 1,
      sym_ime,
    ACTIONS(520), 1,
      sym_niz,
    ACTIONS(293), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(68), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [7308] = 8,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(524), 1,
      anon_sym_LPAREN,
    ACTIONS(526), 1,
      anon_sym_BANG,
    STATE(124), 1,
      sym_prireditveni_op,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(532), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(534), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(528), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [7342] = 8,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
    ACTIONS(538), 1,
      anon_sym_BANG,
    STATE(169), 1,
      sym_prireditveni_op,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(532), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(534), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(528), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [7376] = 7,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(540), 1,
      anon_sym_v,
    STATE(147), 1,
      sym_prireditveni_op,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(532), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(534), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(528), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [7407] = 7,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(542), 1,
      anon_sym_v,
    STATE(147), 1,
      sym_prireditveni_op,
    ACTIONS(530), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(532), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(534), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(528), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [7438] = 3,
    ACTIONS(548), 1,
      anon_sym_ene,
    ACTIONS(544), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(546), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7458] = 2,
    ACTIONS(550), 1,
      aux_sym__stavek_token1,
    ACTIONS(552), 12,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7476] = 2,
    ACTIONS(554), 1,
      aux_sym__stavek_token1,
    ACTIONS(556), 12,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7494] = 2,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(552), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7512] = 3,
    ACTIONS(544), 1,
      aux_sym__stavek_token1,
    ACTIONS(558), 1,
      anon_sym_ene,
    ACTIONS(546), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7532] = 2,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(556), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7550] = 2,
    ACTIONS(560), 1,
      aux_sym__stavek_token1,
    ACTIONS(562), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7567] = 2,
    ACTIONS(564), 1,
      aux_sym__stavek_token1,
    ACTIONS(566), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7584] = 2,
    ACTIONS(568), 1,
      aux_sym__stavek_token1,
    ACTIONS(570), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7601] = 2,
    ACTIONS(572), 1,
      aux_sym__stavek_token1,
    ACTIONS(574), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7618] = 2,
    ACTIONS(576), 1,
      aux_sym__stavek_token1,
    ACTIONS(578), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7635] = 2,
    ACTIONS(580), 1,
      aux_sym__stavek_token1,
    ACTIONS(582), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7652] = 2,
    ACTIONS(584), 1,
      aux_sym__stavek_token1,
    ACTIONS(586), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7669] = 2,
    ACTIONS(588), 1,
      aux_sym__stavek_token1,
    ACTIONS(590), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7686] = 2,
    ACTIONS(592), 1,
      aux_sym__stavek_token1,
    ACTIONS(594), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7703] = 2,
    ACTIONS(564), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(566), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7720] = 3,
    ACTIONS(596), 1,
      ts_builtin_sym_end,
    ACTIONS(598), 1,
      aux_sym__stavek_token1,
    ACTIONS(600), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7739] = 2,
    ACTIONS(550), 1,
      aux_sym__stavek_token1,
    ACTIONS(552), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7756] = 2,
    ACTIONS(550), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(552), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7773] = 2,
    ACTIONS(602), 1,
      aux_sym__stavek_token1,
    ACTIONS(604), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7790] = 2,
    ACTIONS(554), 1,
      aux_sym__stavek_token1,
    ACTIONS(556), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7807] = 2,
    ACTIONS(606), 1,
      aux_sym__stavek_token1,
    ACTIONS(600), 11,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7824] = 2,
    ACTIONS(602), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(604), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7841] = 2,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(594), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7858] = 2,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(556), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7875] = 2,
    ACTIONS(588), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(590), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7892] = 2,
    ACTIONS(584), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(586), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7909] = 2,
    ACTIONS(580), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(582), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7926] = 2,
    ACTIONS(576), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(578), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7943] = 2,
    ACTIONS(572), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(574), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7960] = 2,
    ACTIONS(568), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(570), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7977] = 2,
    ACTIONS(560), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(562), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [7994] = 2,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_komentar,
    ACTIONS(610), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [8010] = 2,
    ACTIONS(608), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(610), 8,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_za,
      anon_sym_funkcija,
      sym_prekini,
      anon_sym_vrni,
      sym_ime,
  [8026] = 2,
    ACTIONS(612), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(614), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [8041] = 2,
    ACTIONS(616), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(618), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [8056] = 2,
    ACTIONS(612), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(614), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [8071] = 2,
    ACTIONS(612), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(614), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [8086] = 2,
    ACTIONS(612), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(614), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [8101] = 2,
    ACTIONS(612), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(614), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [8116] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(225), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8136] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(267), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8156] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(259), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8176] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(242), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8196] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(256), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8216] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(254), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8236] = 5,
    ACTIONS(620), 1,
      anon_sym_LBRACE,
    ACTIONS(622), 1,
      anon_sym_LBRACK,
    ACTIONS(624), 1,
      anon_sym_AT,
    STATE(253), 1,
      sym_tip,
    ACTIONS(626), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [8256] = 3,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(632), 1,
      anon_sym_STAR,
    ACTIONS(630), 4,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_STAR_STAR,
  [8269] = 1,
    ACTIONS(634), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8277] = 5,
    ACTIONS(636), 1,
      anon_sym_RBRACE,
    ACTIONS(638), 1,
      sym_ime,
    STATE(240), 1,
      sym_parameter,
    STATE(247), 1,
      aux_sym_parametri_repeat1,
    STATE(265), 1,
      sym_parametri,
  [8293] = 5,
    ACTIONS(638), 1,
      sym_ime,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_parameter,
    STATE(247), 1,
      aux_sym_parametri_repeat1,
    STATE(276), 1,
      sym_parametri,
  [8309] = 1,
    ACTIONS(642), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8317] = 5,
    ACTIONS(638), 1,
      sym_ime,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      sym_parameter,
    STATE(247), 1,
      aux_sym_parametri_repeat1,
    STATE(272), 1,
      sym_parametri,
  [8333] = 1,
    ACTIONS(646), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8341] = 1,
    ACTIONS(648), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8349] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(650), 1,
      anon_sym_e,
    STATE(183), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [8360] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(652), 1,
      anon_sym_e,
    STATE(183), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [8371] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(654), 1,
      anon_sym_e,
    STATE(208), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [8382] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(656), 1,
      anon_sym_DASH_GT,
    STATE(204), 1,
      sym_okvir,
  [8392] = 2,
    STATE(252), 1,
      sym_interval,
    ACTIONS(658), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [8400] = 2,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(660), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8408] = 3,
    ACTIONS(664), 1,
      sym_ime,
    STATE(238), 1,
      aux_sym_parametri_repeat1,
    STATE(275), 1,
      sym_parameter,
  [8418] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(667), 1,
      anon_sym_DASH_GT,
    STATE(188), 1,
      sym_okvir,
  [8428] = 2,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(669), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [8436] = 2,
    STATE(250), 1,
      sym_interval,
    ACTIONS(658), 2,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [8444] = 1,
    ACTIONS(671), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8450] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(673), 1,
      anon_sym_DASH_GT,
    STATE(207), 1,
      sym_okvir,
  [8460] = 3,
    ACTIONS(544), 1,
      aux_sym__stavek_token1,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    ACTIONS(675), 1,
      anon_sym_ene,
  [8470] = 2,
    ACTIONS(550), 1,
      aux_sym__stavek_token1,
    ACTIONS(552), 2,
      anon_sym_LBRACE,
      anon_sym_ene,
  [8478] = 2,
    ACTIONS(554), 1,
      aux_sym__stavek_token1,
    ACTIONS(556), 2,
      anon_sym_LBRACE,
      anon_sym_ene,
  [8486] = 3,
    ACTIONS(638), 1,
      sym_ime,
    STATE(237), 1,
      sym_parameter,
    STATE(238), 1,
      aux_sym_parametri_repeat1,
  [8496] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(677), 1,
      anon_sym_DASH_GT,
    STATE(185), 1,
      sym_okvir,
  [8506] = 2,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_okvir,
  [8513] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_okvir,
  [8520] = 2,
    ACTIONS(679), 1,
      sym_ime,
    STATE(291), 1,
      sym_prirejanje,
  [8527] = 2,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_okvir,
  [8534] = 2,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_okvir,
  [8541] = 2,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_okvir,
  [8548] = 2,
    ACTIONS(681), 1,
      sym_ime,
    STATE(285), 1,
      sym_prirejanje,
  [8555] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(202), 1,
      sym_okvir,
  [8562] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_okvir,
  [8569] = 2,
    ACTIONS(683), 1,
      sym__celo,
    STATE(260), 1,
      sym_velikost,
  [8576] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_okvir,
  [8583] = 1,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
  [8587] = 1,
    ACTIONS(687), 1,
      sym_ime,
  [8591] = 1,
    ACTIONS(689), 1,
      sym_ime,
  [8595] = 1,
    ACTIONS(691), 1,
      sym_ime,
  [8599] = 1,
    ACTIONS(693), 1,
      sym_ime,
  [8603] = 1,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
  [8607] = 1,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
  [8611] = 1,
    ACTIONS(699), 1,
      anon_sym_SEMI,
  [8615] = 1,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
  [8619] = 1,
    ACTIONS(703), 1,
      anon_sym_RBRACK,
  [8623] = 1,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [8627] = 1,
    ACTIONS(707), 1,
      anon_sym_EQ,
  [8631] = 1,
    ACTIONS(709), 1,
      anon_sym_RPAREN,
  [8635] = 1,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
  [8639] = 1,
    ACTIONS(713), 1,
      sym_ime,
  [8643] = 1,
    ACTIONS(662), 1,
      anon_sym_COMMA,
  [8647] = 1,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [8651] = 1,
    ACTIONS(717), 1,
      anon_sym_COLON,
  [8655] = 1,
    ACTIONS(719), 1,
      anon_sym_LPAREN,
  [8659] = 1,
    ACTIONS(721), 1,
      ts_builtin_sym_end,
  [8663] = 1,
    ACTIONS(723), 1,
      anon_sym_EQ,
  [8667] = 1,
    ACTIONS(725), 1,
      anon_sym_intervalu,
  [8671] = 1,
    ACTIONS(727), 1,
      sym_ime,
  [8675] = 1,
    ACTIONS(729), 1,
      anon_sym_LPAREN,
  [8679] = 1,
    ACTIONS(731), 1,
      anon_sym_intervalu,
  [8683] = 1,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [8687] = 1,
    ACTIONS(735), 1,
      sym_ime,
  [8691] = 1,
    ACTIONS(737), 1,
      sym_ime,
  [8695] = 1,
    ACTIONS(739), 1,
      anon_sym_RPAREN,
  [8699] = 1,
    ACTIONS(741), 1,
      anon_sym_LPAREN,
  [8703] = 1,
    ACTIONS(743), 1,
      anon_sym_RPAREN,
  [8707] = 1,
    ACTIONS(745), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 118,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 248,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 350,
  [SMALL_STATE(11)] = 390,
  [SMALL_STATE(12)] = 426,
  [SMALL_STATE(13)] = 474,
  [SMALL_STATE(14)] = 514,
  [SMALL_STATE(15)] = 554,
  [SMALL_STATE(16)] = 602,
  [SMALL_STATE(17)] = 656,
  [SMALL_STATE(18)] = 710,
  [SMALL_STATE(19)] = 746,
  [SMALL_STATE(20)] = 786,
  [SMALL_STATE(21)] = 826,
  [SMALL_STATE(22)] = 862,
  [SMALL_STATE(23)] = 910,
  [SMALL_STATE(24)] = 946,
  [SMALL_STATE(25)] = 982,
  [SMALL_STATE(26)] = 1018,
  [SMALL_STATE(27)] = 1054,
  [SMALL_STATE(28)] = 1094,
  [SMALL_STATE(29)] = 1130,
  [SMALL_STATE(30)] = 1170,
  [SMALL_STATE(31)] = 1230,
  [SMALL_STATE(32)] = 1266,
  [SMALL_STATE(33)] = 1314,
  [SMALL_STATE(34)] = 1354,
  [SMALL_STATE(35)] = 1394,
  [SMALL_STATE(36)] = 1442,
  [SMALL_STATE(37)] = 1496,
  [SMALL_STATE(38)] = 1532,
  [SMALL_STATE(39)] = 1592,
  [SMALL_STATE(40)] = 1652,
  [SMALL_STATE(41)] = 1688,
  [SMALL_STATE(42)] = 1724,
  [SMALL_STATE(43)] = 1764,
  [SMALL_STATE(44)] = 1804,
  [SMALL_STATE(45)] = 1864,
  [SMALL_STATE(46)] = 1922,
  [SMALL_STATE(47)] = 1958,
  [SMALL_STATE(48)] = 1994,
  [SMALL_STATE(49)] = 2054,
  [SMALL_STATE(50)] = 2114,
  [SMALL_STATE(51)] = 2146,
  [SMALL_STATE(52)] = 2179,
  [SMALL_STATE(53)] = 2230,
  [SMALL_STATE(54)] = 2259,
  [SMALL_STATE(55)] = 2288,
  [SMALL_STATE(56)] = 2317,
  [SMALL_STATE(57)] = 2350,
  [SMALL_STATE(58)] = 2379,
  [SMALL_STATE(59)] = 2434,
  [SMALL_STATE(60)] = 2463,
  [SMALL_STATE(61)] = 2506,
  [SMALL_STATE(62)] = 2539,
  [SMALL_STATE(63)] = 2568,
  [SMALL_STATE(64)] = 2611,
  [SMALL_STATE(65)] = 2644,
  [SMALL_STATE(66)] = 2677,
  [SMALL_STATE(67)] = 2706,
  [SMALL_STATE(68)] = 2739,
  [SMALL_STATE(69)] = 2782,
  [SMALL_STATE(70)] = 2833,
  [SMALL_STATE(71)] = 2862,
  [SMALL_STATE(72)] = 2912,
  [SMALL_STATE(73)] = 2962,
  [SMALL_STATE(74)] = 3012,
  [SMALL_STATE(75)] = 3062,
  [SMALL_STATE(76)] = 3112,
  [SMALL_STATE(77)] = 3162,
  [SMALL_STATE(78)] = 3212,
  [SMALL_STATE(79)] = 3262,
  [SMALL_STATE(80)] = 3312,
  [SMALL_STATE(81)] = 3362,
  [SMALL_STATE(82)] = 3412,
  [SMALL_STATE(83)] = 3462,
  [SMALL_STATE(84)] = 3512,
  [SMALL_STATE(85)] = 3561,
  [SMALL_STATE(86)] = 3610,
  [SMALL_STATE(87)] = 3659,
  [SMALL_STATE(88)] = 3708,
  [SMALL_STATE(89)] = 3757,
  [SMALL_STATE(90)] = 3811,
  [SMALL_STATE(91)] = 3857,
  [SMALL_STATE(92)] = 3911,
  [SMALL_STATE(93)] = 3963,
  [SMALL_STATE(94)] = 4017,
  [SMALL_STATE(95)] = 4071,
  [SMALL_STATE(96)] = 4117,
  [SMALL_STATE(97)] = 4171,
  [SMALL_STATE(98)] = 4225,
  [SMALL_STATE(99)] = 4279,
  [SMALL_STATE(100)] = 4322,
  [SMALL_STATE(101)] = 4349,
  [SMALL_STATE(102)] = 4400,
  [SMALL_STATE(103)] = 4443,
  [SMALL_STATE(104)] = 4494,
  [SMALL_STATE(105)] = 4545,
  [SMALL_STATE(106)] = 4596,
  [SMALL_STATE(107)] = 4647,
  [SMALL_STATE(108)] = 4698,
  [SMALL_STATE(109)] = 4725,
  [SMALL_STATE(110)] = 4776,
  [SMALL_STATE(111)] = 4816,
  [SMALL_STATE(112)] = 4856,
  [SMALL_STATE(113)] = 4896,
  [SMALL_STATE(114)] = 4936,
  [SMALL_STATE(115)] = 4976,
  [SMALL_STATE(116)] = 5016,
  [SMALL_STATE(117)] = 5056,
  [SMALL_STATE(118)] = 5096,
  [SMALL_STATE(119)] = 5136,
  [SMALL_STATE(120)] = 5176,
  [SMALL_STATE(121)] = 5216,
  [SMALL_STATE(122)] = 5256,
  [SMALL_STATE(123)] = 5296,
  [SMALL_STATE(124)] = 5336,
  [SMALL_STATE(125)] = 5376,
  [SMALL_STATE(126)] = 5416,
  [SMALL_STATE(127)] = 5456,
  [SMALL_STATE(128)] = 5496,
  [SMALL_STATE(129)] = 5536,
  [SMALL_STATE(130)] = 5576,
  [SMALL_STATE(131)] = 5616,
  [SMALL_STATE(132)] = 5656,
  [SMALL_STATE(133)] = 5696,
  [SMALL_STATE(134)] = 5736,
  [SMALL_STATE(135)] = 5776,
  [SMALL_STATE(136)] = 5816,
  [SMALL_STATE(137)] = 5856,
  [SMALL_STATE(138)] = 5896,
  [SMALL_STATE(139)] = 5936,
  [SMALL_STATE(140)] = 5976,
  [SMALL_STATE(141)] = 6016,
  [SMALL_STATE(142)] = 6056,
  [SMALL_STATE(143)] = 6096,
  [SMALL_STATE(144)] = 6136,
  [SMALL_STATE(145)] = 6176,
  [SMALL_STATE(146)] = 6216,
  [SMALL_STATE(147)] = 6258,
  [SMALL_STATE(148)] = 6298,
  [SMALL_STATE(149)] = 6338,
  [SMALL_STATE(150)] = 6380,
  [SMALL_STATE(151)] = 6420,
  [SMALL_STATE(152)] = 6460,
  [SMALL_STATE(153)] = 6500,
  [SMALL_STATE(154)] = 6540,
  [SMALL_STATE(155)] = 6580,
  [SMALL_STATE(156)] = 6620,
  [SMALL_STATE(157)] = 6660,
  [SMALL_STATE(158)] = 6700,
  [SMALL_STATE(159)] = 6740,
  [SMALL_STATE(160)] = 6780,
  [SMALL_STATE(161)] = 6820,
  [SMALL_STATE(162)] = 6868,
  [SMALL_STATE(163)] = 6908,
  [SMALL_STATE(164)] = 6948,
  [SMALL_STATE(165)] = 6988,
  [SMALL_STATE(166)] = 7028,
  [SMALL_STATE(167)] = 7068,
  [SMALL_STATE(168)] = 7108,
  [SMALL_STATE(169)] = 7148,
  [SMALL_STATE(170)] = 7188,
  [SMALL_STATE(171)] = 7228,
  [SMALL_STATE(172)] = 7268,
  [SMALL_STATE(173)] = 7308,
  [SMALL_STATE(174)] = 7342,
  [SMALL_STATE(175)] = 7376,
  [SMALL_STATE(176)] = 7407,
  [SMALL_STATE(177)] = 7438,
  [SMALL_STATE(178)] = 7458,
  [SMALL_STATE(179)] = 7476,
  [SMALL_STATE(180)] = 7494,
  [SMALL_STATE(181)] = 7512,
  [SMALL_STATE(182)] = 7532,
  [SMALL_STATE(183)] = 7550,
  [SMALL_STATE(184)] = 7567,
  [SMALL_STATE(185)] = 7584,
  [SMALL_STATE(186)] = 7601,
  [SMALL_STATE(187)] = 7618,
  [SMALL_STATE(188)] = 7635,
  [SMALL_STATE(189)] = 7652,
  [SMALL_STATE(190)] = 7669,
  [SMALL_STATE(191)] = 7686,
  [SMALL_STATE(192)] = 7703,
  [SMALL_STATE(193)] = 7720,
  [SMALL_STATE(194)] = 7739,
  [SMALL_STATE(195)] = 7756,
  [SMALL_STATE(196)] = 7773,
  [SMALL_STATE(197)] = 7790,
  [SMALL_STATE(198)] = 7807,
  [SMALL_STATE(199)] = 7824,
  [SMALL_STATE(200)] = 7841,
  [SMALL_STATE(201)] = 7858,
  [SMALL_STATE(202)] = 7875,
  [SMALL_STATE(203)] = 7892,
  [SMALL_STATE(204)] = 7909,
  [SMALL_STATE(205)] = 7926,
  [SMALL_STATE(206)] = 7943,
  [SMALL_STATE(207)] = 7960,
  [SMALL_STATE(208)] = 7977,
  [SMALL_STATE(209)] = 7994,
  [SMALL_STATE(210)] = 8010,
  [SMALL_STATE(211)] = 8026,
  [SMALL_STATE(212)] = 8041,
  [SMALL_STATE(213)] = 8056,
  [SMALL_STATE(214)] = 8071,
  [SMALL_STATE(215)] = 8086,
  [SMALL_STATE(216)] = 8101,
  [SMALL_STATE(217)] = 8116,
  [SMALL_STATE(218)] = 8136,
  [SMALL_STATE(219)] = 8156,
  [SMALL_STATE(220)] = 8176,
  [SMALL_STATE(221)] = 8196,
  [SMALL_STATE(222)] = 8216,
  [SMALL_STATE(223)] = 8236,
  [SMALL_STATE(224)] = 8256,
  [SMALL_STATE(225)] = 8269,
  [SMALL_STATE(226)] = 8277,
  [SMALL_STATE(227)] = 8293,
  [SMALL_STATE(228)] = 8309,
  [SMALL_STATE(229)] = 8317,
  [SMALL_STATE(230)] = 8333,
  [SMALL_STATE(231)] = 8341,
  [SMALL_STATE(232)] = 8349,
  [SMALL_STATE(233)] = 8360,
  [SMALL_STATE(234)] = 8371,
  [SMALL_STATE(235)] = 8382,
  [SMALL_STATE(236)] = 8392,
  [SMALL_STATE(237)] = 8400,
  [SMALL_STATE(238)] = 8408,
  [SMALL_STATE(239)] = 8418,
  [SMALL_STATE(240)] = 8428,
  [SMALL_STATE(241)] = 8436,
  [SMALL_STATE(242)] = 8444,
  [SMALL_STATE(243)] = 8450,
  [SMALL_STATE(244)] = 8460,
  [SMALL_STATE(245)] = 8470,
  [SMALL_STATE(246)] = 8478,
  [SMALL_STATE(247)] = 8486,
  [SMALL_STATE(248)] = 8496,
  [SMALL_STATE(249)] = 8506,
  [SMALL_STATE(250)] = 8513,
  [SMALL_STATE(251)] = 8520,
  [SMALL_STATE(252)] = 8527,
  [SMALL_STATE(253)] = 8534,
  [SMALL_STATE(254)] = 8541,
  [SMALL_STATE(255)] = 8548,
  [SMALL_STATE(256)] = 8555,
  [SMALL_STATE(257)] = 8562,
  [SMALL_STATE(258)] = 8569,
  [SMALL_STATE(259)] = 8576,
  [SMALL_STATE(260)] = 8583,
  [SMALL_STATE(261)] = 8587,
  [SMALL_STATE(262)] = 8591,
  [SMALL_STATE(263)] = 8595,
  [SMALL_STATE(264)] = 8599,
  [SMALL_STATE(265)] = 8603,
  [SMALL_STATE(266)] = 8607,
  [SMALL_STATE(267)] = 8611,
  [SMALL_STATE(268)] = 8615,
  [SMALL_STATE(269)] = 8619,
  [SMALL_STATE(270)] = 8623,
  [SMALL_STATE(271)] = 8627,
  [SMALL_STATE(272)] = 8631,
  [SMALL_STATE(273)] = 8635,
  [SMALL_STATE(274)] = 8639,
  [SMALL_STATE(275)] = 8643,
  [SMALL_STATE(276)] = 8647,
  [SMALL_STATE(277)] = 8651,
  [SMALL_STATE(278)] = 8655,
  [SMALL_STATE(279)] = 8659,
  [SMALL_STATE(280)] = 8663,
  [SMALL_STATE(281)] = 8667,
  [SMALL_STATE(282)] = 8671,
  [SMALL_STATE(283)] = 8675,
  [SMALL_STATE(284)] = 8679,
  [SMALL_STATE(285)] = 8683,
  [SMALL_STATE(286)] = 8687,
  [SMALL_STATE(287)] = 8691,
  [SMALL_STATE(288)] = 8695,
  [SMALL_STATE(289)] = 8699,
  [SMALL_STATE(290)] = 8703,
  [SMALL_STATE(291)] = 8707,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primerjalni_izraz, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primerjalni_izraz, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitni_izraz, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitni_izraz, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicni_izraz, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicni_izraz, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aritmeticni_izraz, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aritmeticni_izraz, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicni_izraz, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicni_izraz, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aritmeticni_izraz, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aritmeticni_izraz, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stevilo, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stevilo, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrni, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrni, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inicializacija, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inicializacija, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(282),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(74),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(110),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(114),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(251),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(287),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(198),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(131),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(173),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(198),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [247] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(255),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [253] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [256] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(171),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__izraz, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__izraz, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(144),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(145),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(148),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(286),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(53),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(53),
  [349] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(50),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(109),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(54),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 7),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [548] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 3),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 2),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 5, .production_id = 3),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 5, .production_id = 3),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_klic, 5, .production_id = 2),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_klic, 5, .production_id = 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_za, 6, .production_id = 4),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_za, 6, .production_id = 4),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 6, .production_id = 4),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 6, .production_id = 4),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_za, 7, .production_id = 5),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_za, 7, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 7, .production_id = 6),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 7, .production_id = 6),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 8, .production_id = 7),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 8, .production_id = 7),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 1),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_klic, 4, .production_id = 2),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_klic, 4, .production_id = 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 2),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 2),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prireditveni_op, 1),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prireditveni_op, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [632] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 5),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 3),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 2),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [664] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2), SHIFT_REPEAT(277),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_velikost, 1),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [721] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
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
