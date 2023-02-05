#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym__stavek_token1 = 1,
  anon_sym_naj = 2,
  anon_sym_EQ = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_e = 6,
  anon_sym_ene = 7,
  anon_sym_dokler = 8,
  anon_sym_funkcija = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_COMMA = 13,
  anon_sym_COLON = 14,
  anon_sym_vrni = 15,
  anon_sym_BANG = 16,
  anon_sym_AMP_AMP = 17,
  anon_sym_PIPE_PIPE = 18,
  anon_sym_LT_LT = 19,
  anon_sym_GT_GT = 20,
  anon_sym_AMP = 21,
  anon_sym_CARET = 22,
  anon_sym_PIPE = 23,
  anon_sym_EQ_EQ = 24,
  anon_sym_BANG_EQ = 25,
  anon_sym_GT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_DASH = 30,
  anon_sym_STAR_STAR = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_PLUS = 35,
  anon_sym_AT = 36,
  anon_sym_brez = 37,
  anon_sym_bool = 38,
  anon_sym_celo = 39,
  anon_sym_real = 40,
  anon_sym_znak = 41,
  anon_sym_LBRACK = 42,
  anon_sym_SEMI = 43,
  anon_sym_RBRACK = 44,
  anon_sym_PLUS_EQ = 45,
  anon_sym_DASH_EQ = 46,
  anon_sym_STAR_EQ = 47,
  anon_sym_SLASH_EQ = 48,
  anon_sym_PERCENT_EQ = 49,
  anon_sym_STAR_STAR_EQ = 50,
  anon_sym_PIPE_PIPE_EQ = 51,
  anon_sym_AMP_AMP_EQ = 52,
  anon_sym_LT_LT_EQ = 53,
  anon_sym_GT_GT_EQ = 54,
  anon_sym_PIPE_EQ = 55,
  anon_sym_CARET_EQ = 56,
  anon_sym_AMP_EQ = 57,
  sym__celo = 58,
  sym__real = 59,
  sym_ime = 60,
  sym_niz = 61,
  anon_sym_resnica = 62,
  anon_sym_la = 63,
  sym_komentar = 64,
  sym_source_file = 65,
  aux_sym__zaporedje = 66,
  sym__stavek = 67,
  sym_inicializacija = 68,
  sym_prirejanje = 69,
  sym_okvir = 70,
  sym_pogojni_stavek = 71,
  sym_zanka_dokler = 72,
  sym_funkcija = 73,
  sym_parametri = 74,
  sym_parameter = 75,
  sym_vrni = 76,
  sym_funkcijski_klic = 77,
  sym_makro_klic = 78,
  sym_argumenti = 79,
  sym__izraz = 80,
  sym_logicni_izraz = 81,
  sym_bitni_izraz = 82,
  sym_primerjalni_izraz = 83,
  sym_aritmeticni_izraz = 84,
  sym__osnovni_izraz = 85,
  sym_tip = 86,
  sym_velikost = 87,
  sym_prireditveni_op = 88,
  sym_stevilo = 89,
  sym_bool = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_parametri_repeat1 = 92,
  aux_sym_argumenti_repeat1 = 93,
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
  [anon_sym_funkcija] = "funkcija",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
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
  [anon_sym_DASH] = "-",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_AT] = "@",
  [anon_sym_brez] = "brez",
  [anon_sym_bool] = "bool",
  [anon_sym_celo] = "celo",
  [anon_sym_real] = "real",
  [anon_sym_znak] = "znak",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_funkcija] = anon_sym_funkcija,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_brez] = anon_sym_brez,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_celo] = anon_sym_celo,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_znak] = anon_sym_znak,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_funkcija] = {
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  field_telo = 2,
  field_vrni = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_funkcija] = "funkcija",
  [field_telo] = "telo",
  [field_vrni] = "vrni",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_telo, 2},
  [1] =
    {field_funkcija, 0},
  [2] =
    {field_telo, 4},
  [3] =
    {field_telo, 5},
  [4] =
    {field_telo, 6},
    {field_vrni, 5},
  [6] =
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
  [17] = 7,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 8,
  [23] = 23,
  [24] = 23,
  [25] = 6,
  [26] = 21,
  [27] = 4,
  [28] = 28,
  [29] = 9,
  [30] = 10,
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
  [44] = 44,
  [45] = 44,
  [46] = 28,
  [47] = 40,
  [48] = 39,
  [49] = 38,
  [50] = 2,
  [51] = 51,
  [52] = 40,
  [53] = 19,
  [54] = 20,
  [55] = 55,
  [56] = 55,
  [57] = 21,
  [58] = 28,
  [59] = 51,
  [60] = 18,
  [61] = 55,
  [62] = 23,
  [63] = 4,
  [64] = 6,
  [65] = 7,
  [66] = 5,
  [67] = 16,
  [68] = 15,
  [69] = 14,
  [70] = 13,
  [71] = 12,
  [72] = 11,
  [73] = 10,
  [74] = 9,
  [75] = 8,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 78,
  [81] = 79,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 84,
  [89] = 84,
  [90] = 87,
  [91] = 87,
  [92] = 85,
  [93] = 93,
  [94] = 94,
  [95] = 85,
  [96] = 87,
  [97] = 84,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 101,
  [103] = 99,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 100,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 100,
  [116] = 110,
  [117] = 117,
  [118] = 104,
  [119] = 119,
  [120] = 117,
  [121] = 101,
  [122] = 112,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 111,
  [127] = 108,
  [128] = 128,
  [129] = 128,
  [130] = 125,
  [131] = 124,
  [132] = 123,
  [133] = 119,
  [134] = 134,
  [135] = 105,
  [136] = 106,
  [137] = 107,
  [138] = 108,
  [139] = 111,
  [140] = 112,
  [141] = 107,
  [142] = 106,
  [143] = 134,
  [144] = 105,
  [145] = 134,
  [146] = 119,
  [147] = 113,
  [148] = 123,
  [149] = 124,
  [150] = 114,
  [151] = 125,
  [152] = 128,
  [153] = 110,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 157,
  [158] = 156,
  [159] = 157,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 162,
  [168] = 168,
  [169] = 169,
  [170] = 169,
  [171] = 164,
  [172] = 172,
  [173] = 168,
  [174] = 165,
  [175] = 166,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 163,
  [181] = 181,
  [182] = 156,
  [183] = 183,
  [184] = 157,
  [185] = 183,
  [186] = 157,
  [187] = 156,
  [188] = 188,
  [189] = 181,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 191,
  [195] = 195,
  [196] = 190,
  [197] = 195,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 206,
  [207] = 206,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 210,
  [216] = 212,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 217,
  [221] = 219,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 230,
  [233] = 223,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 234,
  [240] = 240,
  [241] = 235,
  [242] = 223,
  [243] = 229,
  [244] = 230,
  [245] = 245,
  [246] = 225,
  [247] = 237,
  [248] = 236,
  [249] = 226,
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

static inline bool sym_ime_character_set_5(int32_t c) {
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
                : (c <= 'y' || (c < 178
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
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(70);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '%') ADVANCE(103);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == ';') ADVANCE(118);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == ']') ADVANCE(119);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'b') ADVANCE(176);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == 'z') ADVANCE(173);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == 269) ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (sym_ime_character_set_1(lookahead)) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (sym_ime_character_set_2(lookahead)) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '%') ADVANCE(9);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(7);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'z') ADVANCE(33);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(15);
      if (lookahead == 269) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(16);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '|') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'z') ADVANCE(107);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 46:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == 269) ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(184);
      END_STATE();
    case 47:
      if (eof) ADVANCE(49);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == ';') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == 269) ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(184);
      END_STATE();
    case 48:
      if (eof) ADVANCE(49);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '%') ADVANCE(102);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(104);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == 'd') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'v') ADVANCE(179);
      if (lookahead == '{') ADVANCE(55);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(56);
      if (lookahead == 269) ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(184);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__stavek_token1);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == ';') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__stavek_token1);
      if (lookahead == '\n' ||
          lookahead == ';') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_naj);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(154);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_e);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ene);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_dokler);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_funkcija);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_vrni);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(72);
      if (lookahead == '=') ADVANCE(132);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(71);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '|') ADVANCE(74);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(73);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(96);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(120);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_brez);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_brez);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_bool);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_celo);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_celo);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_real);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_znak);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_znak);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__real);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(183);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(184);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(161);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(184);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(186);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(184);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(62);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(184);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(164);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(184);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead == 's') ADVANCE(172);
      if (sym_ime_character_set_4(lookahead)) ADVANCE(184);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(159);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(144);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(168);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(147);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(58);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(182);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(60);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(59);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(180);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(178);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(68);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(162);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(149);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(52);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(145);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(148);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(116);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(169);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(110);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(114);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(175);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(157);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(158);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(163);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(160);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(146);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(165);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(112);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(153);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(166);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(61);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(170);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 's') ADVANCE(172);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'u') ADVANCE(171);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'z') ADVANCE(108);
      if (sym_ime_character_set_5(lookahead)) ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 382) ADVANCE(187);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ime);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_niz);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_resnica);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_la);
      if (sym_ime_character_set_3(lookahead)) ADVANCE(184);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_komentar);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 46},
  [16] = {.lex_state = 46},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 46},
  [22] = {.lex_state = 46},
  [23] = {.lex_state = 46},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 46},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 46},
  [29] = {.lex_state = 46},
  [30] = {.lex_state = 46},
  [31] = {.lex_state = 46},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 46},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 48},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 48},
  [53] = {.lex_state = 48},
  [54] = {.lex_state = 48},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 48},
  [58] = {.lex_state = 48},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 48},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 48},
  [63] = {.lex_state = 48},
  [64] = {.lex_state = 48},
  [65] = {.lex_state = 48},
  [66] = {.lex_state = 48},
  [67] = {.lex_state = 48},
  [68] = {.lex_state = 48},
  [69] = {.lex_state = 48},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 48},
  [72] = {.lex_state = 48},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
  [75] = {.lex_state = 48},
  [76] = {.lex_state = 48},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 48},
  [79] = {.lex_state = 48},
  [80] = {.lex_state = 48},
  [81] = {.lex_state = 48},
  [82] = {.lex_state = 48},
  [83] = {.lex_state = 48},
  [84] = {.lex_state = 48},
  [85] = {.lex_state = 48},
  [86] = {.lex_state = 48},
  [87] = {.lex_state = 48},
  [88] = {.lex_state = 48},
  [89] = {.lex_state = 48},
  [90] = {.lex_state = 48},
  [91] = {.lex_state = 48},
  [92] = {.lex_state = 48},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 48},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 48},
  [97] = {.lex_state = 48},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
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
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 47},
  [157] = {.lex_state = 47},
  [158] = {.lex_state = 47},
  [159] = {.lex_state = 47},
  [160] = {.lex_state = 47},
  [161] = {.lex_state = 47},
  [162] = {.lex_state = 46},
  [163] = {.lex_state = 46},
  [164] = {.lex_state = 46},
  [165] = {.lex_state = 46},
  [166] = {.lex_state = 46},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 46},
  [169] = {.lex_state = 46},
  [170] = {.lex_state = 46},
  [171] = {.lex_state = 46},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 46},
  [174] = {.lex_state = 46},
  [175] = {.lex_state = 46},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 46},
  [181] = {.lex_state = 46},
  [182] = {.lex_state = 46},
  [183] = {.lex_state = 46},
  [184] = {.lex_state = 46},
  [185] = {.lex_state = 46},
  [186] = {.lex_state = 46},
  [187] = {.lex_state = 46},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 46},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 48},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 48},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 5},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 5},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 5},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 5},
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
    [anon_sym_funkcija] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_brez] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_celo] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_znak] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
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
    [sym_ime] = ACTIONS(1),
    [sym_niz] = ACTIONS(1),
    [anon_sym_resnica] = ACTIONS(1),
    [anon_sym_la] = ACTIONS(1),
    [sym_komentar] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(222),
    [sym__stavek] = STATE(83),
    [sym_inicializacija] = STATE(163),
    [sym_prirejanje] = STATE(163),
    [sym_okvir] = STATE(163),
    [sym_pogojni_stavek] = STATE(163),
    [sym_zanka_dokler] = STATE(163),
    [sym_funkcija] = STATE(163),
    [sym_vrni] = STATE(163),
    [sym_funkcijski_klic] = STATE(163),
    [sym_makro_klic] = STATE(163),
    [aux_sym_source_file_repeat1] = STATE(83),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_naj] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_e] = ACTIONS(9),
    [anon_sym_dokler] = ACTIONS(11),
    [anon_sym_funkcija] = ACTIONS(13),
    [anon_sym_vrni] = ACTIONS(15),
    [sym_ime] = ACTIONS(17),
    [sym_komentar] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(21), 1,
      aux_sym__stavek_token1,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [37] = 3,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(23), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [74] = 8,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(31), 17,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [120] = 2,
    ACTIONS(45), 1,
      aux_sym__stavek_token1,
    ACTIONS(47), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [154] = 4,
    ACTIONS(29), 1,
      aux_sym__stavek_token1,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(31), 25,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [192] = 11,
    ACTIONS(29), 1,
      aux_sym__stavek_token1,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(31), 13,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [244] = 4,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(67), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 25,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [282] = 2,
    ACTIONS(67), 1,
      aux_sym__stavek_token1,
    ACTIONS(69), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [316] = 13,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(75), 1,
      anon_sym_CARET,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [372] = 11,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 13,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [424] = 8,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 18,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [470] = 4,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(73), 25,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [508] = 2,
    ACTIONS(71), 1,
      aux_sym__stavek_token1,
    ACTIONS(73), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [542] = 8,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(79), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(81), 18,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [588] = 4,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(79), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 25,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [626] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(31), 12,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [678] = 2,
    ACTIONS(89), 1,
      aux_sym__stavek_token1,
    ACTIONS(91), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [712] = 4,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(93), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 25,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [750] = 4,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(97), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 25,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [788] = 2,
    ACTIONS(101), 1,
      aux_sym__stavek_token1,
    ACTIONS(103), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [822] = 4,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(69), 24,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [860] = 2,
    ACTIONS(105), 1,
      aux_sym__stavek_token1,
    ACTIONS(107), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [894] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(107), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [928] = 4,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(31), 24,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [966] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(103), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1000] = 8,
    ACTIONS(29), 1,
      aux_sym__stavek_token1,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(31), 18,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1046] = 2,
    ACTIONS(109), 1,
      aux_sym__stavek_token1,
    ACTIONS(111), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1080] = 2,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(69), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1114] = 13,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(115), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      sym_ime,
      sym_komentar,
  [1170] = 11,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 12,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1222] = 8,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(73), 17,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1268] = 4,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(73), 24,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1306] = 2,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(73), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1340] = 8,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(81), 17,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_PIPE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1386] = 4,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(81), 24,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1424] = 2,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(47), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1458] = 14,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(75), 1,
      anon_sym_CARET,
    ACTIONS(117), 1,
      aux_sym__stavek_token1,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(119), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1516] = 14,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(75), 1,
      anon_sym_CARET,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(125), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1574] = 2,
    ACTIONS(127), 1,
      aux_sym__stavek_token1,
    ACTIONS(129), 28,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1608] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(91), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1642] = 4,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(95), 24,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1680] = 4,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(99), 24,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1718] = 14,
    ACTIONS(49), 1,
      anon_sym_LT_LT,
    ACTIONS(53), 1,
      anon_sym_AMP_AMP,
    ACTIONS(55), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(57), 1,
      anon_sym_GT_GT,
    ACTIONS(59), 1,
      anon_sym_AMP,
    ACTIONS(63), 1,
      anon_sym_STAR_STAR,
    ACTIONS(75), 1,
      anon_sym_CARET,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(131), 1,
      aux_sym__stavek_token1,
    ACTIONS(51), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(77), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(65), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(61), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(133), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1776] = 14,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(115), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(133), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1834] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(111), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1868] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(129), 27,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
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
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      sym_ime,
      sym_komentar,
  [1902] = 14,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(115), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(125), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [1960] = 14,
    ACTIONS(33), 1,
      anon_sym_AMP_AMP,
    ACTIONS(35), 1,
      anon_sym_LT_LT,
    ACTIONS(37), 1,
      anon_sym_GT_GT,
    ACTIONS(43), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(85), 1,
      anon_sym_AMP,
    ACTIONS(113), 1,
      anon_sym_CARET,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(39), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(115), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(87), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(41), 4,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
    ACTIONS(119), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [2018] = 3,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(21), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2048] = 13,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(155), 1,
      sym_niz,
    STATE(98), 1,
      aux_sym_argumenti_repeat1,
    STATE(246), 1,
      sym_argumenti,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(77), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [2097] = 2,
    ACTIONS(129), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(127), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2124] = 4,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(95), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(93), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2155] = 4,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(99), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(97), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2186] = 13,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(155), 1,
      sym_niz,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_argumenti_repeat1,
    STATE(242), 1,
      sym_argumenti,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(77), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [2235] = 13,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(155), 1,
      sym_niz,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_argumenti_repeat1,
    STATE(233), 1,
      sym_argumenti,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(77), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [2284] = 2,
    ACTIONS(103), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(101), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2311] = 2,
    ACTIONS(111), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(109), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2338] = 13,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(155), 1,
      sym_niz,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_argumenti_repeat1,
    STATE(225), 1,
      sym_argumenti,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(77), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [2387] = 2,
    ACTIONS(91), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(89), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2414] = 13,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(155), 1,
      sym_niz,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_argumenti_repeat1,
    STATE(223), 1,
      sym_argumenti,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(77), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [2463] = 2,
    ACTIONS(107), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(105), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2490] = 9,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(31), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(29), 9,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2531] = 4,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(31), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(29), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2562] = 13,
    ACTIONS(31), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(29), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2611] = 2,
    ACTIONS(47), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(45), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2638] = 4,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(81), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(79), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2669] = 9,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(81), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(79), 9,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2710] = 2,
    ACTIONS(73), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(71), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2737] = 4,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(73), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(71), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2768] = 9,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(73), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_STAR,
    ACTIONS(71), 9,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2809] = 13,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(71), 6,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_DASH,
      anon_sym_PLUS,
  [2858] = 15,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(71), 3,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2911] = 2,
    ACTIONS(69), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(67), 17,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2938] = 4,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(69), 5,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(67), 14,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_CARET,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
  [2969] = 16,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3023] = 16,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3077] = 16,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(201), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_okvir,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3131] = 16,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    STATE(173), 1,
      sym_okvir,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3185] = 16,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_okvir,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3239] = 16,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(168), 1,
      sym_okvir,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3293] = 11,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 1,
      anon_sym_naj,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_e,
    ACTIONS(218), 1,
      anon_sym_dokler,
    ACTIONS(221), 1,
      anon_sym_funkcija,
    ACTIONS(224), 1,
      anon_sym_vrni,
    ACTIONS(227), 1,
      sym_ime,
    ACTIONS(230), 1,
      sym_komentar,
    STATE(82), 2,
      sym__stavek,
      aux_sym_source_file_repeat1,
    STATE(163), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3336] = 11,
    ACTIONS(5), 1,
      anon_sym_naj,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_e,
    ACTIONS(11), 1,
      anon_sym_dokler,
    ACTIONS(13), 1,
      anon_sym_funkcija,
    ACTIONS(15), 1,
      anon_sym_vrni,
    ACTIONS(17), 1,
      sym_ime,
    ACTIONS(19), 1,
      sym_komentar,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    STATE(82), 2,
      sym__stavek,
      aux_sym_source_file_repeat1,
    STATE(163), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3379] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    STATE(94), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3422] = 15,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3473] = 15,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3524] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(89), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3567] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3610] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3653] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(84), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3696] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(88), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3739] = 15,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3790] = 11,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    ACTIONS(268), 1,
      anon_sym_BANG,
    ACTIONS(271), 1,
      anon_sym_DASH,
    ACTIONS(274), 1,
      anon_sym_AT,
    ACTIONS(277), 1,
      sym__celo,
    ACTIONS(280), 1,
      sym__real,
    ACTIONS(283), 1,
      sym_ime,
    ACTIONS(286), 1,
      sym_niz,
    STATE(93), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(289), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(86), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [3833] = 11,
    ACTIONS(292), 1,
      anon_sym_naj,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      anon_sym_e,
    ACTIONS(303), 1,
      anon_sym_dokler,
    ACTIONS(306), 1,
      anon_sym_funkcija,
    ACTIONS(309), 1,
      anon_sym_vrni,
    ACTIONS(312), 1,
      sym_ime,
    ACTIONS(315), 1,
      sym_komentar,
    STATE(94), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3876] = 15,
    ACTIONS(159), 1,
      anon_sym_LT_LT,
    ACTIONS(171), 1,
      anon_sym_AMP_AMP,
    ACTIONS(173), 1,
      anon_sym_GT_GT,
    ACTIONS(179), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(183), 1,
      anon_sym_AMP,
    ACTIONS(185), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_CARET,
    ACTIONS(197), 1,
      anon_sym_PIPE,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(161), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(175), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(177), 2,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(191), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3927] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(97), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [3970] = 11,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_naj,
    ACTIONS(239), 1,
      anon_sym_e,
    ACTIONS(241), 1,
      anon_sym_dokler,
    ACTIONS(243), 1,
      anon_sym_funkcija,
    ACTIONS(245), 1,
      anon_sym_vrni,
    ACTIONS(247), 1,
      sym_ime,
    ACTIONS(249), 1,
      sym_komentar,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(180), 9,
      sym_inicializacija,
      sym_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [4013] = 11,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(324), 1,
      sym_niz,
    STATE(93), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(76), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4056] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(326), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(79), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4096] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(328), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(53), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4136] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(330), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [4176] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(332), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(85), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4216] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(334), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(81), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4256] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(336), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(78), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4296] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(338), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(73), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4336] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(340), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(74), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4376] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(342), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(75), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [4416] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(344), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [4456] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(360), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [4496] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(364), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [4536] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(366), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [4576] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(368), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [4616] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(370), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [4656] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(372), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [4696] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(388), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [4736] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(392), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [4776] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(394), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [4816] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(396), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(80), 9,
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
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(398), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(71), 9,
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
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(400), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [4936] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(402), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(95), 9,
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
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(404), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5016] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(406), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(70), 9,
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
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(408), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [5096] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(410), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [5136] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(412), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5176] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(414), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5216] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(416), 1,
      sym_niz,
    ACTIONS(157), 2,
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
  [5256] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(418), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5296] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(420), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5336] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(422), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5376] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(424), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5416] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(426), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5456] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(428), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5496] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(430), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5536] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(432), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5576] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(434), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5616] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(436), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5656] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(438), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5696] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(440), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [5736] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(442), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5776] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(444), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5816] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(446), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(72), 9,
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
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(448), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5896] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(450), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5936] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(452), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [5976] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(454), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [6016] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(456), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [6056] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(458), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [6096] = 10,
    ACTIONS(374), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 1,
      anon_sym_BANG,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_AT,
    ACTIONS(382), 1,
      sym__celo,
    ACTIONS(384), 1,
      sym__real,
    ACTIONS(386), 1,
      sym_ime,
    ACTIONS(460), 1,
      sym_niz,
    ACTIONS(390), 2,
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
  [6136] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(462), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [6176] = 10,
    ACTIONS(346), 1,
      anon_sym_LPAREN,
    ACTIONS(348), 1,
      anon_sym_BANG,
    ACTIONS(350), 1,
      anon_sym_DASH,
    ACTIONS(352), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      sym__celo,
    ACTIONS(356), 1,
      sym__real,
    ACTIONS(358), 1,
      sym_ime,
    ACTIONS(464), 1,
      sym_niz,
    ACTIONS(362), 2,
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
  [6216] = 10,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_BANG,
    ACTIONS(145), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      anon_sym_AT,
    ACTIONS(149), 1,
      sym__celo,
    ACTIONS(151), 1,
      sym__real,
    ACTIONS(153), 1,
      sym_ime,
    ACTIONS(466), 1,
      sym_niz,
    ACTIONS(157), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(54), 9,
      sym_funkcijski_klic,
      sym__izraz,
      sym_logicni_izraz,
      sym_bitni_izraz,
      sym_primerjalni_izraz,
      sym_aritmeticni_izraz,
      sym__osnovni_izraz,
      sym_stevilo,
      sym_bool,
  [6256] = 8,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(470), 1,
      anon_sym_LPAREN,
    ACTIONS(472), 1,
      anon_sym_BANG,
    STATE(114), 1,
      sym_prireditveni_op,
    ACTIONS(476), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(478), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(480), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(474), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6290] = 8,
    ACTIONS(468), 1,
      anon_sym_EQ,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(484), 1,
      anon_sym_BANG,
    STATE(150), 1,
      sym_prireditveni_op,
    ACTIONS(476), 2,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
    ACTIONS(478), 2,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
    ACTIONS(480), 3,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
    ACTIONS(474), 6,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
  [6324] = 2,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(488), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6340] = 2,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(492), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6356] = 2,
    ACTIONS(486), 1,
      aux_sym__stavek_token1,
    ACTIONS(488), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6372] = 2,
    ACTIONS(490), 1,
      aux_sym__stavek_token1,
    ACTIONS(492), 10,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6388] = 3,
    ACTIONS(498), 1,
      anon_sym_ene,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(496), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6406] = 3,
    ACTIONS(494), 1,
      aux_sym__stavek_token1,
    ACTIONS(500), 1,
      anon_sym_ene,
    ACTIONS(496), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6424] = 2,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(504), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6439] = 3,
    ACTIONS(506), 1,
      ts_builtin_sym_end,
    ACTIONS(508), 1,
      aux_sym__stavek_token1,
    ACTIONS(510), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6456] = 2,
    ACTIONS(512), 1,
      aux_sym__stavek_token1,
    ACTIONS(514), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6471] = 2,
    ACTIONS(516), 1,
      aux_sym__stavek_token1,
    ACTIONS(518), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6486] = 2,
    ACTIONS(520), 1,
      aux_sym__stavek_token1,
    ACTIONS(522), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6501] = 2,
    ACTIONS(502), 1,
      aux_sym__stavek_token1,
    ACTIONS(504), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6516] = 2,
    ACTIONS(524), 1,
      aux_sym__stavek_token1,
    ACTIONS(526), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6531] = 2,
    ACTIONS(528), 1,
      aux_sym__stavek_token1,
    ACTIONS(530), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6546] = 2,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(530), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6561] = 2,
    ACTIONS(512), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(514), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6576] = 2,
    ACTIONS(532), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(534), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [6591] = 2,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(526), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6606] = 2,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(518), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6621] = 2,
    ACTIONS(520), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(522), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6636] = 2,
    ACTIONS(532), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(534), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [6651] = 2,
    ACTIONS(532), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(534), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [6666] = 2,
    ACTIONS(532), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(534), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [6681] = 2,
    ACTIONS(532), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(534), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [6696] = 2,
    ACTIONS(536), 1,
      aux_sym__stavek_token1,
    ACTIONS(510), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6711] = 2,
    ACTIONS(538), 1,
      aux_sym__stavek_token1,
    ACTIONS(540), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6726] = 2,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(488), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6741] = 2,
    ACTIONS(542), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(544), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6756] = 2,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(492), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6771] = 2,
    ACTIONS(542), 1,
      aux_sym__stavek_token1,
    ACTIONS(544), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6786] = 2,
    ACTIONS(490), 1,
      aux_sym__stavek_token1,
    ACTIONS(492), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6801] = 2,
    ACTIONS(486), 1,
      aux_sym__stavek_token1,
    ACTIONS(488), 9,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6816] = 2,
    ACTIONS(546), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(548), 5,
      anon_sym_DASH,
      sym__celo,
      sym_ime,
      anon_sym_resnica,
      anon_sym_la,
  [6831] = 2,
    ACTIONS(538), 2,
      ts_builtin_sym_end,
      aux_sym__stavek_token1,
    ACTIONS(540), 8,
      anon_sym_naj,
      anon_sym_LBRACE,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
      sym_komentar,
  [6846] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(220), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [6866] = 2,
    ACTIONS(560), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(558), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [6880] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(200), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [6900] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(213), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [6920] = 2,
    ACTIONS(560), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      sym_komentar,
    ACTIONS(558), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [6934] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(221), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [6954] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(217), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [6974] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(219), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [6994] = 5,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
    ACTIONS(552), 1,
      anon_sym_AT,
    ACTIONS(556), 1,
      anon_sym_LBRACK,
    STATE(227), 1,
      sym_tip,
    ACTIONS(554), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [7014] = 1,
    ACTIONS(562), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7022] = 1,
    ACTIONS(564), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7030] = 1,
    ACTIONS(566), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7038] = 1,
    ACTIONS(568), 5,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [7046] = 5,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      sym_ime,
    STATE(208), 1,
      sym_parameter,
    STATE(214), 1,
      aux_sym_parametri_repeat1,
    STATE(243), 1,
      sym_parametri,
  [7062] = 5,
    ACTIONS(572), 1,
      sym_ime,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_parameter,
    STATE(214), 1,
      aux_sym_parametri_repeat1,
    STATE(228), 1,
      sym_parametri,
  [7078] = 5,
    ACTIONS(572), 1,
      sym_ime,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_parameter,
    STATE(214), 1,
      aux_sym_parametri_repeat1,
    STATE(229), 1,
      sym_parametri,
  [7094] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(578), 1,
      anon_sym_e,
    STATE(171), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [7105] = 3,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(580), 1,
      anon_sym_e,
    STATE(164), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [7116] = 2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(582), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7124] = 3,
    ACTIONS(586), 1,
      sym_ime,
    STATE(209), 1,
      aux_sym_parametri_repeat1,
    STATE(231), 1,
      sym_parameter,
  [7134] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      anon_sym_DASH_GT,
    STATE(162), 1,
      sym_okvir,
  [7144] = 2,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    ACTIONS(591), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [7152] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(593), 1,
      anon_sym_DASH_GT,
    STATE(174), 1,
      sym_okvir,
  [7162] = 1,
    ACTIONS(595), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7168] = 3,
    ACTIONS(572), 1,
      sym_ime,
    STATE(209), 1,
      aux_sym_parametri_repeat1,
    STATE(211), 1,
      sym_parameter,
  [7178] = 3,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(597), 1,
      anon_sym_DASH_GT,
    STATE(167), 1,
      sym_okvir,
  [7188] = 3,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_DASH_GT,
    STATE(165), 1,
      sym_okvir,
  [7198] = 2,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_okvir,
  [7205] = 2,
    ACTIONS(601), 1,
      sym__celo,
    STATE(224), 1,
      sym_velikost,
  [7212] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_okvir,
  [7219] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(170), 1,
      sym_okvir,
  [7226] = 2,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_okvir,
  [7233] = 1,
    ACTIONS(603), 1,
      ts_builtin_sym_end,
  [7237] = 1,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [7241] = 1,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
  [7245] = 1,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [7249] = 1,
    ACTIONS(611), 1,
      sym_ime,
  [7253] = 1,
    ACTIONS(613), 1,
      anon_sym_SEMI,
  [7257] = 1,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
  [7261] = 1,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
  [7265] = 1,
    ACTIONS(619), 1,
      sym_ime,
  [7269] = 1,
    ACTIONS(584), 1,
      anon_sym_COMMA,
  [7273] = 1,
    ACTIONS(621), 1,
      sym_ime,
  [7277] = 1,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
  [7281] = 1,
    ACTIONS(625), 1,
      anon_sym_EQ,
  [7285] = 1,
    ACTIONS(627), 1,
      anon_sym_LPAREN,
  [7289] = 1,
    ACTIONS(629), 1,
      anon_sym_LPAREN,
  [7293] = 1,
    ACTIONS(631), 1,
      sym_ime,
  [7297] = 1,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
  [7301] = 1,
    ACTIONS(635), 1,
      anon_sym_EQ,
  [7305] = 1,
    ACTIONS(637), 1,
      sym_ime,
  [7309] = 1,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
  [7313] = 1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [7317] = 1,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
  [7321] = 1,
    ACTIONS(645), 1,
      sym_ime,
  [7325] = 1,
    ACTIONS(647), 1,
      anon_sym_COLON,
  [7329] = 1,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
  [7333] = 1,
    ACTIONS(651), 1,
      sym_ime,
  [7337] = 1,
    ACTIONS(653), 1,
      anon_sym_LPAREN,
  [7341] = 1,
    ACTIONS(655), 1,
      sym_ime,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 316,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 424,
  [SMALL_STATE(13)] = 470,
  [SMALL_STATE(14)] = 508,
  [SMALL_STATE(15)] = 542,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 626,
  [SMALL_STATE(18)] = 678,
  [SMALL_STATE(19)] = 712,
  [SMALL_STATE(20)] = 750,
  [SMALL_STATE(21)] = 788,
  [SMALL_STATE(22)] = 822,
  [SMALL_STATE(23)] = 860,
  [SMALL_STATE(24)] = 894,
  [SMALL_STATE(25)] = 928,
  [SMALL_STATE(26)] = 966,
  [SMALL_STATE(27)] = 1000,
  [SMALL_STATE(28)] = 1046,
  [SMALL_STATE(29)] = 1080,
  [SMALL_STATE(30)] = 1114,
  [SMALL_STATE(31)] = 1170,
  [SMALL_STATE(32)] = 1222,
  [SMALL_STATE(33)] = 1268,
  [SMALL_STATE(34)] = 1306,
  [SMALL_STATE(35)] = 1340,
  [SMALL_STATE(36)] = 1386,
  [SMALL_STATE(37)] = 1424,
  [SMALL_STATE(38)] = 1458,
  [SMALL_STATE(39)] = 1516,
  [SMALL_STATE(40)] = 1574,
  [SMALL_STATE(41)] = 1608,
  [SMALL_STATE(42)] = 1642,
  [SMALL_STATE(43)] = 1680,
  [SMALL_STATE(44)] = 1718,
  [SMALL_STATE(45)] = 1776,
  [SMALL_STATE(46)] = 1834,
  [SMALL_STATE(47)] = 1868,
  [SMALL_STATE(48)] = 1902,
  [SMALL_STATE(49)] = 1960,
  [SMALL_STATE(50)] = 2018,
  [SMALL_STATE(51)] = 2048,
  [SMALL_STATE(52)] = 2097,
  [SMALL_STATE(53)] = 2124,
  [SMALL_STATE(54)] = 2155,
  [SMALL_STATE(55)] = 2186,
  [SMALL_STATE(56)] = 2235,
  [SMALL_STATE(57)] = 2284,
  [SMALL_STATE(58)] = 2311,
  [SMALL_STATE(59)] = 2338,
  [SMALL_STATE(60)] = 2387,
  [SMALL_STATE(61)] = 2414,
  [SMALL_STATE(62)] = 2463,
  [SMALL_STATE(63)] = 2490,
  [SMALL_STATE(64)] = 2531,
  [SMALL_STATE(65)] = 2562,
  [SMALL_STATE(66)] = 2611,
  [SMALL_STATE(67)] = 2638,
  [SMALL_STATE(68)] = 2669,
  [SMALL_STATE(69)] = 2710,
  [SMALL_STATE(70)] = 2737,
  [SMALL_STATE(71)] = 2768,
  [SMALL_STATE(72)] = 2809,
  [SMALL_STATE(73)] = 2858,
  [SMALL_STATE(74)] = 2911,
  [SMALL_STATE(75)] = 2938,
  [SMALL_STATE(76)] = 2969,
  [SMALL_STATE(77)] = 3023,
  [SMALL_STATE(78)] = 3077,
  [SMALL_STATE(79)] = 3131,
  [SMALL_STATE(80)] = 3185,
  [SMALL_STATE(81)] = 3239,
  [SMALL_STATE(82)] = 3293,
  [SMALL_STATE(83)] = 3336,
  [SMALL_STATE(84)] = 3379,
  [SMALL_STATE(85)] = 3422,
  [SMALL_STATE(86)] = 3473,
  [SMALL_STATE(87)] = 3524,
  [SMALL_STATE(88)] = 3567,
  [SMALL_STATE(89)] = 3610,
  [SMALL_STATE(90)] = 3653,
  [SMALL_STATE(91)] = 3696,
  [SMALL_STATE(92)] = 3739,
  [SMALL_STATE(93)] = 3790,
  [SMALL_STATE(94)] = 3833,
  [SMALL_STATE(95)] = 3876,
  [SMALL_STATE(96)] = 3927,
  [SMALL_STATE(97)] = 3970,
  [SMALL_STATE(98)] = 4013,
  [SMALL_STATE(99)] = 4056,
  [SMALL_STATE(100)] = 4096,
  [SMALL_STATE(101)] = 4136,
  [SMALL_STATE(102)] = 4176,
  [SMALL_STATE(103)] = 4216,
  [SMALL_STATE(104)] = 4256,
  [SMALL_STATE(105)] = 4296,
  [SMALL_STATE(106)] = 4336,
  [SMALL_STATE(107)] = 4376,
  [SMALL_STATE(108)] = 4416,
  [SMALL_STATE(109)] = 4456,
  [SMALL_STATE(110)] = 4496,
  [SMALL_STATE(111)] = 4536,
  [SMALL_STATE(112)] = 4576,
  [SMALL_STATE(113)] = 4616,
  [SMALL_STATE(114)] = 4656,
  [SMALL_STATE(115)] = 4696,
  [SMALL_STATE(116)] = 4736,
  [SMALL_STATE(117)] = 4776,
  [SMALL_STATE(118)] = 4816,
  [SMALL_STATE(119)] = 4856,
  [SMALL_STATE(120)] = 4896,
  [SMALL_STATE(121)] = 4936,
  [SMALL_STATE(122)] = 4976,
  [SMALL_STATE(123)] = 5016,
  [SMALL_STATE(124)] = 5056,
  [SMALL_STATE(125)] = 5096,
  [SMALL_STATE(126)] = 5136,
  [SMALL_STATE(127)] = 5176,
  [SMALL_STATE(128)] = 5216,
  [SMALL_STATE(129)] = 5256,
  [SMALL_STATE(130)] = 5296,
  [SMALL_STATE(131)] = 5336,
  [SMALL_STATE(132)] = 5376,
  [SMALL_STATE(133)] = 5416,
  [SMALL_STATE(134)] = 5456,
  [SMALL_STATE(135)] = 5496,
  [SMALL_STATE(136)] = 5536,
  [SMALL_STATE(137)] = 5576,
  [SMALL_STATE(138)] = 5616,
  [SMALL_STATE(139)] = 5656,
  [SMALL_STATE(140)] = 5696,
  [SMALL_STATE(141)] = 5736,
  [SMALL_STATE(142)] = 5776,
  [SMALL_STATE(143)] = 5816,
  [SMALL_STATE(144)] = 5856,
  [SMALL_STATE(145)] = 5896,
  [SMALL_STATE(146)] = 5936,
  [SMALL_STATE(147)] = 5976,
  [SMALL_STATE(148)] = 6016,
  [SMALL_STATE(149)] = 6056,
  [SMALL_STATE(150)] = 6096,
  [SMALL_STATE(151)] = 6136,
  [SMALL_STATE(152)] = 6176,
  [SMALL_STATE(153)] = 6216,
  [SMALL_STATE(154)] = 6256,
  [SMALL_STATE(155)] = 6290,
  [SMALL_STATE(156)] = 6324,
  [SMALL_STATE(157)] = 6340,
  [SMALL_STATE(158)] = 6356,
  [SMALL_STATE(159)] = 6372,
  [SMALL_STATE(160)] = 6388,
  [SMALL_STATE(161)] = 6406,
  [SMALL_STATE(162)] = 6424,
  [SMALL_STATE(163)] = 6439,
  [SMALL_STATE(164)] = 6456,
  [SMALL_STATE(165)] = 6471,
  [SMALL_STATE(166)] = 6486,
  [SMALL_STATE(167)] = 6501,
  [SMALL_STATE(168)] = 6516,
  [SMALL_STATE(169)] = 6531,
  [SMALL_STATE(170)] = 6546,
  [SMALL_STATE(171)] = 6561,
  [SMALL_STATE(172)] = 6576,
  [SMALL_STATE(173)] = 6591,
  [SMALL_STATE(174)] = 6606,
  [SMALL_STATE(175)] = 6621,
  [SMALL_STATE(176)] = 6636,
  [SMALL_STATE(177)] = 6651,
  [SMALL_STATE(178)] = 6666,
  [SMALL_STATE(179)] = 6681,
  [SMALL_STATE(180)] = 6696,
  [SMALL_STATE(181)] = 6711,
  [SMALL_STATE(182)] = 6726,
  [SMALL_STATE(183)] = 6741,
  [SMALL_STATE(184)] = 6756,
  [SMALL_STATE(185)] = 6771,
  [SMALL_STATE(186)] = 6786,
  [SMALL_STATE(187)] = 6801,
  [SMALL_STATE(188)] = 6816,
  [SMALL_STATE(189)] = 6831,
  [SMALL_STATE(190)] = 6846,
  [SMALL_STATE(191)] = 6866,
  [SMALL_STATE(192)] = 6880,
  [SMALL_STATE(193)] = 6900,
  [SMALL_STATE(194)] = 6920,
  [SMALL_STATE(195)] = 6934,
  [SMALL_STATE(196)] = 6954,
  [SMALL_STATE(197)] = 6974,
  [SMALL_STATE(198)] = 6994,
  [SMALL_STATE(199)] = 7014,
  [SMALL_STATE(200)] = 7022,
  [SMALL_STATE(201)] = 7030,
  [SMALL_STATE(202)] = 7038,
  [SMALL_STATE(203)] = 7046,
  [SMALL_STATE(204)] = 7062,
  [SMALL_STATE(205)] = 7078,
  [SMALL_STATE(206)] = 7094,
  [SMALL_STATE(207)] = 7105,
  [SMALL_STATE(208)] = 7116,
  [SMALL_STATE(209)] = 7124,
  [SMALL_STATE(210)] = 7134,
  [SMALL_STATE(211)] = 7144,
  [SMALL_STATE(212)] = 7152,
  [SMALL_STATE(213)] = 7162,
  [SMALL_STATE(214)] = 7168,
  [SMALL_STATE(215)] = 7178,
  [SMALL_STATE(216)] = 7188,
  [SMALL_STATE(217)] = 7198,
  [SMALL_STATE(218)] = 7205,
  [SMALL_STATE(219)] = 7212,
  [SMALL_STATE(220)] = 7219,
  [SMALL_STATE(221)] = 7226,
  [SMALL_STATE(222)] = 7233,
  [SMALL_STATE(223)] = 7237,
  [SMALL_STATE(224)] = 7241,
  [SMALL_STATE(225)] = 7245,
  [SMALL_STATE(226)] = 7249,
  [SMALL_STATE(227)] = 7253,
  [SMALL_STATE(228)] = 7257,
  [SMALL_STATE(229)] = 7261,
  [SMALL_STATE(230)] = 7265,
  [SMALL_STATE(231)] = 7269,
  [SMALL_STATE(232)] = 7273,
  [SMALL_STATE(233)] = 7277,
  [SMALL_STATE(234)] = 7281,
  [SMALL_STATE(235)] = 7285,
  [SMALL_STATE(236)] = 7289,
  [SMALL_STATE(237)] = 7293,
  [SMALL_STATE(238)] = 7297,
  [SMALL_STATE(239)] = 7301,
  [SMALL_STATE(240)] = 7305,
  [SMALL_STATE(241)] = 7309,
  [SMALL_STATE(242)] = 7313,
  [SMALL_STATE(243)] = 7317,
  [SMALL_STATE(244)] = 7321,
  [SMALL_STATE(245)] = 7325,
  [SMALL_STATE(246)] = 7329,
  [SMALL_STATE(247)] = 7333,
  [SMALL_STATE(248)] = 7337,
  [SMALL_STATE(249)] = 7341,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aritmeticni_izraz, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aritmeticni_izraz, 3),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primerjalni_izraz, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primerjalni_izraz, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitni_izraz, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bitni_izraz, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicni_izraz, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicni_izraz, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni_izraz, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni_izraz, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aritmeticni_izraz, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aritmeticni_izraz, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logicni_izraz, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_logicni_izraz, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stevilo, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stevilo, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inicializacija, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inicializacija, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrni, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrni, 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [224] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(155),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(121),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(153),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(100),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(244),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(58),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(58),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(50),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(86),
  [289] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(57),
  [292] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(247),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(91),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(104),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(103),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(249),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(117),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(154),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(180),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 3),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 3),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 2),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 6, .production_id = 4),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 6, .production_id = 4),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 1),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 5, .production_id = 3),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 5, .production_id = 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_klic, 5, .production_id = 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_klic, 5, .production_id = 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 8, .production_id = 6),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 8, .production_id = 6),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prireditveni_op, 1),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prireditveni_op, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_klic, 4, .production_id = 2),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_klic, 4, .production_id = 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 7, .production_id = 5),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 7, .production_id = 5),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 2),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 5),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2), SHIFT_REPEAT(245),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [603] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_velikost, 1),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
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
