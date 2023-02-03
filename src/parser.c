#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SEMI = 1,
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
  anon_sym_DASH = 17,
  anon_sym_PIPE_PIPE = 18,
  anon_sym_AMP_AMP = 19,
  anon_sym_PIPE = 20,
  anon_sym_CARET = 21,
  anon_sym_AMP = 22,
  anon_sym_LT_LT = 23,
  anon_sym_GT_GT = 24,
  anon_sym_EQ_EQ = 25,
  anon_sym_BANG_EQ = 26,
  anon_sym_GT = 27,
  anon_sym_GT_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_LT_EQ = 30,
  anon_sym_PLUS = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_STAR_STAR = 35,
  anon_sym_resnica = 36,
  anon_sym_la = 37,
  anon_sym_AT = 38,
  anon_sym_brez = 39,
  anon_sym_bool = 40,
  anon_sym_celo = 41,
  anon_sym_real = 42,
  anon_sym_znak = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_PLUS_EQ = 46,
  anon_sym_DASH_EQ = 47,
  anon_sym_STAR_EQ = 48,
  anon_sym_SLASH_EQ = 49,
  anon_sym_PERCENT_EQ = 50,
  anon_sym_STAR_STAR_EQ = 51,
  anon_sym_PIPE_PIPE_EQ = 52,
  anon_sym_AMP_AMP_EQ = 53,
  anon_sym_LT_LT_EQ = 54,
  anon_sym_GT_GT_EQ = 55,
  anon_sym_PIPE_EQ = 56,
  anon_sym_CARET_EQ = 57,
  anon_sym_AMP_EQ = 58,
  sym__celo = 59,
  sym__real = 60,
  sym_ime = 61,
  sym_niz = 62,
  sym_komentar = 63,
  sym_source_file = 64,
  aux_sym__zaporedje = 65,
  sym__stavek = 66,
  sym_inicializacija = 67,
  sym_prirejanje = 68,
  sym_kombinirano_prirejanje = 69,
  sym_okvir = 70,
  sym_pogojni_stavek = 71,
  sym_pogoj = 72,
  sym_zanka_dokler = 73,
  sym_funkcija = 74,
  sym_parametri = 75,
  sym_parameter = 76,
  sym_vrni = 77,
  sym_funkcijski_klic = 78,
  sym_makro_klic = 79,
  sym_argumenti = 80,
  sym__izraz = 81,
  sym__unarni_izraz = 82,
  sym__binarni_izraz = 83,
  sym__osnovni = 84,
  sym_tip = 85,
  sym_velikost = 86,
  sym_prireditveni_op = 87,
  sym_stevilo = 88,
  aux_sym_source_file_repeat1 = 89,
  aux_sym_parametri_repeat1 = 90,
  aux_sym_argumenti_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_AMP] = "&",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_resnica] = "resnica",
  [anon_sym_la] = "laž",
  [anon_sym_AT] = "@",
  [anon_sym_brez] = "brez",
  [anon_sym_bool] = "bool",
  [anon_sym_celo] = "celo",
  [anon_sym_real] = "real",
  [anon_sym_znak] = "znak",
  [anon_sym_LBRACK] = "[",
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
  [sym_komentar] = "komentar",
  [sym_source_file] = "source_file",
  [aux_sym__zaporedje] = "_zaporedje",
  [sym__stavek] = "_stavek",
  [sym_inicializacija] = "inicializacija",
  [sym_prirejanje] = "prirejanje",
  [sym_kombinirano_prirejanje] = "kombinirano_prirejanje",
  [sym_okvir] = "okvir",
  [sym_pogojni_stavek] = "pogojni_stavek",
  [sym_pogoj] = "pogoj",
  [sym_zanka_dokler] = "zanka_dokler",
  [sym_funkcija] = "funkcija",
  [sym_parametri] = "parametri",
  [sym_parameter] = "parameter",
  [sym_vrni] = "vrni",
  [sym_funkcijski_klic] = "funkcijski_klic",
  [sym_makro_klic] = "makro_klic",
  [sym_argumenti] = "argumenti",
  [sym__izraz] = "_izraz",
  [sym__unarni_izraz] = "_unarni_izraz",
  [sym__binarni_izraz] = "_binarni_izraz",
  [sym__osnovni] = "_osnovni",
  [sym_tip] = "tip",
  [sym_velikost] = "velikost",
  [sym_prireditveni_op] = "prireditveni_op",
  [sym_stevilo] = "stevilo",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parametri_repeat1] = "parametri_repeat1",
  [aux_sym_argumenti_repeat1] = "argumenti_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_resnica] = anon_sym_resnica,
  [anon_sym_la] = anon_sym_la,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_brez] = anon_sym_brez,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_celo] = anon_sym_celo,
  [anon_sym_real] = anon_sym_real,
  [anon_sym_znak] = anon_sym_znak,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
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
  [sym_komentar] = sym_komentar,
  [sym_source_file] = sym_source_file,
  [aux_sym__zaporedje] = aux_sym__zaporedje,
  [sym__stavek] = sym__stavek,
  [sym_inicializacija] = sym_inicializacija,
  [sym_prirejanje] = sym_prirejanje,
  [sym_kombinirano_prirejanje] = sym_kombinirano_prirejanje,
  [sym_okvir] = sym_okvir,
  [sym_pogojni_stavek] = sym_pogojni_stavek,
  [sym_pogoj] = sym_pogoj,
  [sym_zanka_dokler] = sym_zanka_dokler,
  [sym_funkcija] = sym_funkcija,
  [sym_parametri] = sym_parametri,
  [sym_parameter] = sym_parameter,
  [sym_vrni] = sym_vrni,
  [sym_funkcijski_klic] = sym_funkcijski_klic,
  [sym_makro_klic] = sym_makro_klic,
  [sym_argumenti] = sym_argumenti,
  [sym__izraz] = sym__izraz,
  [sym__unarni_izraz] = sym__unarni_izraz,
  [sym__binarni_izraz] = sym__binarni_izraz,
  [sym__osnovni] = sym__osnovni,
  [sym_tip] = sym_tip,
  [sym_velikost] = sym_velikost,
  [sym_prireditveni_op] = sym_prireditveni_op,
  [sym_stevilo] = sym_stevilo,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
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
  [anon_sym_PLUS] = {
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
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_resnica] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_la] = {
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
  [sym_kombinirano_prirejanje] = {
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
  [sym_pogoj] = {
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
  [sym__unarni_izraz] = {
    .visible = false,
    .named = true,
  },
  [sym__binarni_izraz] = {
    .visible = false,
    .named = true,
  },
  [sym__osnovni] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_telo, 2},
  [1] =
    {field_funkcija, 0},
  [2] =
    {field_vrni, 5},
  [3] =
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
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
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
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 41,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 42,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '&') ADVANCE(80);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(95);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == ':') ADVANCE(65);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(91);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == ']') ADVANCE(118);
      if (lookahead == '^') ADVANCE(79);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'z') ADVANCE(172);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(76);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == 269) ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (sym_ime_character_set_1(lookahead)) ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (sym_ime_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(15);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(63);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '|') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '@') ADVANCE(106);
      if (lookahead == '[') ADVANCE(117);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'z') ADVANCE(33);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == 269) ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
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
      if (lookahead == 'e') ADVANCE(55);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(100);
      if (lookahead == '&') ADVANCE(81);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(97);
      if (lookahead == '+') ADVANCE(94);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(98);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(89);
      if (lookahead == '^') ADVANCE(78);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(77);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == 269) ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(67);
      if (lookahead == '#') ADVANCE(185);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ';') ADVANCE(49);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == 269) ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(47)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_naj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_e);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ene);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_dokler);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_funkcija);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_vrni);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(87);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '|') ADVANCE(73);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(72);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(75);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(74);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(103);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_resnica);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_la);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_brez);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_brez);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_celo);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_celo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_znak);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_znak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR_STAR_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE_EQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_AMP_AMP_EQ);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__celo);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__real);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'c') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'j') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'k') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'n') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 'z') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_ime);
      if (lookahead == 382) ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_ime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_niz);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_komentar);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(185);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
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
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 47},
  [42] = {.lex_state = 47},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 21},
  [58] = {.lex_state = 21},
  [59] = {.lex_state = 21},
  [60] = {.lex_state = 21},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 21},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 47},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 47},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_resnica] = ACTIONS(1),
    [anon_sym_la] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_brez] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_celo] = ACTIONS(1),
    [anon_sym_real] = ACTIONS(1),
    [anon_sym_znak] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
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
    [sym_komentar] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(87),
    [sym__stavek] = STATE(15),
    [sym_inicializacija] = STATE(43),
    [sym_prirejanje] = STATE(43),
    [sym_kombinirano_prirejanje] = STATE(43),
    [sym_okvir] = STATE(43),
    [sym_pogojni_stavek] = STATE(43),
    [sym_zanka_dokler] = STATE(43),
    [sym_funkcija] = STATE(43),
    [sym_vrni] = STATE(43),
    [sym_funkcijski_klic] = STATE(43),
    [sym_makro_klic] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(15),
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
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(21), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [40] = 2,
    ACTIONS(29), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(27), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [77] = 2,
    ACTIONS(33), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(31), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [114] = 4,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(37), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_komentar,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [155] = 2,
    ACTIONS(45), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(43), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [192] = 2,
    ACTIONS(49), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(47), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [229] = 2,
    ACTIONS(53), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(51), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [266] = 2,
    ACTIONS(57), 11,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
      sym_ime,
    ACTIONS(55), 21,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      sym_komentar,
  [303] = 4,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(61), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [342] = 4,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(65), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [381] = 4,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(69), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [420] = 4,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(73), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [459] = 11,
    ACTIONS(75), 1,
      anon_sym_naj,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      anon_sym_e,
    ACTIONS(86), 1,
      anon_sym_dokler,
    ACTIONS(89), 1,
      anon_sym_funkcija,
    ACTIONS(92), 1,
      anon_sym_vrni,
    ACTIONS(95), 1,
      sym_ime,
    ACTIONS(98), 1,
      sym_komentar,
    STATE(14), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [503] = 11,
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
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym__stavek,
      aux_sym_source_file_repeat1,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [547] = 11,
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
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [591] = 11,
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
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [635] = 4,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [665] = 4,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [695] = 11,
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
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [739] = 11,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_naj,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(123), 1,
      anon_sym_e,
    ACTIONS(126), 1,
      anon_sym_dokler,
    ACTIONS(129), 1,
      anon_sym_funkcija,
    ACTIONS(132), 1,
      anon_sym_vrni,
    ACTIONS(135), 1,
      sym_ime,
    ACTIONS(138), 1,
      sym_komentar,
    STATE(21), 2,
      sym__stavek,
      aux_sym_source_file_repeat1,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [783] = 11,
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
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      aux_sym__zaporedje,
      sym__stavek,
    STATE(43), 10,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_vrni,
      sym_funkcijski_klic,
      sym_makro_klic,
  [827] = 3,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [854] = 3,
    ACTIONS(145), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [881] = 3,
    ACTIONS(109), 1,
      anon_sym_COMMA,
    ACTIONS(41), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(39), 14,
      anon_sym_DASH,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
  [908] = 13,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(165), 1,
      sym_niz,
    STATE(30), 1,
      aux_sym_argumenti_repeat1,
    STATE(83), 1,
      sym_argumenti,
    ACTIONS(155), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(19), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [954] = 13,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(165), 1,
      sym_niz,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_argumenti_repeat1,
    STATE(93), 1,
      sym_argumenti,
    ACTIONS(155), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(19), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1000] = 11,
    ACTIONS(169), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_BANG,
    ACTIONS(175), 1,
      anon_sym_DASH,
    ACTIONS(181), 1,
      anon_sym_AT,
    ACTIONS(184), 1,
      sym__celo,
    ACTIONS(187), 1,
      sym__real,
    ACTIONS(190), 1,
      sym_ime,
    ACTIONS(193), 1,
      sym_niz,
    STATE(28), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(178), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(25), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1040] = 5,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(196), 1,
      anon_sym_EQ,
    ACTIONS(198), 1,
      anon_sym_BANG,
    STATE(39), 1,
      sym_prireditveni_op,
    ACTIONS(200), 13,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_STAR_STAR_EQ,
      anon_sym_PIPE_PIPE_EQ,
      anon_sym_AMP_AMP_EQ,
      anon_sym_LT_LT_EQ,
      anon_sym_GT_GT_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_CARET_EQ,
      anon_sym_AMP_EQ,
  [1068] = 11,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(204), 1,
      sym_niz,
    STATE(28), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(202), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(18), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1108] = 11,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(208), 1,
      sym_niz,
    STATE(77), 1,
      sym_pogoj,
    ACTIONS(206), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(24), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1148] = 11,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(208), 1,
      sym_niz,
    STATE(76), 1,
      sym_pogoj,
    ACTIONS(206), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(24), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1188] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(212), 1,
      sym_niz,
    ACTIONS(210), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(11), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1225] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(216), 1,
      sym_niz,
    ACTIONS(214), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(5), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1262] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(220), 1,
      sym_niz,
    ACTIONS(218), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(13), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1299] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(224), 1,
      sym_niz,
    ACTIONS(222), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(23), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1336] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(228), 1,
      sym_niz,
    ACTIONS(226), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(9), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1373] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(232), 1,
      sym_niz,
    ACTIONS(230), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(10), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1410] = 10,
    ACTIONS(147), 1,
      anon_sym_LPAREN,
    ACTIONS(151), 1,
      anon_sym_BANG,
    ACTIONS(153), 1,
      anon_sym_DASH,
    ACTIONS(157), 1,
      anon_sym_AT,
    ACTIONS(159), 1,
      sym__celo,
    ACTIONS(161), 1,
      sym__real,
    ACTIONS(163), 1,
      sym_ime,
    ACTIONS(236), 1,
      sym_niz,
    ACTIONS(234), 2,
      anon_sym_resnica,
      anon_sym_la,
    STATE(12), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym_stevilo,
  [1447] = 3,
    ACTIONS(242), 1,
      anon_sym_ene,
    ACTIONS(238), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(240), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1466] = 2,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(246), 7,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1483] = 2,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(250), 7,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1500] = 3,
    ACTIONS(254), 1,
      anon_sym_SEMI,
    ACTIONS(252), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(256), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1518] = 2,
    ACTIONS(258), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(260), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1534] = 2,
    ACTIONS(244), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(246), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1550] = 2,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(264), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1566] = 2,
    ACTIONS(266), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(268), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1582] = 2,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(272), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1598] = 2,
    ACTIONS(274), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(276), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1614] = 2,
    ACTIONS(278), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(280), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1630] = 2,
    ACTIONS(282), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(284), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1646] = 2,
    ACTIONS(248), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(250), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1662] = 2,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(288), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1678] = 2,
    ACTIONS(290), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_komentar,
    ACTIONS(292), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1693] = 2,
    ACTIONS(294), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(296), 5,
      anon_sym_DASH,
      anon_sym_resnica,
      anon_sym_la,
      sym__celo,
      sym_ime,
  [1708] = 2,
    ACTIONS(298), 5,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_AT,
      sym__real,
      sym_niz,
    ACTIONS(300), 5,
      anon_sym_DASH,
      anon_sym_resnica,
      anon_sym_la,
      sym__celo,
      sym_ime,
  [1723] = 5,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_tip,
    ACTIONS(306), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1743] = 5,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym_tip,
    ACTIONS(306), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1763] = 5,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(62), 1,
      sym_tip,
    ACTIONS(306), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1783] = 5,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_tip,
    ACTIONS(306), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1803] = 5,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    ACTIONS(304), 1,
      anon_sym_AT,
    ACTIONS(308), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym_tip,
    ACTIONS(306), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1823] = 1,
    ACTIONS(310), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1831] = 1,
    ACTIONS(312), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1839] = 1,
    ACTIONS(314), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1847] = 1,
    ACTIONS(316), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1855] = 5,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    ACTIONS(320), 1,
      sym_ime,
    STATE(73), 1,
      sym_parameter,
    STATE(75), 1,
      aux_sym_parametri_repeat1,
    STATE(96), 1,
      sym_parametri,
  [1871] = 5,
    ACTIONS(320), 1,
      sym_ime,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_parameter,
    STATE(75), 1,
      aux_sym_parametri_repeat1,
    STATE(81), 1,
      sym_parametri,
  [1887] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(324), 1,
      anon_sym_e,
    STATE(53), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [1898] = 1,
    ACTIONS(326), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1904] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 1,
      anon_sym_DASH_GT,
    STATE(48), 1,
      sym_okvir,
  [1914] = 2,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(330), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1922] = 3,
    ACTIONS(334), 1,
      sym_ime,
    STATE(72), 1,
      aux_sym_parametri_repeat1,
    STATE(82), 1,
      sym_parameter,
  [1932] = 2,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(337), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1940] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(339), 1,
      anon_sym_DASH_GT,
    STATE(51), 1,
      sym_okvir,
  [1950] = 3,
    ACTIONS(320), 1,
      sym_ime,
    STATE(71), 1,
      sym_parameter,
    STATE(72), 1,
      aux_sym_parametri_repeat1,
  [1960] = 2,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_okvir,
  [1967] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_okvir,
  [1974] = 2,
    ACTIONS(343), 1,
      sym__celo,
    STATE(92), 1,
      sym_velikost,
  [1981] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_okvir,
  [1988] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym_okvir,
  [1995] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1999] = 1,
    ACTIONS(332), 1,
      anon_sym_COMMA,
  [2003] = 1,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [2007] = 1,
    ACTIONS(349), 1,
      sym_ime,
  [2011] = 1,
    ACTIONS(351), 1,
      anon_sym_SEMI,
  [2015] = 1,
    ACTIONS(353), 1,
      sym_ime,
  [2019] = 1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [2023] = 1,
    ACTIONS(357), 1,
      sym_ime,
  [2027] = 1,
    ACTIONS(359), 1,
      anon_sym_EQ,
  [2031] = 1,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
  [2035] = 1,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
  [2039] = 1,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
  [2043] = 1,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
  [2047] = 1,
    ACTIONS(369), 1,
      anon_sym_LPAREN,
  [2051] = 1,
    ACTIONS(371), 1,
      anon_sym_COLON,
  [2055] = 1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [2059] = 1,
    ACTIONS(375), 1,
      sym_ime,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 381,
  [SMALL_STATE(13)] = 420,
  [SMALL_STATE(14)] = 459,
  [SMALL_STATE(15)] = 503,
  [SMALL_STATE(16)] = 547,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 665,
  [SMALL_STATE(20)] = 695,
  [SMALL_STATE(21)] = 739,
  [SMALL_STATE(22)] = 783,
  [SMALL_STATE(23)] = 827,
  [SMALL_STATE(24)] = 854,
  [SMALL_STATE(25)] = 881,
  [SMALL_STATE(26)] = 908,
  [SMALL_STATE(27)] = 954,
  [SMALL_STATE(28)] = 1000,
  [SMALL_STATE(29)] = 1040,
  [SMALL_STATE(30)] = 1068,
  [SMALL_STATE(31)] = 1108,
  [SMALL_STATE(32)] = 1148,
  [SMALL_STATE(33)] = 1188,
  [SMALL_STATE(34)] = 1225,
  [SMALL_STATE(35)] = 1262,
  [SMALL_STATE(36)] = 1299,
  [SMALL_STATE(37)] = 1336,
  [SMALL_STATE(38)] = 1373,
  [SMALL_STATE(39)] = 1410,
  [SMALL_STATE(40)] = 1447,
  [SMALL_STATE(41)] = 1466,
  [SMALL_STATE(42)] = 1483,
  [SMALL_STATE(43)] = 1500,
  [SMALL_STATE(44)] = 1518,
  [SMALL_STATE(45)] = 1534,
  [SMALL_STATE(46)] = 1550,
  [SMALL_STATE(47)] = 1566,
  [SMALL_STATE(48)] = 1582,
  [SMALL_STATE(49)] = 1598,
  [SMALL_STATE(50)] = 1614,
  [SMALL_STATE(51)] = 1630,
  [SMALL_STATE(52)] = 1646,
  [SMALL_STATE(53)] = 1662,
  [SMALL_STATE(54)] = 1678,
  [SMALL_STATE(55)] = 1693,
  [SMALL_STATE(56)] = 1708,
  [SMALL_STATE(57)] = 1723,
  [SMALL_STATE(58)] = 1743,
  [SMALL_STATE(59)] = 1763,
  [SMALL_STATE(60)] = 1783,
  [SMALL_STATE(61)] = 1803,
  [SMALL_STATE(62)] = 1823,
  [SMALL_STATE(63)] = 1831,
  [SMALL_STATE(64)] = 1839,
  [SMALL_STATE(65)] = 1847,
  [SMALL_STATE(66)] = 1855,
  [SMALL_STATE(67)] = 1871,
  [SMALL_STATE(68)] = 1887,
  [SMALL_STATE(69)] = 1898,
  [SMALL_STATE(70)] = 1904,
  [SMALL_STATE(71)] = 1914,
  [SMALL_STATE(72)] = 1922,
  [SMALL_STATE(73)] = 1932,
  [SMALL_STATE(74)] = 1940,
  [SMALL_STATE(75)] = 1950,
  [SMALL_STATE(76)] = 1960,
  [SMALL_STATE(77)] = 1967,
  [SMALL_STATE(78)] = 1974,
  [SMALL_STATE(79)] = 1981,
  [SMALL_STATE(80)] = 1988,
  [SMALL_STATE(81)] = 1995,
  [SMALL_STATE(82)] = 1999,
  [SMALL_STATE(83)] = 2003,
  [SMALL_STATE(84)] = 2007,
  [SMALL_STATE(85)] = 2011,
  [SMALL_STATE(86)] = 2015,
  [SMALL_STATE(87)] = 2019,
  [SMALL_STATE(88)] = 2023,
  [SMALL_STATE(89)] = 2027,
  [SMALL_STATE(90)] = 2031,
  [SMALL_STATE(91)] = 2035,
  [SMALL_STATE(92)] = 2039,
  [SMALL_STATE(93)] = 2043,
  [SMALL_STATE(94)] = 2047,
  [SMALL_STATE(95)] = 2051,
  [SMALL_STATE(96)] = 2055,
  [SMALL_STATE(97)] = 2059,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni, 1),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 3, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unarni_izraz, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unarni_izraz, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stevilo, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stevilo, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 4, .production_id = 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binarni_izraz, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binarni_izraz, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inicializacija, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inicializacija, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kombinirano_prirejanje, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kombinirano_prirejanje, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrni, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrni, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(86),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(32),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(31),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(97),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(35),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(29),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__zaporedje, 2), SHIFT_REPEAT(43),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogoj, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(36),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(34),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(34),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(25),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(88),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(6),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(6),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(25),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 3, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 8, .production_id = 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 8, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_dokler, 3, .production_id = 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_klic, 4, .production_id = 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_klic, 4, .production_id = 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 6),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 7, .production_id = 3),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 7, .production_id = 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_klic, 5, .production_id = 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_klic, 5, .production_id = 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 5),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 5, .production_id = 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stavek, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__stavek, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prireditveni_op, 1),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prireditveni_op, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [334] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2), SHIFT_REPEAT(95),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [355] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_velikost, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
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
