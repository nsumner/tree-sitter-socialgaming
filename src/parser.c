#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 398
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 139
#define ALIAS_COUNT 0
#define TOKEN_COUNT 90
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 45
#define MAX_ALIAS_SEQUENCE_LENGTH 17
#define PRODUCTION_ID_COUNT 64

enum {
  anon_sym_configuration = 1,
  anon_sym_LBRACE = 2,
  anon_sym_name_COLON = 3,
  anon_sym_playerrange_COLON = 4,
  anon_sym_audience_COLON = 5,
  anon_sym_setup_COLON = 6,
  anon_sym_RBRACE = 7,
  anon_sym_kind_COLON = 8,
  anon_sym_boolean = 9,
  anon_sym_integer = 10,
  anon_sym_string = 11,
  anon_sym_enum = 12,
  anon_sym_question_DASHanswer = 13,
  anon_sym_multiple_DASHchoice = 14,
  anon_sym_json = 15,
  anon_sym_prompt_COLON = 16,
  anon_sym_range_COLON = 17,
  anon_sym_choices_COLON = 18,
  anon_sym_COMMA = 19,
  anon_sym_default_COLON = 20,
  anon_sym_COLON = 21,
  anon_sym_constants = 22,
  anon_sym_variables = 23,
  anon_sym_per_DASHplayer = 24,
  anon_sym_per_DASHaudience = 25,
  anon_sym_rules = 26,
  anon_sym_for = 27,
  anon_sym_in = 28,
  anon_sym_while = 29,
  anon_sym_parallelfor = 30,
  anon_sym_inparallel = 31,
  anon_sym_match = 32,
  anon_sym_EQ_GT = 33,
  anon_sym_extend = 34,
  anon_sym_with = 35,
  anon_sym_SEMI = 36,
  anon_sym_reverse = 37,
  anon_sym_shuffle = 38,
  anon_sym_sort = 39,
  anon_sym_by = 40,
  anon_sym_deal = 41,
  anon_sym_to = 42,
  anon_sym_from = 43,
  anon_sym_discard = 44,
  anon_sym_LT_DASH = 45,
  anon_sym_time = 46,
  anon_sym_atmost = 47,
  anon_sym_exactly = 48,
  anon_sym_inputchoice = 49,
  anon_sym_target_COLON = 50,
  anon_sym_timeout_COLON = 51,
  anon_sym_inputtext = 52,
  anon_sym_inputrange = 53,
  anon_sym_low_COLON = 54,
  anon_sym_high_COLON = 55,
  anon_sym_inputvote = 56,
  anon_sym_anonymously = 57,
  anon_sym_message = 58,
  anon_sym_scores = 59,
  anon_sym_LPAREN = 60,
  anon_sym_RPAREN = 61,
  anon_sym_PIPE_PIPE = 62,
  anon_sym_AMP_AMP = 63,
  anon_sym_EQ = 64,
  anon_sym_BANG_EQ = 65,
  anon_sym_LT = 66,
  anon_sym_LT_EQ = 67,
  anon_sym_GT = 68,
  anon_sym_GT_EQ = 69,
  anon_sym_PLUS = 70,
  anon_sym_DASH = 71,
  anon_sym_STAR = 72,
  anon_sym_SLASH = 73,
  anon_sym_PERCENT = 74,
  anon_sym_BANG = 75,
  anon_sym_DOT = 76,
  anon_sym_upfrom = 77,
  anon_sym_size = 78,
  anon_sym_contains = 79,
  anon_sym_collect = 80,
  sym_number = 81,
  anon_sym_true = 82,
  anon_sym_false = 83,
  sym_quoted_string = 84,
  sym_identifier = 85,
  anon_sym_LBRACK = 86,
  anon_sym_RBRACK = 87,
  anon_sym_all = 88,
  sym_comment = 89,
  sym_game = 90,
  sym_configuration = 91,
  sym_setup_rule = 92,
  sym_enum_description = 93,
  sym_constants = 94,
  sym_variables = 95,
  sym_per_player = 96,
  sym_per_audience = 97,
  sym_rules = 98,
  sym_rule = 99,
  sym_for = 100,
  sym_loop = 101,
  sym_parallel_for = 102,
  sym_in_parallel = 103,
  sym_match = 104,
  sym_match_entry = 105,
  sym_extend = 106,
  sym_reverse = 107,
  sym_shuffle = 108,
  sym_sort = 109,
  sym_deal = 110,
  sym_discard = 111,
  sym_assignment = 112,
  sym_timer = 113,
  sym_input_choice = 114,
  sym_input_text = 115,
  sym_input_range = 116,
  sym_input_vote = 117,
  sym_message = 118,
  sym_scores = 119,
  sym_expression = 120,
  sym_builtin = 121,
  sym_argument_list = 122,
  sym_boolean = 123,
  sym_number_range = 124,
  sym_expression_list = 125,
  sym_list_literal = 126,
  sym_map_entry = 127,
  sym_value_map = 128,
  sym_qualified_identifier = 129,
  sym_player_set = 130,
  sym_body = 131,
  aux_sym_configuration_repeat1 = 132,
  aux_sym_setup_rule_repeat1 = 133,
  aux_sym_match_repeat1 = 134,
  aux_sym_expression_list_repeat1 = 135,
  aux_sym_value_map_repeat1 = 136,
  aux_sym_qualified_identifier_repeat1 = 137,
  aux_sym_body_repeat1 = 138,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_configuration] = "configuration",
  [anon_sym_LBRACE] = "{",
  [anon_sym_name_COLON] = "name:",
  [anon_sym_playerrange_COLON] = "player range:",
  [anon_sym_audience_COLON] = "audience:",
  [anon_sym_setup_COLON] = "setup:",
  [anon_sym_RBRACE] = "}",
  [anon_sym_kind_COLON] = "kind:",
  [anon_sym_boolean] = "boolean",
  [anon_sym_integer] = "integer",
  [anon_sym_string] = "string",
  [anon_sym_enum] = "enum",
  [anon_sym_question_DASHanswer] = "question-answer",
  [anon_sym_multiple_DASHchoice] = "multiple-choice",
  [anon_sym_json] = "json",
  [anon_sym_prompt_COLON] = "prompt:",
  [anon_sym_range_COLON] = "range:",
  [anon_sym_choices_COLON] = "choices:",
  [anon_sym_COMMA] = ",",
  [anon_sym_default_COLON] = "default:",
  [anon_sym_COLON] = ":",
  [anon_sym_constants] = "constants",
  [anon_sym_variables] = "variables",
  [anon_sym_per_DASHplayer] = "per-player",
  [anon_sym_per_DASHaudience] = "per-audience",
  [anon_sym_rules] = "rules",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_parallelfor] = "parallel for",
  [anon_sym_inparallel] = "in parallel",
  [anon_sym_match] = "match",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_extend] = "extend",
  [anon_sym_with] = "with",
  [anon_sym_SEMI] = ";",
  [anon_sym_reverse] = "reverse",
  [anon_sym_shuffle] = "shuffle",
  [anon_sym_sort] = "sort",
  [anon_sym_by] = "by",
  [anon_sym_deal] = "deal",
  [anon_sym_to] = "to",
  [anon_sym_from] = "from",
  [anon_sym_discard] = "discard",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_time] = "time",
  [anon_sym_atmost] = "at most",
  [anon_sym_exactly] = "exactly",
  [anon_sym_inputchoice] = "input choice",
  [anon_sym_target_COLON] = "target:",
  [anon_sym_timeout_COLON] = "timeout:",
  [anon_sym_inputtext] = "input text",
  [anon_sym_inputrange] = "input range",
  [anon_sym_low_COLON] = "low:",
  [anon_sym_high_COLON] = "high:",
  [anon_sym_inputvote] = "input vote",
  [anon_sym_anonymously] = "anonymously",
  [anon_sym_message] = "message",
  [anon_sym_scores] = "scores",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_BANG] = "!",
  [anon_sym_DOT] = ".",
  [anon_sym_upfrom] = "upfrom",
  [anon_sym_size] = "size",
  [anon_sym_contains] = "contains",
  [anon_sym_collect] = "collect",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_quoted_string] = "quoted_string",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_all] = "all",
  [sym_comment] = "comment",
  [sym_game] = "game",
  [sym_configuration] = "configuration",
  [sym_setup_rule] = "setup_rule",
  [sym_enum_description] = "enum_description",
  [sym_constants] = "constants",
  [sym_variables] = "variables",
  [sym_per_player] = "per_player",
  [sym_per_audience] = "per_audience",
  [sym_rules] = "rules",
  [sym_rule] = "rule",
  [sym_for] = "for",
  [sym_loop] = "loop",
  [sym_parallel_for] = "parallel_for",
  [sym_in_parallel] = "in_parallel",
  [sym_match] = "match",
  [sym_match_entry] = "match_entry",
  [sym_extend] = "extend",
  [sym_reverse] = "reverse",
  [sym_shuffle] = "shuffle",
  [sym_sort] = "sort",
  [sym_deal] = "deal",
  [sym_discard] = "discard",
  [sym_assignment] = "assignment",
  [sym_timer] = "timer",
  [sym_input_choice] = "input_choice",
  [sym_input_text] = "input_text",
  [sym_input_range] = "input_range",
  [sym_input_vote] = "input_vote",
  [sym_message] = "message",
  [sym_scores] = "scores",
  [sym_expression] = "expression",
  [sym_builtin] = "builtin",
  [sym_argument_list] = "argument_list",
  [sym_boolean] = "boolean",
  [sym_number_range] = "number_range",
  [sym_expression_list] = "expression_list",
  [sym_list_literal] = "list_literal",
  [sym_map_entry] = "map_entry",
  [sym_value_map] = "value_map",
  [sym_qualified_identifier] = "qualified_identifier",
  [sym_player_set] = "player_set",
  [sym_body] = "body",
  [aux_sym_configuration_repeat1] = "configuration_repeat1",
  [aux_sym_setup_rule_repeat1] = "setup_rule_repeat1",
  [aux_sym_match_repeat1] = "match_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_value_map_repeat1] = "value_map_repeat1",
  [aux_sym_qualified_identifier_repeat1] = "qualified_identifier_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_configuration] = anon_sym_configuration,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_name_COLON] = anon_sym_name_COLON,
  [anon_sym_playerrange_COLON] = anon_sym_playerrange_COLON,
  [anon_sym_audience_COLON] = anon_sym_audience_COLON,
  [anon_sym_setup_COLON] = anon_sym_setup_COLON,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_kind_COLON] = anon_sym_kind_COLON,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_question_DASHanswer] = anon_sym_question_DASHanswer,
  [anon_sym_multiple_DASHchoice] = anon_sym_multiple_DASHchoice,
  [anon_sym_json] = anon_sym_json,
  [anon_sym_prompt_COLON] = anon_sym_prompt_COLON,
  [anon_sym_range_COLON] = anon_sym_range_COLON,
  [anon_sym_choices_COLON] = anon_sym_choices_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_default_COLON] = anon_sym_default_COLON,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_constants] = anon_sym_constants,
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_per_DASHplayer] = anon_sym_per_DASHplayer,
  [anon_sym_per_DASHaudience] = anon_sym_per_DASHaudience,
  [anon_sym_rules] = anon_sym_rules,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_parallelfor] = anon_sym_parallelfor,
  [anon_sym_inparallel] = anon_sym_inparallel,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_shuffle] = anon_sym_shuffle,
  [anon_sym_sort] = anon_sym_sort,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_deal] = anon_sym_deal,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_discard] = anon_sym_discard,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_time] = anon_sym_time,
  [anon_sym_atmost] = anon_sym_atmost,
  [anon_sym_exactly] = anon_sym_exactly,
  [anon_sym_inputchoice] = anon_sym_inputchoice,
  [anon_sym_target_COLON] = anon_sym_target_COLON,
  [anon_sym_timeout_COLON] = anon_sym_timeout_COLON,
  [anon_sym_inputtext] = anon_sym_inputtext,
  [anon_sym_inputrange] = anon_sym_inputrange,
  [anon_sym_low_COLON] = anon_sym_low_COLON,
  [anon_sym_high_COLON] = anon_sym_high_COLON,
  [anon_sym_inputvote] = anon_sym_inputvote,
  [anon_sym_anonymously] = anon_sym_anonymously,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_scores] = anon_sym_scores,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_upfrom] = anon_sym_upfrom,
  [anon_sym_size] = anon_sym_size,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_collect] = anon_sym_collect,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_quoted_string] = sym_quoted_string,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_all] = anon_sym_all,
  [sym_comment] = sym_comment,
  [sym_game] = sym_game,
  [sym_configuration] = sym_configuration,
  [sym_setup_rule] = sym_setup_rule,
  [sym_enum_description] = sym_enum_description,
  [sym_constants] = sym_constants,
  [sym_variables] = sym_variables,
  [sym_per_player] = sym_per_player,
  [sym_per_audience] = sym_per_audience,
  [sym_rules] = sym_rules,
  [sym_rule] = sym_rule,
  [sym_for] = sym_for,
  [sym_loop] = sym_loop,
  [sym_parallel_for] = sym_parallel_for,
  [sym_in_parallel] = sym_in_parallel,
  [sym_match] = sym_match,
  [sym_match_entry] = sym_match_entry,
  [sym_extend] = sym_extend,
  [sym_reverse] = sym_reverse,
  [sym_shuffle] = sym_shuffle,
  [sym_sort] = sym_sort,
  [sym_deal] = sym_deal,
  [sym_discard] = sym_discard,
  [sym_assignment] = sym_assignment,
  [sym_timer] = sym_timer,
  [sym_input_choice] = sym_input_choice,
  [sym_input_text] = sym_input_text,
  [sym_input_range] = sym_input_range,
  [sym_input_vote] = sym_input_vote,
  [sym_message] = sym_message,
  [sym_scores] = sym_scores,
  [sym_expression] = sym_expression,
  [sym_builtin] = sym_builtin,
  [sym_argument_list] = sym_argument_list,
  [sym_boolean] = sym_boolean,
  [sym_number_range] = sym_number_range,
  [sym_expression_list] = sym_expression_list,
  [sym_list_literal] = sym_list_literal,
  [sym_map_entry] = sym_map_entry,
  [sym_value_map] = sym_value_map,
  [sym_qualified_identifier] = sym_qualified_identifier,
  [sym_player_set] = sym_player_set,
  [sym_body] = sym_body,
  [aux_sym_configuration_repeat1] = aux_sym_configuration_repeat1,
  [aux_sym_setup_rule_repeat1] = aux_sym_setup_rule_repeat1,
  [aux_sym_match_repeat1] = aux_sym_match_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_value_map_repeat1] = aux_sym_value_map_repeat1,
  [aux_sym_qualified_identifier_repeat1] = aux_sym_qualified_identifier_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_configuration] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_name_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_playerrange_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_audience_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_setup_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kind_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_question_DASHanswer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiple_DASHchoice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_json] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prompt_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choices_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constants] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_per_DASHplayer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_per_DASHaudience] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rules] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parallelfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inparallel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_shuffle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discard] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_time] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atmost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exactly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inputchoice] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_target_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timeout_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inputtext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inputrange] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_low_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_high_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inputvote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_anonymously] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scores] = {
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
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
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
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_upfrom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_size] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_collect] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_game] = {
    .visible = true,
    .named = true,
  },
  [sym_configuration] = {
    .visible = true,
    .named = true,
  },
  [sym_setup_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_description] = {
    .visible = true,
    .named = true,
  },
  [sym_constants] = {
    .visible = true,
    .named = true,
  },
  [sym_variables] = {
    .visible = true,
    .named = true,
  },
  [sym_per_player] = {
    .visible = true,
    .named = true,
  },
  [sym_per_audience] = {
    .visible = true,
    .named = true,
  },
  [sym_rules] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_loop] = {
    .visible = true,
    .named = true,
  },
  [sym_parallel_for] = {
    .visible = true,
    .named = true,
  },
  [sym_in_parallel] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_match_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_extend] = {
    .visible = true,
    .named = true,
  },
  [sym_reverse] = {
    .visible = true,
    .named = true,
  },
  [sym_shuffle] = {
    .visible = true,
    .named = true,
  },
  [sym_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_deal] = {
    .visible = true,
    .named = true,
  },
  [sym_discard] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_timer] = {
    .visible = true,
    .named = true,
  },
  [sym_input_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_input_text] = {
    .visible = true,
    .named = true,
  },
  [sym_input_range] = {
    .visible = true,
    .named = true,
  },
  [sym_input_vote] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_scores] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number_range] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_map_entry] = {
    .visible = true,
    .named = true,
  },
  [sym_value_map] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_player_set] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_configuration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_setup_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_map_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_anonymously = 1,
  field_arguments = 2,
  field_body = 3,
  field_builtin = 4,
  field_choices = 5,
  field_condition = 6,
  field_configuration = 7,
  field_constants = 8,
  field_content = 9,
  field_count = 10,
  field_default = 11,
  field_description = 12,
  field_duration = 13,
  field_element = 14,
  field_elements = 15,
  field_flag = 16,
  field_guard = 17,
  field_has_audience = 18,
  field_high_label = 19,
  field_identifier = 20,
  field_key = 21,
  field_keys = 22,
  field_kind = 23,
  field_lhs = 24,
  field_list = 25,
  field_low_label = 26,
  field_map = 27,
  field_mode = 28,
  field_name = 29,
  field_operand = 30,
  field_per_audience = 31,
  field_per_player = 32,
  field_player = 33,
  field_player_range = 34,
  field_players = 35,
  field_prompt = 36,
  field_range = 37,
  field_rhs = 38,
  field_rules = 39,
  field_source = 40,
  field_target = 41,
  field_targets = 42,
  field_timeout = 43,
  field_value = 44,
  field_variables = 45,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_anonymously] = "anonymously",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_builtin] = "builtin",
  [field_choices] = "choices",
  [field_condition] = "condition",
  [field_configuration] = "configuration",
  [field_constants] = "constants",
  [field_content] = "content",
  [field_count] = "count",
  [field_default] = "default",
  [field_description] = "description",
  [field_duration] = "duration",
  [field_element] = "element",
  [field_elements] = "elements",
  [field_flag] = "flag",
  [field_guard] = "guard",
  [field_has_audience] = "has_audience",
  [field_high_label] = "high_label",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_keys] = "keys",
  [field_kind] = "kind",
  [field_lhs] = "lhs",
  [field_list] = "list",
  [field_low_label] = "low_label",
  [field_map] = "map",
  [field_mode] = "mode",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_per_audience] = "per_audience",
  [field_per_player] = "per_player",
  [field_player] = "player",
  [field_player_range] = "player_range",
  [field_players] = "players",
  [field_prompt] = "prompt",
  [field_range] = "range",
  [field_rhs] = "rhs",
  [field_rules] = "rules",
  [field_source] = "source",
  [field_target] = "target",
  [field_targets] = "targets",
  [field_timeout] = "timeout",
  [field_value] = "value",
  [field_variables] = "variables",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 6},
  [4] = {.index = 9, .length = 1},
  [5] = {.index = 10, .length = 1},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 1},
  [9] = {.index = 15, .length = 1},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 1},
  [12] = {.index = 19, .length = 1},
  [13] = {.index = 20, .length = 1},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 2},
  [17] = {.index = 27, .length = 3},
  [18] = {.index = 30, .length = 3},
  [19] = {.index = 33, .length = 2},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 3},
  [23] = {.index = 42, .length = 2},
  [24] = {.index = 44, .length = 3},
  [25] = {.index = 47, .length = 3},
  [26] = {.index = 50, .length = 4},
  [27] = {.index = 54, .length = 3},
  [28] = {.index = 57, .length = 3},
  [29] = {.index = 60, .length = 4},
  [30] = {.index = 64, .length = 4},
  [31] = {.index = 68, .length = 4},
  [32] = {.index = 72, .length = 4},
  [33] = {.index = 76, .length = 4},
  [34] = {.index = 80, .length = 4},
  [35] = {.index = 84, .length = 5},
  [36] = {.index = 89, .length = 5},
  [37] = {.index = 94, .length = 5},
  [38] = {.index = 99, .length = 5},
  [39] = {.index = 104, .length = 6},
  [40] = {.index = 110, .length = 6},
  [41] = {.index = 116, .length = 5},
  [42] = {.index = 121, .length = 5},
  [43] = {.index = 126, .length = 2},
  [44] = {.index = 128, .length = 6},
  [45] = {.index = 134, .length = 6},
  [46] = {.index = 140, .length = 6},
  [47] = {.index = 146, .length = 6},
  [48] = {.index = 152, .length = 7},
  [49] = {.index = 159, .length = 7},
  [50] = {.index = 166, .length = 8},
  [51] = {.index = 174, .length = 7},
  [52] = {.index = 181, .length = 7},
  [53] = {.index = 188, .length = 7},
  [54] = {.index = 195, .length = 8},
  [55] = {.index = 203, .length = 7},
  [56] = {.index = 210, .length = 8},
  [57] = {.index = 218, .length = 8},
  [58] = {.index = 226, .length = 9},
  [59] = {.index = 235, .length = 8},
  [60] = {.index = 243, .length = 9},
  [61] = {.index = 252, .length = 9},
  [62] = {.index = 261, .length = 9},
  [63] = {.index = 270, .length = 10},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_map, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
  [3] =
    {field_configuration, 0},
    {field_constants, 1},
    {field_per_audience, 4},
    {field_per_player, 3},
    {field_rules, 5},
    {field_variables, 2},
  [9] =
    {field_operand, 1},
  [10] =
    {field_body, 1},
  [11] =
    {field_elements, 1},
  [12] =
    {field_lhs, 0},
    {field_rhs, 2},
  [14] =
    {field_identifier, 2},
  [15] =
    {field_builtin, 2},
  [16] =
    {field_body, 2},
    {field_condition, 1},
  [18] =
    {field_target, 1},
  [19] =
    {field_keys, 1},
  [20] =
    {field_arguments, 1},
  [21] =
    {field_body, 3},
    {field_duration, 2},
  [23] =
    {field_content, 2},
    {field_players, 1},
  [25] =
    {field_target, 0},
    {field_value, 2},
  [27] =
    {field_has_audience, 7},
    {field_name, 3},
    {field_player_range, 5},
  [30] =
    {field_body, 4},
    {field_element, 1},
    {field_list, 3},
  [33] =
    {field_target, 1},
    {field_value, 3},
  [35] =
    {field_key, 3},
    {field_target, 1},
  [37] =
    {field_count, 1},
    {field_source, 3},
  [39] =
    {field_body, 4},
    {field_duration, 2},
    {field_mode, 3},
  [42] =
    {field_body, 2},
    {field_guard, 0},
  [44] =
    {field_body, 5},
    {field_duration, 2},
    {field_flag, 4},
  [47] =
    {field_count, 1},
    {field_source, 5},
    {field_targets, 3},
  [50] =
    {field_body, 6},
    {field_duration, 2},
    {field_flag, 5},
    {field_mode, 3},
  [54] =
    {field_player, 2},
    {field_prompt, 5},
    {field_target, 7},
  [57] =
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [60] =
    {field_choices, 7},
    {field_player, 2},
    {field_prompt, 5},
    {field_target, 9},
  [64] =
    {field_player, 2},
    {field_prompt, 5},
    {field_target, 7},
    {field_timeout, 9},
  [68] =
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 9},
  [72] =
    {field_choices, 7},
    {field_players, 2},
    {field_prompt, 5},
    {field_target, 9},
  [76] =
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [80] =
    {field_default, 7},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [84] =
    {field_anonymously, 3},
    {field_choices, 8},
    {field_players, 2},
    {field_prompt, 6},
    {field_target, 10},
  [89] =
    {field_choices, 7},
    {field_choices, 8},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [94] =
    {field_choices, 7},
    {field_player, 2},
    {field_prompt, 5},
    {field_target, 9},
    {field_timeout, 11},
  [99] =
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 9},
    {field_timeout, 11},
  [104] =
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
  [110] =
    {field_high_label, 8},
    {field_high_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
  [116] =
    {field_choices, 7},
    {field_players, 2},
    {field_prompt, 5},
    {field_target, 9},
    {field_timeout, 11},
  [121] =
    {field_default, 9},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [126] =
    {field_description, 2},
    {field_name, 0},
  [128] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [134] =
    {field_anonymously, 3},
    {field_choices, 8},
    {field_players, 2},
    {field_prompt, 6},
    {field_target, 10},
    {field_timeout, 12},
  [140] =
    {field_choices, 9},
    {field_choices, 10},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [146] =
    {field_choices, 7},
    {field_choices, 8},
    {field_default, 10},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [152] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_choices, 10},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [159] =
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
    {field_timeout, 13},
  [166] =
    {field_high_label, 10},
    {field_high_label, 11},
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 13},
  [174] =
    {field_high_label, 8},
    {field_high_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
    {field_timeout, 13},
  [181] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [188] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_default, 11},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [195] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [203] =
    {field_choices, 9},
    {field_choices, 10},
    {field_default, 12},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [210] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_choices, 12},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [218] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_choices, 10},
    {field_default, 12},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [226] =
    {field_high_label, 10},
    {field_high_label, 11},
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 13},
    {field_timeout, 15},
  [235] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_default, 13},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [243] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_choices, 12},
    {field_choices, 13},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [252] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_default, 13},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [261] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_choices, 12},
    {field_default, 14},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [270] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_choices, 12},
    {field_choices, 13},
    {field_default, 15},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
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
  [5] = 4,
  [6] = 2,
  [7] = 4,
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
  [29] = 19,
  [30] = 30,
  [31] = 23,
  [32] = 18,
  [33] = 17,
  [34] = 10,
  [35] = 14,
  [36] = 16,
  [37] = 11,
  [38] = 20,
  [39] = 21,
  [40] = 26,
  [41] = 15,
  [42] = 22,
  [43] = 25,
  [44] = 27,
  [45] = 9,
  [46] = 13,
  [47] = 24,
  [48] = 12,
  [49] = 28,
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
  [90] = 30,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
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
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 124,
  [140] = 140,
  [141] = 110,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 106,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 148,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 152,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 179,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 184,
  [189] = 185,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 190,
  [201] = 201,
  [202] = 193,
  [203] = 194,
  [204] = 204,
  [205] = 72,
  [206] = 61,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 213,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 208,
  [231] = 231,
  [232] = 232,
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
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 242,
  [252] = 249,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 240,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 228,
  [264] = 248,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 283,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 72,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 61,
  [363] = 363,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 369,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 336,
  [395] = 395,
  [396] = 396,
  [397] = 397,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(317);
      if (lookahead == '!') ADVANCE(407);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(389);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(336);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ':') ADVANCE(338);
      if (lookahead == ';') ADVANCE(357);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(394);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'j') ADVANCE(271);
      if (lookahead == 'k') ADVANCE(144);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == 'q') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(138);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(189);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(407);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(389);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(393);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'f') ADVANCE(432);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(336);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ';') ADVANCE(357);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(394);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(48);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(31);
      if (lookahead == '%') ADVANCE(405);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(390);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(336);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == '/') ADVANCE(404);
      if (lookahead == ';') ADVANCE(357);
      if (lookahead == '<') ADVANCE(396);
      if (lookahead == '=') ADVANCE(394);
      if (lookahead == '>') ADVANCE(398);
      if (lookahead == ']') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead == 'f') ADVANCE(481);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == 'm') ADVANCE(428);
      if (lookahead == 'p') ADVANCE(429);
      if (lookahead == 'r') ADVANCE(440);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == 'w') ADVANCE(460);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '|') ADVANCE(315);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(406);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(389);
      if (lookahead == '-') ADVANCE(316);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '[') ADVANCE(514);
      if (lookahead == 'a') ADVANCE(469);
      if (lookahead == 'f') ADVANCE(432);
      if (lookahead == 't') ADVANCE(491);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(422);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(392);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(371);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(408);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(357);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(214);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'j') ADVANCE(271);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 'q') ADVANCE(293);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'w') ADVANCE(146);
      if (lookahead == '{') ADVANCE(319);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(518);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 's') ADVANCE(462);
      if (lookahead == 'u') ADVANCE(485);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '}') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(381);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(382);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(325);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(334);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(323);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(333);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(377);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(335);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(337);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(378);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(322);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(321);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(395);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(278);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(312);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(302);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(303);
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(367);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(179);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(194);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(152);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(313);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(212);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(180);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(136);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(224);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == 'h') ADVANCE(294);
      if (lookahead == 'i') ADVANCE(314);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(284);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(52);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == 'v') ADVANCE(230);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(411);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(372);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(418);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(420);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(342);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(331);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(308);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(383);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(380);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(376);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(272);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(249);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(145);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(229);
      END_STATE();
    case 125:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(137);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 133:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 134:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(356);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(351);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(217);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(225);
      END_STATE();
    case 142:
      if (lookahead == 'h') ADVANCE(231);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(199);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(227);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 't') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(516);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(365);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(309);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(269);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(287);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(329);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(368);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(409);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(346);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(326);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(318);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(297);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(291);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(305);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(267);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(203);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(195);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(240);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(282);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(344);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(341);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(343);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(387);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(413);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(339);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(340);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(306);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(218);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(283);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(165);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 291:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 292:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(183);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 299:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 300:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 301:
      if (lookahead == 'u') ADVANCE(250);
      END_STATE();
    case 302:
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 303:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 304:
      if (lookahead == 'v') ADVANCE(107);
      END_STATE();
    case 305:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 306:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 307:
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 308:
      if (lookahead == 'x') ADVANCE(276);
      END_STATE();
    case 309:
      if (lookahead == 'y') ADVANCE(375);
      END_STATE();
    case 310:
      if (lookahead == 'y') ADVANCE(384);
      END_STATE();
    case 311:
      if (lookahead == 'y') ADVANCE(190);
      END_STATE();
    case 312:
      if (lookahead == 'y') ADVANCE(111);
      END_STATE();
    case 313:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 314:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 315:
      if (lookahead == '|') ADVANCE(391);
      END_STATE();
    case 316:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_configuration);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_name_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_playerrange_COLON);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_audience_COLON);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_setup_COLON);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_kind_COLON);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_question_DASHanswer);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_multiple_DASHchoice);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_prompt_COLON);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_range_COLON);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_choices_COLON);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_default_COLON);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_per_DASHplayer);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_per_DASHaudience);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_parallelfor);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_inparallel);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_shuffle);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_shuffle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_deal);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_deal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_inputchoice);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_target_COLON);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_timeout_COLON);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_inputtext);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_inputrange);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_low_COLON);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_high_COLON);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_inputvote);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_anonymously);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_scores);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_scores);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(353);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(397);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(518);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(395);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_upfrom);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_upfrom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_size);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_collect);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_collect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(235);
      if (lookahead == 'p') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(507);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(513);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(518);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 5},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 4},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 4},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 4},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 4},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 14},
  [210] = {.lex_state = 14},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 16},
  [214] = {.lex_state = 16},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 17},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 17},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 17},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 17},
  [232] = {.lex_state = 17},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 17},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 17},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 17},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 17},
  [251] = {.lex_state = 17},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 17},
  [254] = {.lex_state = 17},
  [255] = {.lex_state = 17},
  [256] = {.lex_state = 17},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 17},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 17},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 5},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 17},
  [277] = {.lex_state = 17},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 17},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 17},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 17},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 5},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 17},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 17},
  [315] = {.lex_state = 17},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 17},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 17},
  [320] = {.lex_state = 17},
  [321] = {.lex_state = 17},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 17},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 17},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 17},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 17},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 7},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 17},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_configuration] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_name_COLON] = ACTIONS(1),
    [anon_sym_playerrange_COLON] = ACTIONS(1),
    [anon_sym_audience_COLON] = ACTIONS(1),
    [anon_sym_setup_COLON] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_kind_COLON] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_question_DASHanswer] = ACTIONS(1),
    [anon_sym_multiple_DASHchoice] = ACTIONS(1),
    [anon_sym_json] = ACTIONS(1),
    [anon_sym_prompt_COLON] = ACTIONS(1),
    [anon_sym_range_COLON] = ACTIONS(1),
    [anon_sym_choices_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_default_COLON] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_constants] = ACTIONS(1),
    [anon_sym_variables] = ACTIONS(1),
    [anon_sym_per_DASHplayer] = ACTIONS(1),
    [anon_sym_per_DASHaudience] = ACTIONS(1),
    [anon_sym_rules] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_parallelfor] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_shuffle] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_deal] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_discard] = ACTIONS(1),
    [anon_sym_time] = ACTIONS(1),
    [anon_sym_atmost] = ACTIONS(1),
    [anon_sym_exactly] = ACTIONS(1),
    [anon_sym_target_COLON] = ACTIONS(1),
    [anon_sym_timeout_COLON] = ACTIONS(1),
    [anon_sym_low_COLON] = ACTIONS(1),
    [anon_sym_high_COLON] = ACTIONS(1),
    [anon_sym_anonymously] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_scores] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_upfrom] = ACTIONS(1),
    [anon_sym_size] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_collect] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_quoted_string] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_game] = STATE(397),
    [sym_configuration] = STATE(272),
    [anon_sym_configuration] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_parallelfor,
    ACTIONS(17), 1,
      anon_sym_inparallel,
    ACTIONS(19), 1,
      anon_sym_match,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_reverse,
    ACTIONS(25), 1,
      anon_sym_shuffle,
    ACTIONS(27), 1,
      anon_sym_sort,
    ACTIONS(29), 1,
      anon_sym_deal,
    ACTIONS(31), 1,
      anon_sym_discard,
    ACTIONS(33), 1,
      anon_sym_time,
    ACTIONS(35), 1,
      anon_sym_inputchoice,
    ACTIONS(37), 1,
      anon_sym_inputtext,
    ACTIONS(39), 1,
      anon_sym_inputrange,
    ACTIONS(41), 1,
      anon_sym_inputvote,
    ACTIONS(43), 1,
      anon_sym_message,
    ACTIONS(45), 1,
      anon_sym_scores,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [99] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_parallelfor,
    ACTIONS(17), 1,
      anon_sym_inparallel,
    ACTIONS(19), 1,
      anon_sym_match,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_reverse,
    ACTIONS(25), 1,
      anon_sym_shuffle,
    ACTIONS(27), 1,
      anon_sym_sort,
    ACTIONS(29), 1,
      anon_sym_deal,
    ACTIONS(31), 1,
      anon_sym_discard,
    ACTIONS(33), 1,
      anon_sym_time,
    ACTIONS(35), 1,
      anon_sym_inputchoice,
    ACTIONS(37), 1,
      anon_sym_inputtext,
    ACTIONS(39), 1,
      anon_sym_inputrange,
    ACTIONS(41), 1,
      anon_sym_inputvote,
    ACTIONS(43), 1,
      anon_sym_message,
    ACTIONS(45), 1,
      anon_sym_scores,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [198] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_parallelfor,
    ACTIONS(17), 1,
      anon_sym_inparallel,
    ACTIONS(19), 1,
      anon_sym_match,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_reverse,
    ACTIONS(25), 1,
      anon_sym_shuffle,
    ACTIONS(27), 1,
      anon_sym_sort,
    ACTIONS(29), 1,
      anon_sym_deal,
    ACTIONS(31), 1,
      anon_sym_discard,
    ACTIONS(33), 1,
      anon_sym_time,
    ACTIONS(35), 1,
      anon_sym_inputchoice,
    ACTIONS(37), 1,
      anon_sym_inputtext,
    ACTIONS(39), 1,
      anon_sym_inputrange,
    ACTIONS(41), 1,
      anon_sym_inputvote,
    ACTIONS(43), 1,
      anon_sym_message,
    ACTIONS(45), 1,
      anon_sym_scores,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(3), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [297] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_parallelfor,
    ACTIONS(17), 1,
      anon_sym_inparallel,
    ACTIONS(19), 1,
      anon_sym_match,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_reverse,
    ACTIONS(25), 1,
      anon_sym_shuffle,
    ACTIONS(27), 1,
      anon_sym_sort,
    ACTIONS(29), 1,
      anon_sym_deal,
    ACTIONS(31), 1,
      anon_sym_discard,
    ACTIONS(33), 1,
      anon_sym_time,
    ACTIONS(35), 1,
      anon_sym_inputchoice,
    ACTIONS(37), 1,
      anon_sym_inputtext,
    ACTIONS(39), 1,
      anon_sym_inputrange,
    ACTIONS(41), 1,
      anon_sym_inputvote,
    ACTIONS(43), 1,
      anon_sym_message,
    ACTIONS(45), 1,
      anon_sym_scores,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(2), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [396] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_parallelfor,
    ACTIONS(17), 1,
      anon_sym_inparallel,
    ACTIONS(19), 1,
      anon_sym_match,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_reverse,
    ACTIONS(25), 1,
      anon_sym_shuffle,
    ACTIONS(27), 1,
      anon_sym_sort,
    ACTIONS(29), 1,
      anon_sym_deal,
    ACTIONS(31), 1,
      anon_sym_discard,
    ACTIONS(33), 1,
      anon_sym_time,
    ACTIONS(35), 1,
      anon_sym_inputchoice,
    ACTIONS(37), 1,
      anon_sym_inputtext,
    ACTIONS(39), 1,
      anon_sym_inputrange,
    ACTIONS(41), 1,
      anon_sym_inputvote,
    ACTIONS(43), 1,
      anon_sym_message,
    ACTIONS(45), 1,
      anon_sym_scores,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [495] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_for,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_parallelfor,
    ACTIONS(17), 1,
      anon_sym_inparallel,
    ACTIONS(19), 1,
      anon_sym_match,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_reverse,
    ACTIONS(25), 1,
      anon_sym_shuffle,
    ACTIONS(27), 1,
      anon_sym_sort,
    ACTIONS(29), 1,
      anon_sym_deal,
    ACTIONS(31), 1,
      anon_sym_discard,
    ACTIONS(33), 1,
      anon_sym_time,
    ACTIONS(35), 1,
      anon_sym_inputchoice,
    ACTIONS(37), 1,
      anon_sym_inputtext,
    ACTIONS(39), 1,
      anon_sym_inputrange,
    ACTIONS(41), 1,
      anon_sym_inputvote,
    ACTIONS(43), 1,
      anon_sym_message,
    ACTIONS(45), 1,
      anon_sym_scores,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(6), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [594] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      anon_sym_for,
    ACTIONS(67), 1,
      anon_sym_while,
    ACTIONS(70), 1,
      anon_sym_parallelfor,
    ACTIONS(73), 1,
      anon_sym_inparallel,
    ACTIONS(76), 1,
      anon_sym_match,
    ACTIONS(79), 1,
      anon_sym_extend,
    ACTIONS(82), 1,
      anon_sym_reverse,
    ACTIONS(85), 1,
      anon_sym_shuffle,
    ACTIONS(88), 1,
      anon_sym_sort,
    ACTIONS(91), 1,
      anon_sym_deal,
    ACTIONS(94), 1,
      anon_sym_discard,
    ACTIONS(97), 1,
      anon_sym_time,
    ACTIONS(100), 1,
      anon_sym_inputchoice,
    ACTIONS(103), 1,
      anon_sym_inputtext,
    ACTIONS(106), 1,
      anon_sym_inputrange,
    ACTIONS(109), 1,
      anon_sym_inputvote,
    ACTIONS(112), 1,
      anon_sym_message,
    ACTIONS(115), 1,
      anon_sym_scores,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(352), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(56), 20,
      sym_for,
      sym_loop,
      sym_parallel_for,
      sym_in_parallel,
      sym_match,
      sym_extend,
      sym_reverse,
      sym_shuffle,
      sym_sort,
      sym_deal,
      sym_discard,
      sym_assignment,
      sym_timer,
      sym_input_choice,
      sym_input_text,
      sym_input_range,
      sym_input_vote,
      sym_message,
      sym_scores,
      sym_body,
  [693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(121), 31,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_variables,
      anon_sym_per_DASHplayer,
      anon_sym_per_DASHaudience,
      anon_sym_rules,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(125), 31,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_variables,
      anon_sym_per_DASHplayer,
      anon_sym_per_DASHaudience,
      anon_sym_rules,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(129), 31,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_variables,
      anon_sym_per_DASHplayer,
      anon_sym_per_DASHaudience,
      anon_sym_rules,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(133), 31,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_variables,
      anon_sym_per_DASHplayer,
      anon_sym_per_DASHaudience,
      anon_sym_rules,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(137), 28,
      anon_sym_LBRACE,
      anon_sym_setup_COLON,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [905] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(141), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [944] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_EQ,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(145), 20,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
  [995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(163), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(161), 26,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [1036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(165), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1075] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(169), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(173), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1153] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(145), 18,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [1208] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_BANG_EQ,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(145), 19,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(183), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(187), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(191), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1378] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(147), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(145), 26,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_RBRACK,
  [1419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(195), 27,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [1458] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
  [1505] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 24,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_range_COLON,
      anon_sym_choices_COLON,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_EQ_GT,
      anon_sym_SEMI,
      anon_sym_to,
      anon_sym_from,
      anon_sym_atmost,
      anon_sym_exactly,
      anon_sym_target_COLON,
      anon_sym_high_COLON,
      anon_sym_anonymously,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RBRACK,
  [1550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(173), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1581] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(203), 1,
      anon_sym_AMP_AMP,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(205), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(219), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(199), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(187), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(169), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(165), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(125), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(163), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 14,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(129), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1851] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_AMP_AMP,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(205), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(145), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1900] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(205), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(145), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(195), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1978] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(145), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2023] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(183), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2054] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(147), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(145), 14,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2087] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_PLUS,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(145), 11,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(121), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(137), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(191), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(133), 15,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOT,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2252] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(147), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(145), 12,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [2289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(225), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(229), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(233), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(237), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(241), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(245), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(249), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(253), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(257), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(261), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2579] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(265), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2608] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(269), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(273), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(277), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(281), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(285), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2753] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(289), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(293), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(297), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(301), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(305), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(309), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2927] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(313), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2956] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(317), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [2985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(321), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(325), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(329), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(333), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(337), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(341), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(345), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(349), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(353), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(357), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(361), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(365), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(369), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_parallelfor,
      anon_sym_inparallel,
      anon_sym_inputchoice,
      anon_sym_inputtext,
      anon_sym_inputrange,
      anon_sym_inputvote,
    ACTIONS(373), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_match,
      anon_sym_extend,
      anon_sym_reverse,
      anon_sym_shuffle,
      anon_sym_sort,
      anon_sym_deal,
      anon_sym_discard,
      anon_sym_time,
      anon_sym_message,
      anon_sym_scores,
      sym_identifier,
  [3391] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(375), 1,
      anon_sym_in,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(68), 1,
      sym_body,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(377), 2,
      anon_sym_atmost,
      anon_sym_exactly,
  [3440] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(216), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3486] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(199), 3,
      anon_sym_LBRACE,
      anon_sym_from,
      anon_sym_anonymously,
  [3527] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3568] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(387), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3608] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(58), 1,
      sym_body,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3650] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(389), 1,
      anon_sym_target_COLON,
    ACTIONS(391), 1,
      anon_sym_high_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3692] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(84), 1,
      sym_body,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3734] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(83), 1,
      sym_body,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3776] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_match_entry,
      aux_sym_match_repeat1,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [3818] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(414), 1,
      anon_sym_LPAREN,
    ACTIONS(417), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_expression,
    ACTIONS(420), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(423), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(98), 2,
      sym_match_entry,
      aux_sym_match_repeat1,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [3860] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3899] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_all,
    STATE(90), 1,
      sym_expression,
    STATE(322), 1,
      sym_player_set,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [3940] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(436), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [3979] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(438), 1,
      anon_sym_choices_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4018] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(440), 1,
      anon_sym_target_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4057] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(442), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4096] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4135] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_expression,
    STATE(336), 1,
      sym_expression_list,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4176] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(448), 1,
      anon_sym_range_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4215] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(450), 1,
      anon_sym_choices_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4254] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4293] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4332] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4371] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(458), 1,
      anon_sym_choices_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4410] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4449] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(462), 1,
      anon_sym_target_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4488] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4527] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(466), 1,
      anon_sym_to,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4566] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(468), 1,
      anon_sym_from,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4605] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(470), 1,
      anon_sym_target_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4644] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    ACTIONS(486), 1,
      anon_sym_all,
    STATE(30), 1,
      sym_expression,
    STATE(164), 1,
      sym_player_set,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4685] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4724] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(490), 1,
      anon_sym_SEMI,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4763] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4802] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_BANG_EQ,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(494), 1,
      anon_sym_EQ_GT,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4843] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_expression,
    STATE(369), 1,
      sym_expression_list,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4884] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4923] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4962] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5001] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(504), 1,
      anon_sym_target_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5040] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5079] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5118] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5157] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5196] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_target_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5235] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(516), 1,
      anon_sym_SEMI,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5274] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5313] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5352] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5391] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5430] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_expression,
    STATE(388), 1,
      sym_expression_list,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5471] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(97), 2,
      sym_match_entry,
      aux_sym_match_repeat1,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5510] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5549] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5588] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(532), 1,
      anon_sym_target_COLON,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5627] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(434), 1,
      anon_sym_all,
    STATE(90), 1,
      sym_expression,
    STATE(353), 1,
      sym_player_set,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5668] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_expression,
    STATE(394), 1,
      sym_expression_list,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5709] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_DOT,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(153), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(155), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(181), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5748] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(115), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5783] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5818] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5853] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5888] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(127), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5923] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5958] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5993] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6028] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6063] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6098] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6133] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(142), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6168] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(141), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6203] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(143), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6238] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(122), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6273] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(134), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6308] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6343] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(138), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6378] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6413] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6448] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(137), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6483] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6518] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(136), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6553] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6588] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6623] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6658] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6693] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(146), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6728] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6763] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(109), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6798] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6833] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6868] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6903] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6938] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6973] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7008] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7043] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7078] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7113] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7148] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7183] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7218] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7253] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7288] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(121), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7323] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7358] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7393] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7428] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7463] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7533] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7568] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7603] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7638] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(105), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7673] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7708] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 1,
      anon_sym_BANG,
    ACTIONS(482), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_expression,
    ACTIONS(478), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(480), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7743] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    ACTIONS(397), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(405), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(93), 1,
      sym_expression,
    ACTIONS(401), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(403), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(311), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(267), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(538), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(199), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DOT,
    ACTIONS(542), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_with,
      anon_sym_SEMI,
      anon_sym_by,
      anon_sym_LT_DASH,
      anon_sym_timeout_COLON,
  [7865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DOT,
    ACTIONS(546), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_with,
      anon_sym_SEMI,
      anon_sym_by,
      anon_sym_LT_DASH,
      anon_sym_timeout_COLON,
  [7881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 7,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_enum,
      anon_sym_question_DASHanswer,
      anon_sym_multiple_DASHchoice,
      anon_sym_json,
  [7894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 7,
      anon_sym_audience_COLON,
      anon_sym_RBRACE,
      anon_sym_choices_COLON,
      anon_sym_default_COLON,
      anon_sym_target_COLON,
      anon_sym_low_COLON,
      anon_sym_high_COLON,
  [7907] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      sym_identifier,
    STATE(310), 1,
      sym_builtin,
    ACTIONS(552), 4,
      anon_sym_upfrom,
      anon_sym_size,
      anon_sym_contains,
      anon_sym_collect,
  [7923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    STATE(283), 1,
      sym_builtin,
    ACTIONS(552), 4,
      anon_sym_upfrom,
      anon_sym_size,
      anon_sym_contains,
      anon_sym_collect,
  [7939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(436), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7967] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(218), 2,
      sym_setup_rule,
      aux_sym_configuration_repeat1,
  [7981] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(219), 2,
      sym_setup_rule,
      aux_sym_configuration_repeat1,
  [7995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      sym_identifier,
    STATE(219), 2,
      sym_setup_rule,
      aux_sym_configuration_repeat1,
  [8009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 1,
      anon_sym_range_COLON,
    ACTIONS(578), 1,
      anon_sym_choices_COLON,
    ACTIONS(580), 1,
      anon_sym_default_COLON,
  [8025] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(295), 1,
      sym_qualified_identifier,
  [8038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(290), 1,
      sym_qualified_identifier,
  [8051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(300), 1,
      sym_enum_description,
  [8064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_setup_rule_repeat1,
  [8077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(333), 1,
      sym_boolean,
    ACTIONS(593), 2,
      anon_sym_true,
      anon_sym_false,
  [8088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_value_map_repeat1,
  [8101] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_target_COLON,
    ACTIONS(602), 1,
      anon_sym_low_COLON,
    ACTIONS(604), 1,
      anon_sym_high_COLON,
  [8114] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(305), 1,
      sym_map_entry,
  [8127] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(282), 1,
      sym_qualified_identifier,
  [8140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_LBRACE,
      anon_sym_from,
      anon_sym_anonymously,
  [8149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_enum_description,
  [8162] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(281), 1,
      sym_qualified_identifier,
  [8175] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(337), 1,
      sym_qualified_identifier,
  [8188] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(612), 1,
      anon_sym_in,
    STATE(78), 1,
      sym_body,
  [8201] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(278), 1,
      sym_qualified_identifier,
  [8214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(359), 1,
      sym_qualified_identifier,
  [8227] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_setup_rule_repeat1,
  [8240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_setup_rule_repeat1,
  [8253] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_enum_description,
  [8266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_value_map_repeat1,
  [8279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(339), 1,
      sym_qualified_identifier,
  [8292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_map_entry,
  [8305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(340), 1,
      sym_qualified_identifier,
  [8318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(304), 1,
      sym_qualified_identifier,
  [8331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(270), 1,
      sym_qualified_identifier,
  [8344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    ACTIONS(626), 1,
      anon_sym_choices_COLON,
    ACTIONS(628), 1,
      anon_sym_default_COLON,
  [8357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    STATE(265), 1,
      sym_enum_description,
  [8370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_map_entry,
  [8383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_value_map_repeat1,
  [8396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(286), 1,
      sym_qualified_identifier,
  [8409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_map_entry,
  [8422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_value_map_repeat1,
  [8435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(324), 1,
      sym_qualified_identifier,
  [8448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(269), 1,
      sym_qualified_identifier,
  [8461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(341), 1,
      sym_qualified_identifier,
  [8474] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(271), 1,
      sym_qualified_identifier,
  [8487] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(226), 1,
      aux_sym_value_map_repeat1,
  [8500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(343), 1,
      sym_qualified_identifier,
  [8513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    STATE(266), 1,
      sym_enum_description,
  [8526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(346), 1,
      sym_qualified_identifier,
  [8539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(267), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(347), 1,
      sym_qualified_identifier,
  [8552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    ACTIONS(648), 1,
      anon_sym_RBRACE,
    STATE(300), 1,
      sym_enum_description,
  [8565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_map_entry,
  [8578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(252), 1,
      sym_map_entry,
  [8591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      anon_sym_RBRACE,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_setup_rule_repeat1,
  [8604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(238), 1,
      aux_sym_setup_rule_repeat1,
  [8617] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(276), 1,
      aux_sym_qualified_identifier_repeat1,
  [8627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      anon_sym_timeout_COLON,
  [8645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      anon_sym_timeout_COLON,
  [8655] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      anon_sym_timeout_COLON,
  [8665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_constants,
    STATE(279), 1,
      sym_constants,
  [8675] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    ACTIONS(682), 1,
      anon_sym_default_COLON,
  [8685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(389), 1,
      sym_value_map,
  [8695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(686), 1,
      sym_identifier,
    STATE(276), 1,
      aux_sym_qualified_identifier_repeat1,
  [8713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 1,
      anon_sym_timeout_COLON,
  [8731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_variables,
    STATE(289), 1,
      sym_variables,
  [8741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 1,
      anon_sym_default_COLON,
  [8751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 1,
      anon_sym_timeout_COLON,
  [8761] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    ACTIONS(707), 1,
      anon_sym_timeout_COLON,
  [8771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_argument_list,
  [8781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(246), 1,
      sym_number_range,
  [8791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 1,
      anon_sym_timeout_COLON,
  [8809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(383), 1,
      sym_value_map,
  [8819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(227), 1,
      sym_number_range,
  [8829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_per_DASHplayer,
    STATE(293), 1,
      sym_per_player,
  [8839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_body,
  [8849] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(379), 1,
      sym_value_map,
  [8859] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      anon_sym_default_COLON,
  [8869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_per_DASHaudience,
    STATE(303), 1,
      sym_per_audience,
  [8879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_body,
  [8897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_body,
  [8923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
    ACTIONS(737), 1,
      anon_sym_default_COLON,
  [8933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(375), 1,
      sym_number_range,
  [8951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_LBRACE,
    STATE(373), 1,
      sym_value_map,
  [8961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_rules,
    STATE(371), 1,
      sym_rules,
  [8971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 1,
      anon_sym_timeout_COLON,
  [8981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8989] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
    STATE(367), 1,
      sym_body,
  [8999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9007] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(305), 1,
      sym_map_entry,
  [9017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      anon_sym_default_COLON,
  [9027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_argument_list,
  [9037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_body,
  [9047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LBRACK,
    STATE(338), 1,
      sym_list_literal,
  [9065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9081] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_RBRACE,
    ACTIONS(763), 1,
      anon_sym_default_COLON,
  [9091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      sym_identifier,
    STATE(300), 1,
      sym_enum_description,
  [9101] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_LBRACE,
    ACTIONS(775), 1,
      anon_sym_anonymously,
  [9143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    ACTIONS(781), 1,
      anon_sym_by,
  [9161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      anon_sym_default_COLON,
  [9171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_RBRACE,
    ACTIONS(793), 1,
      anon_sym_default_COLON,
  [9197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [9221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
  [9228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_setup_COLON,
  [9235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_COLON,
  [9242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_identifier,
  [9249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [9256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
  [9263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_SEMI,
  [9270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
  [9277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_LBRACE,
  [9284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_SEMI,
  [9291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_DOT,
  [9298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_SEMI,
  [9305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_RBRACE,
  [9312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACE,
  [9319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_with,
  [9326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SEMI,
  [9333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_in,
  [9340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_in,
  [9347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_LBRACE,
  [9354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_RPAREN,
  [9361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_LT_DASH,
  [9368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_from,
  [9375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_to,
  [9382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_to,
  [9389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_to,
  [9396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_to,
  [9403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_for,
  [9410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_SEMI,
  [9417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_identifier,
  [9424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      sym_identifier,
  [9431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
  [9438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_prompt_COLON,
  [9445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
  [9452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_LBRACE,
  [9459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      sym_number,
  [9466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      ts_builtin_sym_end,
  [9473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_prompt_COLON,
  [9480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_RBRACK,
  [9487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_COMMA,
  [9494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      ts_builtin_sym_end,
  [9501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_prompt_COLON,
  [9508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_rules,
  [9515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_prompt_COLON,
  [9522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_audience_COLON,
  [9529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_number,
  [9536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_LBRACE,
  [9543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_constants,
  [9550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_per_DASHaudience,
  [9557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_kind_COLON,
  [9564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_RBRACE,
  [9571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_prompt_COLON,
  [9578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_per_DASHplayer,
  [9585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_COLON,
  [9592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      anon_sym_playerrange_COLON,
  [9599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_constants,
  [9606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_prompt_COLON,
  [9613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACK,
  [9620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_variables,
  [9627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      sym_quoted_string,
  [9634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      sym_quoted_string,
  [9641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
  [9648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_quoted_string,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
  [9662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_name_COLON,
  [9669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_LBRACE,
  [9676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 99,
  [SMALL_STATE(4)] = 198,
  [SMALL_STATE(5)] = 297,
  [SMALL_STATE(6)] = 396,
  [SMALL_STATE(7)] = 495,
  [SMALL_STATE(8)] = 594,
  [SMALL_STATE(9)] = 693,
  [SMALL_STATE(10)] = 736,
  [SMALL_STATE(11)] = 779,
  [SMALL_STATE(12)] = 822,
  [SMALL_STATE(13)] = 865,
  [SMALL_STATE(14)] = 905,
  [SMALL_STATE(15)] = 944,
  [SMALL_STATE(16)] = 995,
  [SMALL_STATE(17)] = 1036,
  [SMALL_STATE(18)] = 1075,
  [SMALL_STATE(19)] = 1114,
  [SMALL_STATE(20)] = 1153,
  [SMALL_STATE(21)] = 1208,
  [SMALL_STATE(22)] = 1261,
  [SMALL_STATE(23)] = 1300,
  [SMALL_STATE(24)] = 1339,
  [SMALL_STATE(25)] = 1378,
  [SMALL_STATE(26)] = 1419,
  [SMALL_STATE(27)] = 1458,
  [SMALL_STATE(28)] = 1505,
  [SMALL_STATE(29)] = 1550,
  [SMALL_STATE(30)] = 1581,
  [SMALL_STATE(31)] = 1632,
  [SMALL_STATE(32)] = 1663,
  [SMALL_STATE(33)] = 1694,
  [SMALL_STATE(34)] = 1725,
  [SMALL_STATE(35)] = 1756,
  [SMALL_STATE(36)] = 1787,
  [SMALL_STATE(37)] = 1820,
  [SMALL_STATE(38)] = 1851,
  [SMALL_STATE(39)] = 1900,
  [SMALL_STATE(40)] = 1947,
  [SMALL_STATE(41)] = 1978,
  [SMALL_STATE(42)] = 2023,
  [SMALL_STATE(43)] = 2054,
  [SMALL_STATE(44)] = 2087,
  [SMALL_STATE(45)] = 2128,
  [SMALL_STATE(46)] = 2159,
  [SMALL_STATE(47)] = 2190,
  [SMALL_STATE(48)] = 2221,
  [SMALL_STATE(49)] = 2252,
  [SMALL_STATE(50)] = 2289,
  [SMALL_STATE(51)] = 2318,
  [SMALL_STATE(52)] = 2347,
  [SMALL_STATE(53)] = 2376,
  [SMALL_STATE(54)] = 2405,
  [SMALL_STATE(55)] = 2434,
  [SMALL_STATE(56)] = 2463,
  [SMALL_STATE(57)] = 2492,
  [SMALL_STATE(58)] = 2521,
  [SMALL_STATE(59)] = 2550,
  [SMALL_STATE(60)] = 2579,
  [SMALL_STATE(61)] = 2608,
  [SMALL_STATE(62)] = 2637,
  [SMALL_STATE(63)] = 2666,
  [SMALL_STATE(64)] = 2695,
  [SMALL_STATE(65)] = 2724,
  [SMALL_STATE(66)] = 2753,
  [SMALL_STATE(67)] = 2782,
  [SMALL_STATE(68)] = 2811,
  [SMALL_STATE(69)] = 2840,
  [SMALL_STATE(70)] = 2869,
  [SMALL_STATE(71)] = 2898,
  [SMALL_STATE(72)] = 2927,
  [SMALL_STATE(73)] = 2956,
  [SMALL_STATE(74)] = 2985,
  [SMALL_STATE(75)] = 3014,
  [SMALL_STATE(76)] = 3043,
  [SMALL_STATE(77)] = 3072,
  [SMALL_STATE(78)] = 3101,
  [SMALL_STATE(79)] = 3130,
  [SMALL_STATE(80)] = 3159,
  [SMALL_STATE(81)] = 3188,
  [SMALL_STATE(82)] = 3217,
  [SMALL_STATE(83)] = 3246,
  [SMALL_STATE(84)] = 3275,
  [SMALL_STATE(85)] = 3304,
  [SMALL_STATE(86)] = 3333,
  [SMALL_STATE(87)] = 3362,
  [SMALL_STATE(88)] = 3391,
  [SMALL_STATE(89)] = 3440,
  [SMALL_STATE(90)] = 3486,
  [SMALL_STATE(91)] = 3527,
  [SMALL_STATE(92)] = 3568,
  [SMALL_STATE(93)] = 3608,
  [SMALL_STATE(94)] = 3650,
  [SMALL_STATE(95)] = 3692,
  [SMALL_STATE(96)] = 3734,
  [SMALL_STATE(97)] = 3776,
  [SMALL_STATE(98)] = 3818,
  [SMALL_STATE(99)] = 3860,
  [SMALL_STATE(100)] = 3899,
  [SMALL_STATE(101)] = 3940,
  [SMALL_STATE(102)] = 3979,
  [SMALL_STATE(103)] = 4018,
  [SMALL_STATE(104)] = 4057,
  [SMALL_STATE(105)] = 4096,
  [SMALL_STATE(106)] = 4135,
  [SMALL_STATE(107)] = 4176,
  [SMALL_STATE(108)] = 4215,
  [SMALL_STATE(109)] = 4254,
  [SMALL_STATE(110)] = 4293,
  [SMALL_STATE(111)] = 4332,
  [SMALL_STATE(112)] = 4371,
  [SMALL_STATE(113)] = 4410,
  [SMALL_STATE(114)] = 4449,
  [SMALL_STATE(115)] = 4488,
  [SMALL_STATE(116)] = 4527,
  [SMALL_STATE(117)] = 4566,
  [SMALL_STATE(118)] = 4605,
  [SMALL_STATE(119)] = 4644,
  [SMALL_STATE(120)] = 4685,
  [SMALL_STATE(121)] = 4724,
  [SMALL_STATE(122)] = 4763,
  [SMALL_STATE(123)] = 4802,
  [SMALL_STATE(124)] = 4843,
  [SMALL_STATE(125)] = 4884,
  [SMALL_STATE(126)] = 4923,
  [SMALL_STATE(127)] = 4962,
  [SMALL_STATE(128)] = 5001,
  [SMALL_STATE(129)] = 5040,
  [SMALL_STATE(130)] = 5079,
  [SMALL_STATE(131)] = 5118,
  [SMALL_STATE(132)] = 5157,
  [SMALL_STATE(133)] = 5196,
  [SMALL_STATE(134)] = 5235,
  [SMALL_STATE(135)] = 5274,
  [SMALL_STATE(136)] = 5313,
  [SMALL_STATE(137)] = 5352,
  [SMALL_STATE(138)] = 5391,
  [SMALL_STATE(139)] = 5430,
  [SMALL_STATE(140)] = 5471,
  [SMALL_STATE(141)] = 5510,
  [SMALL_STATE(142)] = 5549,
  [SMALL_STATE(143)] = 5588,
  [SMALL_STATE(144)] = 5627,
  [SMALL_STATE(145)] = 5668,
  [SMALL_STATE(146)] = 5709,
  [SMALL_STATE(147)] = 5748,
  [SMALL_STATE(148)] = 5783,
  [SMALL_STATE(149)] = 5818,
  [SMALL_STATE(150)] = 5853,
  [SMALL_STATE(151)] = 5888,
  [SMALL_STATE(152)] = 5923,
  [SMALL_STATE(153)] = 5958,
  [SMALL_STATE(154)] = 5993,
  [SMALL_STATE(155)] = 6028,
  [SMALL_STATE(156)] = 6063,
  [SMALL_STATE(157)] = 6098,
  [SMALL_STATE(158)] = 6133,
  [SMALL_STATE(159)] = 6168,
  [SMALL_STATE(160)] = 6203,
  [SMALL_STATE(161)] = 6238,
  [SMALL_STATE(162)] = 6273,
  [SMALL_STATE(163)] = 6308,
  [SMALL_STATE(164)] = 6343,
  [SMALL_STATE(165)] = 6378,
  [SMALL_STATE(166)] = 6413,
  [SMALL_STATE(167)] = 6448,
  [SMALL_STATE(168)] = 6483,
  [SMALL_STATE(169)] = 6518,
  [SMALL_STATE(170)] = 6553,
  [SMALL_STATE(171)] = 6588,
  [SMALL_STATE(172)] = 6623,
  [SMALL_STATE(173)] = 6658,
  [SMALL_STATE(174)] = 6693,
  [SMALL_STATE(175)] = 6728,
  [SMALL_STATE(176)] = 6763,
  [SMALL_STATE(177)] = 6798,
  [SMALL_STATE(178)] = 6833,
  [SMALL_STATE(179)] = 6868,
  [SMALL_STATE(180)] = 6903,
  [SMALL_STATE(181)] = 6938,
  [SMALL_STATE(182)] = 6973,
  [SMALL_STATE(183)] = 7008,
  [SMALL_STATE(184)] = 7043,
  [SMALL_STATE(185)] = 7078,
  [SMALL_STATE(186)] = 7113,
  [SMALL_STATE(187)] = 7148,
  [SMALL_STATE(188)] = 7183,
  [SMALL_STATE(189)] = 7218,
  [SMALL_STATE(190)] = 7253,
  [SMALL_STATE(191)] = 7288,
  [SMALL_STATE(192)] = 7323,
  [SMALL_STATE(193)] = 7358,
  [SMALL_STATE(194)] = 7393,
  [SMALL_STATE(195)] = 7428,
  [SMALL_STATE(196)] = 7463,
  [SMALL_STATE(197)] = 7498,
  [SMALL_STATE(198)] = 7533,
  [SMALL_STATE(199)] = 7568,
  [SMALL_STATE(200)] = 7603,
  [SMALL_STATE(201)] = 7638,
  [SMALL_STATE(202)] = 7673,
  [SMALL_STATE(203)] = 7708,
  [SMALL_STATE(204)] = 7743,
  [SMALL_STATE(205)] = 7778,
  [SMALL_STATE(206)] = 7796,
  [SMALL_STATE(207)] = 7814,
  [SMALL_STATE(208)] = 7832,
  [SMALL_STATE(209)] = 7849,
  [SMALL_STATE(210)] = 7865,
  [SMALL_STATE(211)] = 7881,
  [SMALL_STATE(212)] = 7894,
  [SMALL_STATE(213)] = 7907,
  [SMALL_STATE(214)] = 7923,
  [SMALL_STATE(215)] = 7939,
  [SMALL_STATE(216)] = 7953,
  [SMALL_STATE(217)] = 7967,
  [SMALL_STATE(218)] = 7981,
  [SMALL_STATE(219)] = 7995,
  [SMALL_STATE(220)] = 8009,
  [SMALL_STATE(221)] = 8025,
  [SMALL_STATE(222)] = 8038,
  [SMALL_STATE(223)] = 8051,
  [SMALL_STATE(224)] = 8064,
  [SMALL_STATE(225)] = 8077,
  [SMALL_STATE(226)] = 8088,
  [SMALL_STATE(227)] = 8101,
  [SMALL_STATE(228)] = 8114,
  [SMALL_STATE(229)] = 8127,
  [SMALL_STATE(230)] = 8140,
  [SMALL_STATE(231)] = 8149,
  [SMALL_STATE(232)] = 8162,
  [SMALL_STATE(233)] = 8175,
  [SMALL_STATE(234)] = 8188,
  [SMALL_STATE(235)] = 8201,
  [SMALL_STATE(236)] = 8214,
  [SMALL_STATE(237)] = 8227,
  [SMALL_STATE(238)] = 8240,
  [SMALL_STATE(239)] = 8253,
  [SMALL_STATE(240)] = 8266,
  [SMALL_STATE(241)] = 8279,
  [SMALL_STATE(242)] = 8292,
  [SMALL_STATE(243)] = 8305,
  [SMALL_STATE(244)] = 8318,
  [SMALL_STATE(245)] = 8331,
  [SMALL_STATE(246)] = 8344,
  [SMALL_STATE(247)] = 8357,
  [SMALL_STATE(248)] = 8370,
  [SMALL_STATE(249)] = 8383,
  [SMALL_STATE(250)] = 8396,
  [SMALL_STATE(251)] = 8409,
  [SMALL_STATE(252)] = 8422,
  [SMALL_STATE(253)] = 8435,
  [SMALL_STATE(254)] = 8448,
  [SMALL_STATE(255)] = 8461,
  [SMALL_STATE(256)] = 8474,
  [SMALL_STATE(257)] = 8487,
  [SMALL_STATE(258)] = 8500,
  [SMALL_STATE(259)] = 8513,
  [SMALL_STATE(260)] = 8526,
  [SMALL_STATE(261)] = 8539,
  [SMALL_STATE(262)] = 8552,
  [SMALL_STATE(263)] = 8565,
  [SMALL_STATE(264)] = 8578,
  [SMALL_STATE(265)] = 8591,
  [SMALL_STATE(266)] = 8604,
  [SMALL_STATE(267)] = 8617,
  [SMALL_STATE(268)] = 8627,
  [SMALL_STATE(269)] = 8635,
  [SMALL_STATE(270)] = 8645,
  [SMALL_STATE(271)] = 8655,
  [SMALL_STATE(272)] = 8665,
  [SMALL_STATE(273)] = 8675,
  [SMALL_STATE(274)] = 8685,
  [SMALL_STATE(275)] = 8695,
  [SMALL_STATE(276)] = 8703,
  [SMALL_STATE(277)] = 8713,
  [SMALL_STATE(278)] = 8721,
  [SMALL_STATE(279)] = 8731,
  [SMALL_STATE(280)] = 8741,
  [SMALL_STATE(281)] = 8751,
  [SMALL_STATE(282)] = 8761,
  [SMALL_STATE(283)] = 8771,
  [SMALL_STATE(284)] = 8781,
  [SMALL_STATE(285)] = 8791,
  [SMALL_STATE(286)] = 8799,
  [SMALL_STATE(287)] = 8809,
  [SMALL_STATE(288)] = 8819,
  [SMALL_STATE(289)] = 8829,
  [SMALL_STATE(290)] = 8839,
  [SMALL_STATE(291)] = 8849,
  [SMALL_STATE(292)] = 8859,
  [SMALL_STATE(293)] = 8869,
  [SMALL_STATE(294)] = 8879,
  [SMALL_STATE(295)] = 8887,
  [SMALL_STATE(296)] = 8897,
  [SMALL_STATE(297)] = 8905,
  [SMALL_STATE(298)] = 8913,
  [SMALL_STATE(299)] = 8923,
  [SMALL_STATE(300)] = 8933,
  [SMALL_STATE(301)] = 8941,
  [SMALL_STATE(302)] = 8951,
  [SMALL_STATE(303)] = 8961,
  [SMALL_STATE(304)] = 8971,
  [SMALL_STATE(305)] = 8981,
  [SMALL_STATE(306)] = 8989,
  [SMALL_STATE(307)] = 8999,
  [SMALL_STATE(308)] = 9007,
  [SMALL_STATE(309)] = 9017,
  [SMALL_STATE(310)] = 9027,
  [SMALL_STATE(311)] = 9037,
  [SMALL_STATE(312)] = 9047,
  [SMALL_STATE(313)] = 9055,
  [SMALL_STATE(314)] = 9065,
  [SMALL_STATE(315)] = 9073,
  [SMALL_STATE(316)] = 9081,
  [SMALL_STATE(317)] = 9091,
  [SMALL_STATE(318)] = 9101,
  [SMALL_STATE(319)] = 9109,
  [SMALL_STATE(320)] = 9117,
  [SMALL_STATE(321)] = 9125,
  [SMALL_STATE(322)] = 9133,
  [SMALL_STATE(323)] = 9143,
  [SMALL_STATE(324)] = 9151,
  [SMALL_STATE(325)] = 9161,
  [SMALL_STATE(326)] = 9171,
  [SMALL_STATE(327)] = 9179,
  [SMALL_STATE(328)] = 9187,
  [SMALL_STATE(329)] = 9197,
  [SMALL_STATE(330)] = 9205,
  [SMALL_STATE(331)] = 9213,
  [SMALL_STATE(332)] = 9221,
  [SMALL_STATE(333)] = 9228,
  [SMALL_STATE(334)] = 9235,
  [SMALL_STATE(335)] = 9242,
  [SMALL_STATE(336)] = 9249,
  [SMALL_STATE(337)] = 9256,
  [SMALL_STATE(338)] = 9263,
  [SMALL_STATE(339)] = 9270,
  [SMALL_STATE(340)] = 9277,
  [SMALL_STATE(341)] = 9284,
  [SMALL_STATE(342)] = 9291,
  [SMALL_STATE(343)] = 9298,
  [SMALL_STATE(344)] = 9305,
  [SMALL_STATE(345)] = 9312,
  [SMALL_STATE(346)] = 9319,
  [SMALL_STATE(347)] = 9326,
  [SMALL_STATE(348)] = 9333,
  [SMALL_STATE(349)] = 9340,
  [SMALL_STATE(350)] = 9347,
  [SMALL_STATE(351)] = 9354,
  [SMALL_STATE(352)] = 9361,
  [SMALL_STATE(353)] = 9368,
  [SMALL_STATE(354)] = 9375,
  [SMALL_STATE(355)] = 9382,
  [SMALL_STATE(356)] = 9389,
  [SMALL_STATE(357)] = 9396,
  [SMALL_STATE(358)] = 9403,
  [SMALL_STATE(359)] = 9410,
  [SMALL_STATE(360)] = 9417,
  [SMALL_STATE(361)] = 9424,
  [SMALL_STATE(362)] = 9431,
  [SMALL_STATE(363)] = 9438,
  [SMALL_STATE(364)] = 9445,
  [SMALL_STATE(365)] = 9452,
  [SMALL_STATE(366)] = 9459,
  [SMALL_STATE(367)] = 9466,
  [SMALL_STATE(368)] = 9473,
  [SMALL_STATE(369)] = 9480,
  [SMALL_STATE(370)] = 9487,
  [SMALL_STATE(371)] = 9494,
  [SMALL_STATE(372)] = 9501,
  [SMALL_STATE(373)] = 9508,
  [SMALL_STATE(374)] = 9515,
  [SMALL_STATE(375)] = 9522,
  [SMALL_STATE(376)] = 9529,
  [SMALL_STATE(377)] = 9536,
  [SMALL_STATE(378)] = 9543,
  [SMALL_STATE(379)] = 9550,
  [SMALL_STATE(380)] = 9557,
  [SMALL_STATE(381)] = 9564,
  [SMALL_STATE(382)] = 9571,
  [SMALL_STATE(383)] = 9578,
  [SMALL_STATE(384)] = 9585,
  [SMALL_STATE(385)] = 9592,
  [SMALL_STATE(386)] = 9599,
  [SMALL_STATE(387)] = 9606,
  [SMALL_STATE(388)] = 9613,
  [SMALL_STATE(389)] = 9620,
  [SMALL_STATE(390)] = 9627,
  [SMALL_STATE(391)] = 9634,
  [SMALL_STATE(392)] = 9641,
  [SMALL_STATE(393)] = 9648,
  [SMALL_STATE(394)] = 9655,
  [SMALL_STATE(395)] = 9662,
  [SMALL_STATE(396)] = 9669,
  [SMALL_STATE(397)] = 9676,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(361),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(204),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(360),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(311),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(195),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(260),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(258),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(255),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(253),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(187),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(186),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(358),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(357),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(356),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(355),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(354),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(119),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(313),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(210),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_map, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_map, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_map, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_map, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_map, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_map, 4),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_map, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_map, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 7),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 7),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, .production_id = 4),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3, .production_id = 6),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3, .production_id = 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 8),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 13),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4, .production_id = 9),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_set, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player_set, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 15, .production_id = 51),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 15, .production_id = 51),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 5, .production_id = 19),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 5, .production_id = 19),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deal, 7, .production_id = 25),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deal, 7, .production_id = 25),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 13, .production_id = 40),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 13, .production_id = 40),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 11, .production_id = 31),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 11, .production_id = 31),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 11, .production_id = 32),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 11, .production_id = 32),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reverse, 3, .production_id = 11),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reverse, 3, .production_id = 11),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3, .production_id = 10),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle, 3, .production_id = 11),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shuffle, 3, .production_id = 11),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parallel, 2, .production_id = 5),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_parallel, 2, .production_id = 5),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 14, .production_id = 45),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 14, .production_id = 45),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 13, .production_id = 39),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 13, .production_id = 39),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 3, .production_id = 11),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 3, .production_id = 11),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 6, .production_id = 24),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 6, .production_id = 24),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 17, .production_id = 58),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 17, .production_id = 58),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 12, .production_id = 35),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 12, .production_id = 35),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 4, .production_id = 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 4, .production_id = 14),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_text, 11, .production_id = 30),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_text, 11, .production_id = 30),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_text, 9, .production_id = 27),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_text, 9, .production_id = 27),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_choice, 11, .production_id = 29),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_choice, 11, .production_id = 29),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 13, .production_id = 38),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 13, .production_id = 38),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_choice, 13, .production_id = 37),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_choice, 13, .production_id = 37),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 15, .production_id = 49),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 15, .production_id = 49),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 15, .production_id = 50),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 15, .production_id = 50),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 13, .production_id = 41),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 13, .production_id = 41),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 5, .production_id = 22),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 5, .production_id = 22),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 5, .production_id = 21),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 5, .production_id = 21),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 5, .production_id = 20),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 5, .production_id = 20),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 7, .production_id = 26),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 7, .production_id = 26),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 11),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 11),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_for, 5, .production_id = 18),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_for, 5, .production_id = 18),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 18),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 18),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 16),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 16),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, .production_id = 15),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4, .production_id = 15),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scores, 3, .production_id = 12),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scores, 3, .production_id = 12),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3, .production_id = 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(264),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(148),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(170),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(24),
  [423] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(13),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(24),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(124),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_entry, 3, .production_id = 23),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_entry, 3, .production_id = 23),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_range, 5),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(156),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(345),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setup_rule_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_rule_repeat1, 2), SHIFT_REPEAT(317),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_map_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_map_repeat1, 2), SHIFT_REPEAT(308),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 14, .production_id = 55),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 9, .production_id = 33),
  [686] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(342),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 10, .production_id = 36),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 7, .production_id = 28),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 11, .production_id = 42),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_description, 3, .production_id = 43),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 11, .production_id = 44),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 12, .production_id = 46),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 12, .production_id = 47),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 12, .production_id = 48),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 17, .production_id = 63),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 16, .production_id = 62),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 15, .production_id = 61),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 15, .production_id = 60),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 15, .production_id = 59),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 13, .production_id = 52),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 14, .production_id = 57),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 13, .production_id = 53),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 13, .production_id = 54),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 14, .production_id = 56),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 9, .production_id = 34),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [865] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2, .production_id = 5),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 6, .production_id = 3),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_per_audience, 2, .production_id = 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 12, .production_id = 17),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_per_player, 2, .production_id = 1),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2, .production_id = 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 13, .production_id = 17),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2, .production_id = 1),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [925] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_socialgaming(void) {
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
