#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 95
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 89
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BANG = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_naj = 4,
  anon_sym_EQ = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_e = 8,
  anon_sym_ene = 9,
  anon_sym_dokler = 10,
  anon_sym_funkcija = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_vrni = 13,
  anon_sym_COMMA = 14,
  anon_sym_DASH = 15,
  anon_sym_PIPE_PIPE = 16,
  anon_sym_AMP_AMP = 17,
  anon_sym_PIPE = 18,
  anon_sym_CARET = 19,
  anon_sym_AMP = 20,
  anon_sym_LT_LT = 21,
  anon_sym_GT_GT = 22,
  anon_sym_EQ_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_LT = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_PLUS = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_STAR_STAR = 33,
  anon_sym_resnica = 34,
  anon_sym_la = 35,
  anon_sym_AT = 36,
  anon_sym_brez = 37,
  anon_sym_bool = 38,
  anon_sym_celo = 39,
  anon_sym_real = 40,
  anon_sym_znak = 41,
  anon_sym_LBRACK = 42,
  anon_sym_SEMI = 43,
  anon_sym_RBRACK = 44,
  anon_sym_COLON = 45,
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
  sym_celo = 59,
  sym_real = 60,
  sym_ime = 61,
  sym_niz = 62,
  sym_source_file = 63,
  sym_zaporedje = 64,
  sym__stavek = 65,
  sym_makro_funkcija = 66,
  sym_inicializacija = 67,
  sym_prirejanje = 68,
  sym_kombinirano_prirejanje = 69,
  sym_okvir = 70,
  sym_pogojni_stavek = 71,
  sym_zanka_dokler = 72,
  sym_funkcija = 73,
  sym_funkcijski_klic = 74,
  sym_vrni = 75,
  sym_pogoj = 76,
  sym_argumenti = 77,
  sym__izraz = 78,
  sym__unarni_izraz = 79,
  sym__binarni_izraz = 80,
  sym__osnovni = 81,
  sym_tip = 82,
  sym_parametri = 83,
  sym_prireditveni_op = 84,
  sym__tevilo = 85,
  aux_sym_source_file_repeat1 = 86,
  aux_sym_argumenti_repeat1 = 87,
  aux_sym_parametri_repeat1 = 88,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_naj] = "naj",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_e] = "če",
  [anon_sym_ene] = "čene",
  [anon_sym_dokler] = "dokler",
  [anon_sym_funkcija] = "funkcija",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_vrni] = "vrni",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
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
  [sym_celo] = "celo",
  [sym_real] = "real",
  [sym_ime] = "ime",
  [sym_niz] = "niz",
  [sym_source_file] = "source_file",
  [sym_zaporedje] = "zaporedje",
  [sym__stavek] = "_stavek",
  [sym_makro_funkcija] = "makro_funkcija",
  [sym_inicializacija] = "inicializacija",
  [sym_prirejanje] = "prirejanje",
  [sym_kombinirano_prirejanje] = "kombinirano_prirejanje",
  [sym_okvir] = "okvir",
  [sym_pogojni_stavek] = "pogojni_stavek",
  [sym_zanka_dokler] = "zanka_dokler",
  [sym_funkcija] = "funkcija",
  [sym_funkcijski_klic] = "funkcijski_klic",
  [sym_vrni] = "vrni",
  [sym_pogoj] = "pogoj",
  [sym_argumenti] = "argumenti",
  [sym__izraz] = "_izraz",
  [sym__unarni_izraz] = "_unarni_izraz",
  [sym__binarni_izraz] = "_binarni_izraz",
  [sym__osnovni] = "_osnovni",
  [sym_tip] = "tip",
  [sym_parametri] = "parametri",
  [sym_prireditveni_op] = "prireditveni_op",
  [sym__tevilo] = "_število",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_argumenti_repeat1] = "argumenti_repeat1",
  [aux_sym_parametri_repeat1] = "parametri_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_naj] = anon_sym_naj,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_e] = anon_sym_e,
  [anon_sym_ene] = anon_sym_ene,
  [anon_sym_dokler] = anon_sym_dokler,
  [anon_sym_funkcija] = anon_sym_funkcija,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_vrni] = anon_sym_vrni,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_celo] = sym_celo,
  [sym_real] = sym_real,
  [sym_ime] = sym_ime,
  [sym_niz] = sym_niz,
  [sym_source_file] = sym_source_file,
  [sym_zaporedje] = sym_zaporedje,
  [sym__stavek] = sym__stavek,
  [sym_makro_funkcija] = sym_makro_funkcija,
  [sym_inicializacija] = sym_inicializacija,
  [sym_prirejanje] = sym_prirejanje,
  [sym_kombinirano_prirejanje] = sym_kombinirano_prirejanje,
  [sym_okvir] = sym_okvir,
  [sym_pogojni_stavek] = sym_pogojni_stavek,
  [sym_zanka_dokler] = sym_zanka_dokler,
  [sym_funkcija] = sym_funkcija,
  [sym_funkcijski_klic] = sym_funkcijski_klic,
  [sym_vrni] = sym_vrni,
  [sym_pogoj] = sym_pogoj,
  [sym_argumenti] = sym_argumenti,
  [sym__izraz] = sym__izraz,
  [sym__unarni_izraz] = sym__unarni_izraz,
  [sym__binarni_izraz] = sym__binarni_izraz,
  [sym__osnovni] = sym__osnovni,
  [sym_tip] = sym_tip,
  [sym_parametri] = sym_parametri,
  [sym_prireditveni_op] = sym_prireditveni_op,
  [sym__tevilo] = sym__tevilo,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_argumenti_repeat1] = aux_sym_argumenti_repeat1,
  [aux_sym_parametri_repeat1] = aux_sym_parametri_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrni] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_celo] = {
    .visible = true,
    .named = true,
  },
  [sym_real] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_zaporedje] = {
    .visible = true,
    .named = true,
  },
  [sym__stavek] = {
    .visible = false,
    .named = true,
  },
  [sym_makro_funkcija] = {
    .visible = true,
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
  [sym_zanka_dokler] = {
    .visible = true,
    .named = true,
  },
  [sym_funkcija] = {
    .visible = true,
    .named = true,
  },
  [sym_funkcijski_klic] = {
    .visible = true,
    .named = true,
  },
  [sym_vrni] = {
    .visible = true,
    .named = true,
  },
  [sym_pogoj] = {
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
  [sym_parametri] = {
    .visible = true,
    .named = true,
  },
  [sym_prireditveni_op] = {
    .visible = true,
    .named = true,
  },
  [sym__tevilo] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argumenti_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parametri_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [22] = 17,
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
  [45] = 45,
  [46] = 46,
  [47] = 37,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
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
  [93] = 92,
  [94] = 94,
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
      if (lookahead == '!') ADVANCE(50);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '%') ADVANCE(99);
      if (lookahead == '&') ADVANCE(78);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == ':') ADVANCE(118);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(86);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '^') ADVANCE(77);
      if (lookahead == 'b') ADVANCE(175);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == 'z') ADVANCE(172);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == 269) ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (sym_ime_character_set_1(lookahead)) ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '@') ADVANCE(104);
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
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '}') ADVANCE(57);
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
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(84);
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
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 'z') ADVANCE(33);
      if (lookahead == '{') ADVANCE(56);
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
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'k') ADVANCE(113);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(111);
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
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'z') ADVANCE(105);
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
      if (lookahead == '%') ADVANCE(98);
      if (lookahead == '&') ADVANCE(79);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '+') ADVANCE(92);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == '^') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '|') ADVANCE(75);
      if (lookahead == '}') ADVANCE(57);
      if (lookahead == 269) ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (sym_ime_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '%') ADVANCE(8);
      if (lookahead == '&') ADVANCE(3);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '<') ADVANCE(6);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(20);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(173);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(142);
      if (lookahead == 'v') ADVANCE(178);
      if (lookahead == '{') ADVANCE(56);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == '}') ADVANCE(57);
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
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_naj);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_e);
      END_STATE();
    case 59:
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
    case 60:
      ACCEPT_TOKEN(anon_sym_e);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ene);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_dokler);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_funkcija);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_vrni);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(120);
      if (lookahead == '>') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      if (lookahead == '=') ADVANCE(125);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      if (lookahead == '=') ADVANCE(126);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '|') ADVANCE(71);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(73);
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(72);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=') ADVANCE(127);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=') ADVANCE(128);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(83);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(81);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(80);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(101);
      if (lookahead == '=') ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(100);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      if (lookahead == '=') ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_resnica);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_la);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_brez);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_brez);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_celo);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_celo);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_real);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_real);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_znak);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_znak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 269 ||
          lookahead == 353 ||
          lookahead == 382) ADVANCE(183);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_COLON);
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
      ACCEPT_TOKEN(sym_celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_celo);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_celo);
      if (lookahead == '.') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_celo);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '_') ADVANCE(44);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_real);
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_real);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_real);
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
      if (lookahead == 'a') ADVANCE(102);
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
      if (lookahead == 'a') ADVANCE(63);
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
      if (lookahead == 'e') ADVANCE(59);
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
      if (lookahead == 'e') ADVANCE(61);
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
      if (lookahead == 'e') ADVANCE(60);
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
      if (lookahead == 'i') ADVANCE(65);
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
      if (lookahead == 'j') ADVANCE(53);
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
      if (lookahead == 'k') ADVANCE(114);
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
      if (lookahead == 'l') ADVANCE(108);
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
      if (lookahead == 'l') ADVANCE(112);
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
      if (lookahead == 'o') ADVANCE(110);
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
      if (lookahead == 'r') ADVANCE(62);
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
      if (lookahead == 'z') ADVANCE(106);
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
      if (lookahead == 382) ADVANCE(103);
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
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 47},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 47},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 21},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 21},
  [52] = {.lex_state = 21},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 21},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 21},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 47},
  [66] = {.lex_state = 47},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_naj] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_e] = ACTIONS(1),
    [anon_sym_ene] = ACTIONS(1),
    [anon_sym_dokler] = ACTIONS(1),
    [anon_sym_funkcija] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_vrni] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_celo] = ACTIONS(1),
    [sym_real] = ACTIONS(1),
    [sym_ime] = ACTIONS(1),
    [sym_niz] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(76),
    [sym__stavek] = STATE(18),
    [sym_makro_funkcija] = STATE(18),
    [sym_inicializacija] = STATE(18),
    [sym_prirejanje] = STATE(18),
    [sym_kombinirano_prirejanje] = STATE(18),
    [sym_okvir] = STATE(18),
    [sym_pogojni_stavek] = STATE(18),
    [sym_zanka_dokler] = STATE(18),
    [sym_funkcija] = STATE(18),
    [sym_funkcijski_klic] = STATE(18),
    [sym_vrni] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_naj] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_e] = ACTIONS(9),
    [anon_sym_dokler] = ACTIONS(11),
    [anon_sym_funkcija] = ACTIONS(13),
    [anon_sym_vrni] = ACTIONS(15),
    [sym_ime] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(21), 1,
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
    ACTIONS(19), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [38] = 2,
    ACTIONS(27), 11,
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
    ACTIONS(25), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [73] = 4,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(31), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(33), 14,
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
  [112] = 2,
    ACTIONS(39), 11,
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
    ACTIONS(37), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [147] = 2,
    ACTIONS(43), 11,
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
    ACTIONS(41), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [182] = 2,
    ACTIONS(47), 11,
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
    ACTIONS(45), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [217] = 2,
    ACTIONS(51), 11,
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
    ACTIONS(49), 19,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
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
  [252] = 4,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(55), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(33), 14,
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
  [289] = 4,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(59), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(33), 14,
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
  [326] = 4,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(63), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(33), 14,
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
  [363] = 4,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(67), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
    ACTIONS(33), 14,
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
  [400] = 4,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(33), 14,
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
  [430] = 9,
    ACTIONS(75), 1,
      anon_sym_naj,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_e,
    ACTIONS(84), 1,
      anon_sym_dokler,
    ACTIONS(87), 1,
      anon_sym_funkcija,
    ACTIONS(90), 1,
      anon_sym_vrni,
    ACTIONS(93), 1,
      sym_ime,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(14), 12,
      sym__stavek,
      sym_makro_funkcija,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_funkcijski_klic,
      sym_vrni,
      aux_sym_source_file_repeat1,
  [470] = 4,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(33), 14,
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
  [500] = 9,
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
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(14), 12,
      sym__stavek,
      sym_makro_funkcija,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_funkcijski_klic,
      sym_vrni,
      aux_sym_source_file_repeat1,
  [539] = 9,
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
    STATE(93), 1,
      sym_zaporedje,
    STATE(16), 12,
      sym__stavek,
      sym_makro_funkcija,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_funkcijski_klic,
      sym_vrni,
      aux_sym_source_file_repeat1,
  [578] = 9,
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
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(14), 12,
      sym__stavek,
      sym_makro_funkcija,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_funkcijski_klic,
      sym_vrni,
      aux_sym_source_file_repeat1,
  [617] = 3,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(33), 14,
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
  [644] = 3,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(33), 14,
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
  [671] = 3,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(35), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_STAR,
    ACTIONS(33), 14,
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
  [698] = 9,
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
    STATE(92), 1,
      sym_zaporedje,
    STATE(16), 12,
      sym__stavek,
      sym_makro_funkcija,
      sym_inicializacija,
      sym_prirejanje,
      sym_kombinirano_prirejanje,
      sym_okvir,
      sym_pogojni_stavek,
      sym_zanka_dokler,
      sym_funkcija,
      sym_funkcijski_klic,
      sym_vrni,
      aux_sym_source_file_repeat1,
  [737] = 11,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    STATE(29), 1,
      aux_sym_argumenti_repeat1,
    STATE(88), 1,
      sym_argumenti,
    ACTIONS(118), 2,
      sym_real,
      sym_niz,
    ACTIONS(114), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(15), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [779] = 11,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      aux_sym_argumenti_repeat1,
    STATE(83), 1,
      sym_argumenti,
    ACTIONS(118), 2,
      sym_real,
      sym_niz,
    ACTIONS(114), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(15), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [821] = 9,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    STATE(72), 1,
      sym_pogoj,
    ACTIONS(126), 2,
      sym_real,
      sym_niz,
    ACTIONS(124), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(19), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [857] = 9,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    STATE(71), 1,
      sym_pogoj,
    ACTIONS(126), 2,
      sym_real,
      sym_niz,
    ACTIONS(124), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(19), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [893] = 5,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BANG,
    ACTIONS(130), 1,
      anon_sym_EQ,
    STATE(34), 1,
      sym_prireditveni_op,
    ACTIONS(132), 13,
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
  [921] = 9,
    ACTIONS(134), 1,
      anon_sym_BANG,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_AT,
    ACTIONS(152), 1,
      sym_ime,
    STATE(28), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(149), 2,
      sym_real,
      sym_niz,
    ACTIONS(143), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(21), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [957] = 9,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    STATE(28), 1,
      aux_sym_argumenti_repeat1,
    ACTIONS(157), 2,
      sym_real,
      sym_niz,
    ACTIONS(155), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(13), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [993] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(161), 2,
      sym_real,
      sym_niz,
    ACTIONS(159), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(6), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1026] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(165), 2,
      sym_real,
      sym_niz,
    ACTIONS(163), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(4), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1059] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(169), 2,
      sym_real,
      sym_niz,
    ACTIONS(167), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(20), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1092] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(173), 2,
      sym_real,
      sym_niz,
    ACTIONS(171), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(12), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1125] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(177), 2,
      sym_real,
      sym_niz,
    ACTIONS(175), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(9), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1158] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(181), 2,
      sym_real,
      sym_niz,
    ACTIONS(179), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(11), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1191] = 8,
    ACTIONS(106), 1,
      anon_sym_BANG,
    ACTIONS(108), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      anon_sym_AT,
    ACTIONS(120), 1,
      sym_ime,
    ACTIONS(185), 2,
      sym_real,
      sym_niz,
    ACTIONS(183), 3,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
    STATE(10), 6,
      sym_funkcijski_klic,
      sym__izraz,
      sym__unarni_izraz,
      sym__binarni_izraz,
      sym__osnovni,
      sym__tevilo,
  [1224] = 2,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(189), 7,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_ene,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1239] = 2,
    ACTIONS(191), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_real,
      sym_niz,
    ACTIONS(193), 5,
      anon_sym_DASH,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
      sym_ime,
  [1254] = 2,
    ACTIONS(195), 5,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_AT,
      sym_real,
      sym_niz,
    ACTIONS(197), 5,
      anon_sym_DASH,
      anon_sym_resnica,
      anon_sym_la,
      sym_celo,
      sym_ime,
  [1269] = 3,
    ACTIONS(203), 1,
      anon_sym_ene,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(201), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1286] = 2,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(207), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1300] = 2,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(211), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1314] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(80), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1334] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1354] = 2,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(223), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1368] = 2,
    ACTIONS(225), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(227), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1382] = 2,
    ACTIONS(187), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(189), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1396] = 2,
    ACTIONS(229), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(231), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1410] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1430] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1450] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1470] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1490] = 2,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(235), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1504] = 5,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_AT,
    ACTIONS(219), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_tip,
    ACTIONS(217), 5,
      anon_sym_brez,
      anon_sym_bool,
      anon_sym_celo,
      anon_sym_real,
      anon_sym_znak,
  [1524] = 2,
    ACTIONS(237), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(239), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1538] = 2,
    ACTIONS(241), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(243), 6,
      anon_sym_naj,
      anon_sym_e,
      anon_sym_dokler,
      anon_sym_funkcija,
      anon_sym_vrni,
      sym_ime,
  [1552] = 1,
    ACTIONS(245), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1560] = 1,
    ACTIONS(247), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1568] = 1,
    ACTIONS(249), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1576] = 1,
    ACTIONS(251), 5,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1584] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_e,
    STATE(41), 2,
      sym_okvir,
      sym_pogojni_stavek,
  [1595] = 4,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      sym_ime,
    STATE(68), 1,
      aux_sym_parametri_repeat1,
    STATE(84), 1,
      sym_parametri,
  [1608] = 4,
    ACTIONS(257), 1,
      sym_ime,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_parametri_repeat1,
    STATE(79), 1,
      sym_parametri,
  [1621] = 2,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(261), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1629] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    STATE(53), 1,
      sym_okvir,
  [1639] = 3,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_DASH_GT,
    STATE(45), 1,
      sym_okvir,
  [1649] = 2,
    ACTIONS(263), 1,
      anon_sym_COMMA,
    ACTIONS(269), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [1657] = 2,
    ACTIONS(271), 1,
      sym_ime,
    STATE(70), 1,
      aux_sym_parametri_repeat1,
  [1664] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_okvir,
  [1671] = 2,
    ACTIONS(273), 1,
      sym_ime,
    STATE(70), 1,
      aux_sym_parametri_repeat1,
  [1678] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_okvir,
  [1685] = 2,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_okvir,
  [1692] = 2,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_okvir,
  [1699] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [1703] = 1,
    ACTIONS(280), 1,
      anon_sym_LPAREN,
  [1707] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1711] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1715] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1719] = 1,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
  [1723] = 1,
    ACTIONS(290), 1,
      anon_sym_SEMI,
  [1727] = 1,
    ACTIONS(292), 1,
      sym_ime,
  [1731] = 1,
    ACTIONS(294), 1,
      sym_ime,
  [1735] = 1,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
  [1739] = 1,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
  [1743] = 1,
    ACTIONS(300), 1,
      sym_ime,
  [1747] = 1,
    ACTIONS(302), 1,
      sym_ime,
  [1751] = 1,
    ACTIONS(304), 1,
      sym_celo,
  [1755] = 1,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
  [1759] = 1,
    ACTIONS(263), 1,
      anon_sym_COMMA,
  [1763] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
  [1767] = 1,
    ACTIONS(310), 1,
      anon_sym_LPAREN,
  [1771] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
  [1775] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [1779] = 1,
    ACTIONS(316), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 73,
  [SMALL_STATE(5)] = 112,
  [SMALL_STATE(6)] = 147,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 217,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 326,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 400,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 470,
  [SMALL_STATE(16)] = 500,
  [SMALL_STATE(17)] = 539,
  [SMALL_STATE(18)] = 578,
  [SMALL_STATE(19)] = 617,
  [SMALL_STATE(20)] = 644,
  [SMALL_STATE(21)] = 671,
  [SMALL_STATE(22)] = 698,
  [SMALL_STATE(23)] = 737,
  [SMALL_STATE(24)] = 779,
  [SMALL_STATE(25)] = 821,
  [SMALL_STATE(26)] = 857,
  [SMALL_STATE(27)] = 893,
  [SMALL_STATE(28)] = 921,
  [SMALL_STATE(29)] = 957,
  [SMALL_STATE(30)] = 993,
  [SMALL_STATE(31)] = 1026,
  [SMALL_STATE(32)] = 1059,
  [SMALL_STATE(33)] = 1092,
  [SMALL_STATE(34)] = 1125,
  [SMALL_STATE(35)] = 1158,
  [SMALL_STATE(36)] = 1191,
  [SMALL_STATE(37)] = 1224,
  [SMALL_STATE(38)] = 1239,
  [SMALL_STATE(39)] = 1254,
  [SMALL_STATE(40)] = 1269,
  [SMALL_STATE(41)] = 1286,
  [SMALL_STATE(42)] = 1300,
  [SMALL_STATE(43)] = 1314,
  [SMALL_STATE(44)] = 1334,
  [SMALL_STATE(45)] = 1354,
  [SMALL_STATE(46)] = 1368,
  [SMALL_STATE(47)] = 1382,
  [SMALL_STATE(48)] = 1396,
  [SMALL_STATE(49)] = 1410,
  [SMALL_STATE(50)] = 1430,
  [SMALL_STATE(51)] = 1450,
  [SMALL_STATE(52)] = 1470,
  [SMALL_STATE(53)] = 1490,
  [SMALL_STATE(54)] = 1504,
  [SMALL_STATE(55)] = 1524,
  [SMALL_STATE(56)] = 1538,
  [SMALL_STATE(57)] = 1552,
  [SMALL_STATE(58)] = 1560,
  [SMALL_STATE(59)] = 1568,
  [SMALL_STATE(60)] = 1576,
  [SMALL_STATE(61)] = 1584,
  [SMALL_STATE(62)] = 1595,
  [SMALL_STATE(63)] = 1608,
  [SMALL_STATE(64)] = 1621,
  [SMALL_STATE(65)] = 1629,
  [SMALL_STATE(66)] = 1639,
  [SMALL_STATE(67)] = 1649,
  [SMALL_STATE(68)] = 1657,
  [SMALL_STATE(69)] = 1664,
  [SMALL_STATE(70)] = 1671,
  [SMALL_STATE(71)] = 1678,
  [SMALL_STATE(72)] = 1685,
  [SMALL_STATE(73)] = 1692,
  [SMALL_STATE(74)] = 1699,
  [SMALL_STATE(75)] = 1703,
  [SMALL_STATE(76)] = 1707,
  [SMALL_STATE(77)] = 1711,
  [SMALL_STATE(78)] = 1715,
  [SMALL_STATE(79)] = 1719,
  [SMALL_STATE(80)] = 1723,
  [SMALL_STATE(81)] = 1727,
  [SMALL_STATE(82)] = 1731,
  [SMALL_STATE(83)] = 1735,
  [SMALL_STATE(84)] = 1739,
  [SMALL_STATE(85)] = 1743,
  [SMALL_STATE(86)] = 1747,
  [SMALL_STATE(87)] = 1751,
  [SMALL_STATE(88)] = 1755,
  [SMALL_STATE(89)] = 1759,
  [SMALL_STATE(90)] = 1763,
  [SMALL_STATE(91)] = 1767,
  [SMALL_STATE(92)] = 1771,
  [SMALL_STATE(93)] = 1775,
  [SMALL_STATE(94)] = 1779,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unarni_izraz, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unarni_izraz, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binarni_izraz, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binarni_izraz, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcijski_klic, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcijski_klic, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__osnovni, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__osnovni, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kombinirano_prirejanje, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kombinirano_prirejanje, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vrni, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vrni, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inicializacija, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inicializacija, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prirejanje, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prirejanje, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argumenti, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zaporedje, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogoj, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(31),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(31),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(21),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(85),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(21),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2), SHIFT_REPEAT(2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_okvir, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_okvir, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argumenti_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prireditveni_op, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prireditveni_op, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pogojni_stavek, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pogojni_stavek, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_funkcija, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_funkcija, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 6),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 6),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 8),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_zanka_dokler, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_zanka_dokler, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 5),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funkcija, 7),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_funkcija, 7),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_makro_funkcija, 4),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_makro_funkcija, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 5),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tip, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametri, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 2), SHIFT_REPEAT(77),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parametri_repeat1, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
