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
#define STATE_COUNT 368
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 0
#define TOKEN_COUNT 89
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 44
#define MAX_ALIAS_SEQUENCE_LENGTH 17
#define PRODUCTION_ID_COUNT 54

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
  anon_sym_COLON = 20,
  anon_sym_constants = 21,
  anon_sym_variables = 22,
  anon_sym_per_DASHplayer = 23,
  anon_sym_per_DASHaudience = 24,
  anon_sym_rules = 25,
  anon_sym_for = 26,
  anon_sym_in = 27,
  anon_sym_while = 28,
  anon_sym_parallelfor = 29,
  anon_sym_inparallel = 30,
  anon_sym_match = 31,
  anon_sym_EQ_GT = 32,
  anon_sym_extend = 33,
  anon_sym_with = 34,
  anon_sym_SEMI = 35,
  anon_sym_reverse = 36,
  anon_sym_shuffle = 37,
  anon_sym_sort = 38,
  anon_sym_by = 39,
  anon_sym_deal = 40,
  anon_sym_to = 41,
  anon_sym_from = 42,
  anon_sym_discard = 43,
  anon_sym_LT_DASH = 44,
  anon_sym_time = 45,
  anon_sym_atmost = 46,
  anon_sym_exactly = 47,
  anon_sym_inputchoice = 48,
  anon_sym_target_COLON = 49,
  anon_sym_timeout_COLON = 50,
  anon_sym_inputtext = 51,
  anon_sym_inputrange = 52,
  anon_sym_low_COLON = 53,
  anon_sym_high_COLON = 54,
  anon_sym_inputvote = 55,
  anon_sym_anonymously = 56,
  anon_sym_message = 57,
  anon_sym_scores = 58,
  anon_sym_LPAREN = 59,
  anon_sym_RPAREN = 60,
  anon_sym_PIPE_PIPE = 61,
  anon_sym_AMP_AMP = 62,
  anon_sym_EQ = 63,
  anon_sym_BANG_EQ = 64,
  anon_sym_LT = 65,
  anon_sym_LT_EQ = 66,
  anon_sym_GT = 67,
  anon_sym_GT_EQ = 68,
  anon_sym_PLUS = 69,
  anon_sym_DASH = 70,
  anon_sym_STAR = 71,
  anon_sym_SLASH = 72,
  anon_sym_PERCENT = 73,
  anon_sym_BANG = 74,
  anon_sym_DOT = 75,
  anon_sym_upfrom = 76,
  anon_sym_size = 77,
  anon_sym_contains = 78,
  anon_sym_collect = 79,
  sym_number = 80,
  anon_sym_true = 81,
  anon_sym_false = 82,
  sym_quoted_string = 83,
  sym_identifier = 84,
  anon_sym_LBRACK = 85,
  anon_sym_RBRACK = 86,
  anon_sym_all = 87,
  sym_comment = 88,
  sym_game = 89,
  sym_configuration = 90,
  sym_setup_rule = 91,
  sym_enum_description = 92,
  sym_constants = 93,
  sym_variables = 94,
  sym_per_player = 95,
  sym_per_audience = 96,
  sym_rules = 97,
  sym_rule = 98,
  sym_for = 99,
  sym_loop = 100,
  sym_parallel_for = 101,
  sym_in_parallel = 102,
  sym_match = 103,
  sym_match_entry = 104,
  sym_extend = 105,
  sym_reverse = 106,
  sym_shuffle = 107,
  sym_sort = 108,
  sym_deal = 109,
  sym_discard = 110,
  sym_assignment = 111,
  sym_timer = 112,
  sym_input_choice = 113,
  sym_input_text = 114,
  sym_input_range = 115,
  sym_input_vote = 116,
  sym_message = 117,
  sym_scores = 118,
  sym_expression = 119,
  sym_builtin = 120,
  sym_argument_list = 121,
  sym_boolean = 122,
  sym_number_range = 123,
  sym_expression_list = 124,
  sym_list_literal = 125,
  sym_map_entry = 126,
  sym_value_map = 127,
  sym_qualified_identifier = 128,
  sym_player_set = 129,
  sym_body = 130,
  aux_sym_configuration_repeat1 = 131,
  aux_sym_setup_rule_repeat1 = 132,
  aux_sym_match_repeat1 = 133,
  aux_sym_expression_list_repeat1 = 134,
  aux_sym_value_map_repeat1 = 135,
  aux_sym_qualified_identifier_repeat1 = 136,
  aux_sym_body_repeat1 = 137,
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
  field_description = 11,
  field_duration = 12,
  field_element = 13,
  field_elements = 14,
  field_flag = 15,
  field_guard = 16,
  field_has_audience = 17,
  field_high_label = 18,
  field_identifier = 19,
  field_key = 20,
  field_keys = 21,
  field_kind = 22,
  field_lhs = 23,
  field_list = 24,
  field_low_label = 25,
  field_map = 26,
  field_mode = 27,
  field_name = 28,
  field_operand = 29,
  field_per_audience = 30,
  field_per_player = 31,
  field_player = 32,
  field_player_range = 33,
  field_players = 34,
  field_prompt = 35,
  field_range = 36,
  field_rhs = 37,
  field_rules = 38,
  field_source = 39,
  field_target = 40,
  field_targets = 41,
  field_timeout = 42,
  field_value = 43,
  field_variables = 44,
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
  [34] = {.index = 80, .length = 5},
  [35] = {.index = 85, .length = 5},
  [36] = {.index = 90, .length = 5},
  [37] = {.index = 95, .length = 5},
  [38] = {.index = 100, .length = 6},
  [39] = {.index = 106, .length = 6},
  [40] = {.index = 112, .length = 5},
  [41] = {.index = 117, .length = 2},
  [42] = {.index = 119, .length = 6},
  [43] = {.index = 125, .length = 6},
  [44] = {.index = 131, .length = 6},
  [45] = {.index = 137, .length = 7},
  [46] = {.index = 144, .length = 7},
  [47] = {.index = 151, .length = 8},
  [48] = {.index = 159, .length = 7},
  [49] = {.index = 166, .length = 7},
  [50] = {.index = 173, .length = 8},
  [51] = {.index = 181, .length = 8},
  [52] = {.index = 189, .length = 9},
  [53] = {.index = 198, .length = 9},
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
    {field_anonymously, 3},
    {field_choices, 8},
    {field_players, 2},
    {field_prompt, 6},
    {field_target, 10},
  [85] =
    {field_choices, 7},
    {field_choices, 8},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [90] =
    {field_choices, 7},
    {field_player, 2},
    {field_prompt, 5},
    {field_target, 9},
    {field_timeout, 11},
  [95] =
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 9},
    {field_timeout, 11},
  [100] =
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
  [106] =
    {field_high_label, 8},
    {field_high_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
  [112] =
    {field_choices, 7},
    {field_players, 2},
    {field_prompt, 5},
    {field_target, 9},
    {field_timeout, 11},
  [117] =
    {field_description, 2},
    {field_name, 0},
  [119] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [125] =
    {field_anonymously, 3},
    {field_choices, 8},
    {field_players, 2},
    {field_prompt, 6},
    {field_target, 10},
    {field_timeout, 12},
  [131] =
    {field_choices, 9},
    {field_choices, 10},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [137] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_choices, 10},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [144] =
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
    {field_timeout, 13},
  [151] =
    {field_high_label, 10},
    {field_high_label, 11},
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 13},
  [159] =
    {field_high_label, 8},
    {field_high_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 11},
    {field_timeout, 13},
  [166] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [173] =
    {field_choices, 7},
    {field_choices, 8},
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
  [181] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_choices, 12},
    {field_kind, 3},
    {field_name, 0},
    {field_prompt, 5},
    {field_range, 7},
  [189] =
    {field_high_label, 10},
    {field_high_label, 11},
    {field_low_label, 8},
    {field_low_label, 9},
    {field_player, 2},
    {field_prompt, 5},
    {field_range, 7},
    {field_target, 13},
    {field_timeout, 15},
  [198] =
    {field_choices, 9},
    {field_choices, 10},
    {field_choices, 11},
    {field_choices, 12},
    {field_choices, 13},
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
  [5] = 2,
  [6] = 4,
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
  [29] = 25,
  [30] = 14,
  [31] = 26,
  [32] = 32,
  [33] = 9,
  [34] = 28,
  [35] = 15,
  [36] = 24,
  [37] = 22,
  [38] = 20,
  [39] = 10,
  [40] = 21,
  [41] = 27,
  [42] = 16,
  [43] = 13,
  [44] = 11,
  [45] = 19,
  [46] = 12,
  [47] = 17,
  [48] = 18,
  [49] = 23,
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
  [91] = 32,
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
  [109] = 104,
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
  [128] = 107,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 102,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 137,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 141,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 154,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 156,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 160,
  [179] = 138,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 158,
  [184] = 184,
  [185] = 74,
  [186] = 76,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 192,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 207,
  [217] = 215,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 188,
  [224] = 224,
  [225] = 225,
  [226] = 214,
  [227] = 227,
  [228] = 228,
  [229] = 213,
  [230] = 230,
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
  [242] = 208,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
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
  [288] = 260,
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
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 74,
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
  [332] = 332,
  [333] = 333,
  [334] = 76,
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
  [358] = 326,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 337,
  [365] = 365,
  [366] = 366,
  [367] = 367,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(312);
      if (lookahead == '!') ADVANCE(401);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(399);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == ':') ADVANCE(332);
      if (lookahead == ';') ADVANCE(351);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'j') ADVANCE(268);
      if (lookahead == 'k') ADVANCE(142);
      if (lookahead == 'l') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(36);
      if (lookahead == 'q') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(136);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(186);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(122);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(401);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(399);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == '-') ADVANCE(396);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '=') ADVANCE(387);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(399);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == ';') ADVANCE(351);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead == 'v') ADVANCE(46);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(30);
      if (lookahead == '%') ADVANCE(399);
      if (lookahead == '&') ADVANCE(9);
      if (lookahead == ')') ADVANCE(384);
      if (lookahead == '*') ADVANCE(397);
      if (lookahead == '+') ADVANCE(394);
      if (lookahead == ',') ADVANCE(331);
      if (lookahead == '-') ADVANCE(395);
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(398);
      if (lookahead == ';') ADVANCE(351);
      if (lookahead == '<') ADVANCE(390);
      if (lookahead == '=') ADVANCE(388);
      if (lookahead == '>') ADVANCE(392);
      if (lookahead == ']') ADVANCE(509);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(475);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead == 'm') ADVANCE(422);
      if (lookahead == 'p') ADVANCE(423);
      if (lookahead == 'r') ADVANCE(434);
      if (lookahead == 's') ADVANCE(430);
      if (lookahead == 't') ADVANCE(455);
      if (lookahead == 'w') ADVANCE(454);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '|') ADVANCE(310);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(400);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(383);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == '[') ADVANCE(508);
      if (lookahead == 'a') ADVANCE(463);
      if (lookahead == 'f') ADVANCE(426);
      if (lookahead == 't') ADVANCE(485);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '&') ADVANCE(386);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(365);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(402);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(351);
      if (lookahead == '<') ADVANCE(11);
      if (lookahead == 'b') ADVANCE(211);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead == 'j') ADVANCE(268);
      if (lookahead == 'm') ADVANCE(292);
      if (lookahead == 'q') ADVANCE(289);
      if (lookahead == 's') ADVANCE(277);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'w') ADVANCE(144);
      if (lookahead == '{') ADVANCE(314);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(512);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(476);
      if (lookahead == 's') ADVANCE(456);
      if (lookahead == 'u') ADVANCE(479);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '}') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(375);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(376);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(320);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(315);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(329);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(318);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(328);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(371);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(330);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(372);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(317);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(316);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(389);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(299);
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'u') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'p') ADVANCE(179);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(294);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'o') ADVANCE(361);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(176);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(208);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(308);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(288);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(177);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(276);
      if (lookahead == 'h') ADVANCE(290);
      if (lookahead == 'i') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(272);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(227);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(348);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(363);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(405);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(366);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(412);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(414);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(379);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(336);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(374);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(370);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(254);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 110:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'f') ADVANCE(123);
      END_STATE();
    case 120:
      if (lookahead == 'f') ADVANCE(245);
      END_STATE();
    case 121:
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 's') ADVANCE(283);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 123:
      if (lookahead == 'f') ADVANCE(171);
      END_STATE();
    case 124:
      if (lookahead == 'g') ADVANCE(135);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 127:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 131:
      if (lookahead == 'g') ADVANCE(111);
      END_STATE();
    case 132:
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 'h') ADVANCE(350);
      END_STATE();
    case 134:
      if (lookahead == 'h') ADVANCE(345);
      END_STATE();
    case 135:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 136:
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 137:
      if (lookahead == 'h') ADVANCE(214);
      END_STATE();
    case 138:
      if (lookahead == 'h') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(223);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(228);
      END_STATE();
    case 141:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 142:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 143:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 144:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 145:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 146:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 147:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 149:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(169);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 158:
      if (lookahead == 'l') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 't') ADVANCE(1);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 159:
      if (lookahead == 'l') ADVANCE(510);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(359);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(2);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(304);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(278);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 168:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 170:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 171:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 172:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 173:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 174:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 175:
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 176:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 177:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 180:
      if (lookahead == 'm') ADVANCE(324);
      END_STATE();
    case 181:
      if (lookahead == 'm') ADVANCE(362);
      END_STATE();
    case 182:
      if (lookahead == 'm') ADVANCE(403);
      END_STATE();
    case 183:
      if (lookahead == 'm') ADVANCE(231);
      END_STATE();
    case 184:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 186:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 187:
      if (lookahead == 'm') ADVANCE(221);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(327);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(321);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead == 't') ADVANCE(1);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(293);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(306);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(257);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(285);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(260);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(287);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 210:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 211:
      if (lookahead == 'o') ADVANCE(216);
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(181);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(264);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(295);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(192);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(286);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(279);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 234:
      if (lookahead == 'r') ADVANCE(338);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(322);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(3);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(337);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(381);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(407);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(333);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(334);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(301);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 264:
      if (lookahead == 's') ADVANCE(271);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(80);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(368);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(409);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 289:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 290:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(230);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(180);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(265);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 297:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 298:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 299:
      if (lookahead == 'v') ADVANCE(105);
      END_STATE();
    case 300:
      if (lookahead == 'w') ADVANCE(18);
      END_STATE();
    case 301:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 302:
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 303:
      if (lookahead == 'x') ADVANCE(273);
      END_STATE();
    case 304:
      if (lookahead == 'y') ADVANCE(369);
      END_STATE();
    case 305:
      if (lookahead == 'y') ADVANCE(378);
      END_STATE();
    case 306:
      if (lookahead == 'y') ADVANCE(187);
      END_STATE();
    case 307:
      if (lookahead == 'y') ADVANCE(110);
      END_STATE();
    case 308:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 309:
      if (lookahead == 'z') ADVANCE(77);
      END_STATE();
    case 310:
      if (lookahead == '|') ADVANCE(385);
      END_STATE();
    case 311:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_configuration);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_name_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_playerrange_COLON);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_audience_COLON);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_setup_COLON);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_kind_COLON);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_question_DASHanswer);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_multiple_DASHchoice);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_json);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_prompt_COLON);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_range_COLON);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_choices_COLON);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_constants);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_per_DASHplayer);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_per_DASHaudience);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_rules);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_parallelfor);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_inparallel);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_shuffle);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_shuffle);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_by);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_deal);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_deal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_discard);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_discard);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_time);
      if (lookahead == 'o') ADVANCE(296);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_time);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_atmost);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_exactly);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_inputchoice);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_target_COLON);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_timeout_COLON);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_inputtext);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_inputrange);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_low_COLON);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_high_COLON);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_inputvote);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_anonymously);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_scores);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_scores);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(347);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(391);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(393);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(512);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(389);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_upfrom);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_upfrom);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_size);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_size);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_collect);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_collect);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_quoted_string);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(478);
      if (lookahead == 'h') ADVANCE(501);
      if (lookahead == 'o') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(420);
      if (lookahead == 'i') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 'n') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'z') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(507);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_all);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(507);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(512);
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
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 5},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 6},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
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
  [189] = {.lex_state = 14},
  [190] = {.lex_state = 14},
  [191] = {.lex_state = 14},
  [192] = {.lex_state = 16},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 17},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 17},
  [200] = {.lex_state = 17},
  [201] = {.lex_state = 17},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 17},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 17},
  [208] = {.lex_state = 17},
  [209] = {.lex_state = 17},
  [210] = {.lex_state = 17},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 17},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 17},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 17},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 17},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 17},
  [222] = {.lex_state = 17},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 17},
  [226] = {.lex_state = 17},
  [227] = {.lex_state = 17},
  [228] = {.lex_state = 17},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 17},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 17},
  [235] = {.lex_state = 17},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 17},
  [240] = {.lex_state = 17},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 17},
  [243] = {.lex_state = 17},
  [244] = {.lex_state = 17},
  [245] = {.lex_state = 17},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 17},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 17},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 5},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 5},
  [268] = {.lex_state = 17},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 17},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 17},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 17},
  [275] = {.lex_state = 17},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 17},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 17},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 17},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 17},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 7},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 17},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 17},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 17},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
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
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
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
    [sym_game] = STATE(367),
    [sym_configuration] = STATE(248),
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(3), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(5), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(2), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(294), 1,
      sym_qualified_identifier,
    STATE(8), 2,
      sym_rule,
      aux_sym_body_repeat1,
    STATE(75), 20,
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
  [905] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_EQ,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(141), 20,
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
  [956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 24,
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
  [1001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(157), 27,
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
  [1040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(161), 27,
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
  [1079] = 3,
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
  [1118] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(171), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(169), 26,
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
  [1159] = 3,
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
  [1198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(177), 27,
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
  [1237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(181), 27,
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
  [1276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 27,
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
  [1315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(141), 26,
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
  [1356] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(141), 18,
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
  [1411] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(141), 19,
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
  [1464] = 3,
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
  [1503] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 22,
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
  [1550] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(201), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(203), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1599] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(203), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 9,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(201), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(203), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 7,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1691] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_AMP_AMP,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(219), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(201), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(203), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 4,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(217), 5,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [1742] = 3,
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
  [1773] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_PLUS,
    ACTIONS(209), 1,
      anon_sym_DASH,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 11,
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
  [1814] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(211), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(143), 7,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 12,
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
  [1851] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(143), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(141), 14,
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
  [1884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(181), 15,
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
  [1915] = 3,
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
  [1946] = 3,
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
  [1977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(177), 15,
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
  [2008] = 3,
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
  [2039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(157), 15,
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
  [2070] = 3,
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
  [2101] = 3,
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
  [2132] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(171), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(169), 14,
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
  [2165] = 3,
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
  [2196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(161), 15,
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
  [2227] = 3,
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
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_BANG,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(185), 15,
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
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(375), 1,
      anon_sym_in,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(68), 1,
      sym_body,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(377), 2,
      anon_sym_atmost,
      anon_sym_exactly,
  [3440] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3486] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(385), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3527] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(217), 3,
      anon_sym_LBRACE,
      anon_sym_from,
      anon_sym_anonymously,
  [3568] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(387), 1,
      anon_sym_target_COLON,
    ACTIONS(389), 1,
      anon_sym_high_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3610] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LBRACE,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(396), 1,
      anon_sym_LPAREN,
    ACTIONS(399), 1,
      anon_sym_BANG,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_expression,
    ACTIONS(402), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(405), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
      sym_match_entry,
      aux_sym_match_repeat1,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [3652] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(58), 1,
      sym_body,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3694] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(51), 1,
      sym_body,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3736] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(93), 2,
      sym_match_entry,
      aux_sym_match_repeat1,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [3778] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(430), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [3818] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    STATE(71), 1,
      sym_body,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3860] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3899] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(434), 1,
      anon_sym_range_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3938] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(436), 1,
      anon_sym_target_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [3977] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4016] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4055] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_expression,
    STATE(358), 1,
      sym_expression_list,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4096] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4135] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(446), 1,
      anon_sym_choices_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4174] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_expression,
    STATE(337), 1,
      sym_expression_list,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4215] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4254] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      sym_expression,
    STATE(326), 1,
      sym_expression_list,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4295] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4334] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4373] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(458), 1,
      anon_sym_choices_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4412] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4451] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(462), 1,
      anon_sym_target_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4490] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_match_entry,
      aux_sym_match_repeat1,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4529] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(464), 1,
      anon_sym_to,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4568] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(466), 1,
      anon_sym_from,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4607] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(468), 1,
      anon_sym_target_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4646] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4685] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(472), 1,
      anon_sym_target_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4724] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(474), 1,
      anon_sym_choices_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4763] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(476), 1,
      anon_sym_all,
    STATE(91), 1,
      sym_expression,
    STATE(293), 1,
      sym_player_set,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4804] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(478), 1,
      anon_sym_SEMI,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4843] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(480), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [4882] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [4921] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_EQ,
    ACTIONS(193), 1,
      anon_sym_BANG_EQ,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(484), 1,
      anon_sym_EQ_GT,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [4962] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    ACTIONS(500), 1,
      anon_sym_all,
    STATE(32), 1,
      sym_expression,
    STATE(166), 1,
      sym_player_set,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5003] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      sym_expression,
    STATE(364), 1,
      sym_expression_list,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5044] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5083] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5122] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(508), 1,
      anon_sym_SEMI,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5161] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(510), 1,
      anon_sym_target_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5200] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(512), 1,
      anon_sym_target_COLON,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5239] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    ACTIONS(476), 1,
      anon_sym_all,
    STATE(91), 1,
      sym_expression,
    STATE(359), 1,
      sym_player_set,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5280] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5319] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 2,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [5358] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5393] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5428] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(119), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5463] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5533] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(95), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5568] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(123), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5603] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5638] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5673] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(103), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5708] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5743] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5778] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5813] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5848] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5883] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5918] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(121), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5953] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(15), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [5988] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6023] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6058] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(136), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6093] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6128] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(118), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6163] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6198] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6233] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(129), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6268] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(130), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6303] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6338] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6373] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(117), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6443] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6478] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(113), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6513] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(88), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6548] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6583] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      anon_sym_BANG,
    ACTIONS(496), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_expression,
    ACTIONS(492), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(494), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(41), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6618] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6653] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(98), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6688] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(125), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6723] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(101), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6758] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6793] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6828] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(135), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6863] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(97), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6898] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(132), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6933] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [6968] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7003] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    ACTIONS(418), 1,
      anon_sym_LPAREN,
    ACTIONS(420), 1,
      anon_sym_BANG,
    ACTIONS(426), 1,
      sym_identifier,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(108), 1,
      sym_expression,
    ACTIONS(422), 2,
      sym_number,
      sym_quoted_string,
    ACTIONS(424), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 3,
      sym_boolean,
      sym_list_literal,
      sym_value_map,
  [7038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(319), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(327), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(518), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(217), 6,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_number,
      sym_quoted_string,
      anon_sym_LBRACK,
  [7109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DOT,
    ACTIONS(522), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_with,
      anon_sym_SEMI,
      anon_sym_by,
      anon_sym_LT_DASH,
      anon_sym_timeout_COLON,
  [7125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DOT,
    ACTIONS(526), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_with,
      anon_sym_SEMI,
      anon_sym_by,
      anon_sym_LT_DASH,
      anon_sym_timeout_COLON,
  [7141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 7,
      anon_sym_boolean,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_enum,
      anon_sym_question_DASHanswer,
      anon_sym_multiple_DASHchoice,
      anon_sym_json,
  [7154] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(288), 1,
      sym_builtin,
    ACTIONS(530), 4,
      anon_sym_upfrom,
      anon_sym_size,
      anon_sym_contains,
      anon_sym_collect,
  [7170] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      sym_identifier,
    STATE(260), 1,
      sym_builtin,
    ACTIONS(530), 4,
      anon_sym_upfrom,
      anon_sym_size,
      anon_sym_contains,
      anon_sym_collect,
  [7186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 6,
      anon_sym_audience_COLON,
      anon_sym_RBRACE,
      anon_sym_choices_COLON,
      anon_sym_target_COLON,
      anon_sym_low_COLON,
      anon_sym_high_COLON,
  [7198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      sym_identifier,
    STATE(195), 2,
      sym_setup_rule,
      aux_sym_configuration_repeat1,
  [7212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    ACTIONS(548), 1,
      sym_identifier,
    STATE(199), 2,
      sym_setup_rule,
      aux_sym_configuration_repeat1,
  [7240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(480), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_identifier,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    STATE(195), 2,
      sym_setup_rule,
      aux_sym_configuration_repeat1,
  [7268] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(556), 1,
      sym_identifier,
    STATE(287), 1,
      sym_enum_description,
  [7281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_enum_description,
  [7294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    ACTIONS(562), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_setup_rule_repeat1,
  [7307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_enum_description,
  [7320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    ACTIONS(566), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_setup_rule_repeat1,
  [7333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_enum_description,
  [7346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    ACTIONS(573), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      aux_sym_setup_rule_repeat1,
  [7359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(217), 1,
      sym_map_entry,
  [7372] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_map_entry,
  [7385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(290), 1,
      sym_qualified_identifier,
  [7398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(276), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7411] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(583), 1,
      anon_sym_in,
    STATE(53), 1,
      sym_body,
  [7424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(266), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    ACTIONS(587), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_value_map_repeat1,
  [7450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_map_entry,
  [7463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACE,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_value_map_repeat1,
  [7476] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_map_entry,
  [7489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_value_map_repeat1,
  [7502] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(317), 1,
      sym_qualified_identifier,
  [7515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(314), 1,
      sym_qualified_identifier,
  [7528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      aux_sym_setup_rule_repeat1,
  [7541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(313), 1,
      sym_qualified_identifier,
  [7554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(273), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_LBRACE,
      anon_sym_from,
      anon_sym_anonymously,
  [7576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    STATE(287), 1,
      sym_enum_description,
  [7589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_enum_description,
  [7602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_map_entry,
  [7615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(264), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(338), 1,
      sym_qualified_identifier,
  [7641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_value_map_repeat1,
  [7654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(305), 1,
      sym_qualified_identifier,
  [7667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_target_COLON,
    ACTIONS(611), 1,
      anon_sym_low_COLON,
    ACTIONS(613), 1,
      anon_sym_high_COLON,
  [7680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      anon_sym_range_COLON,
    ACTIONS(619), 1,
      anon_sym_choices_COLON,
  [7693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(255), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(254), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(250), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_setup_rule_repeat1,
  [7745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(304), 1,
      sym_qualified_identifier,
  [7758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(322), 1,
      sym_boolean,
    ACTIONS(625), 2,
      anon_sym_true,
      anon_sym_false,
  [7769] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(267), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7782] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(265), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7795] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_RBRACE,
    ACTIONS(629), 1,
      anon_sym_COMMA,
    STATE(241), 1,
      aux_sym_value_map_repeat1,
  [7808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(632), 1,
      anon_sym_RBRACE,
    STATE(249), 1,
      sym_map_entry,
  [7821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(361), 1,
      sym_qualified_identifier,
  [7834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(257), 1,
      sym_qualified_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
  [7847] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      sym_identifier,
    STATE(280), 1,
      aux_sym_qualified_identifier_repeat1,
    STATE(356), 1,
      sym_qualified_identifier,
  [7860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym_number_range,
  [7870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_body,
  [7880] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_constants,
    STATE(289), 1,
      sym_constants,
  [7890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [7898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      anon_sym_timeout_COLON,
  [7908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_rules,
    STATE(329), 1,
      sym_rules,
  [7918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(252), 1,
      aux_sym_qualified_identifier_repeat1,
  [7928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_LBRACE,
    STATE(324), 1,
      sym_body,
  [7938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    ACTIONS(651), 1,
      anon_sym_timeout_COLON,
  [7948] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 1,
      anon_sym_timeout_COLON,
  [7958] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(331), 1,
      sym_value_map,
  [7968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 1,
      anon_sym_timeout_COLON,
  [7978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [7986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      sym_identifier,
    STATE(249), 1,
      sym_map_entry,
  [7996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_argument_list,
  [8006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
    STATE(269), 1,
      sym_number_range,
  [8024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      anon_sym_timeout_COLON,
  [8042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      anon_sym_timeout_COLON,
  [8052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_by,
  [8062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    ACTIONS(683), 1,
      anon_sym_timeout_COLON,
  [8072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8080] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      anon_sym_choices_COLON,
  [8090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8098] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_number_range,
  [8108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_body,
  [8126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_body,
  [8152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_body,
  [8162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_per_DASHaudience,
    STATE(251), 1,
      sym_per_audience,
  [8172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(339), 1,
      sym_value_map,
  [8182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      sym_identifier,
    STATE(252), 1,
      aux_sym_qualified_identifier_repeat1,
  [8192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_per_DASHplayer,
    STATE(278), 1,
      sym_per_player,
  [8202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      sym_identifier,
    STATE(287), 1,
      sym_enum_description,
  [8212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_LBRACK,
    STATE(330), 1,
      sym_list_literal,
  [8222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(346), 1,
      sym_value_map,
  [8232] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_argument_list,
  [8266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_variables,
    STATE(281), 1,
      sym_variables,
  [8276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    ACTIONS(717), 1,
      anon_sym_timeout_COLON,
  [8286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [8294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_LBRACE,
    STATE(357), 1,
      sym_value_map,
  [8304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_LBRACE,
    ACTIONS(723), 1,
      anon_sym_anonymously,
  [8314] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LT_DASH,
  [8321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACE,
  [8328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_to,
  [8335] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_for,
  [8342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_to,
  [8349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACE,
  [8356] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_to,
  [8363] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_RBRACE,
  [8370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_to,
  [8377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
  [8384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_LBRACE,
  [8391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
  [8398] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RPAREN,
  [8405] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
  [8412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_in,
  [8419] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_in,
  [8426] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RBRACE,
  [8433] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
  [8440] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      sym_quoted_string,
  [8447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_with,
  [8454] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_SEMI,
  [8461] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
  [8468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_identifier,
  [8475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_SEMI,
  [8482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
  [8489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [8496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_COLON,
  [8503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_LPAREN,
  [8510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_setup_COLON,
  [8517] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      sym_number,
  [8524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      ts_builtin_sym_end,
  [8531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
  [8538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACK,
  [8545] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_LBRACE,
  [8552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_COMMA,
  [8559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      ts_builtin_sym_end,
  [8566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [8573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_rules,
  [8580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      sym_identifier,
  [8587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LBRACE,
  [8594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
  [8601] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_audience_COLON,
  [8608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      sym_number,
  [8615] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_RPAREN,
  [8622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_LBRACE,
  [8629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_per_DASHaudience,
  [8636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
  [8643] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_quoted_string,
  [8650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_prompt_COLON,
  [8657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_constants,
  [8664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_prompt_COLON,
  [8671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
  [8678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_per_DASHplayer,
  [8685] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_kind_COLON,
  [8692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_COLON,
  [8699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_playerrange_COLON,
  [8706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 1,
      anon_sym_constants,
  [8713] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_LBRACE,
  [8720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_prompt_COLON,
  [8727] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_prompt_COLON,
  [8734] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_prompt_COLON,
  [8741] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_prompt_COLON,
  [8748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_SEMI,
  [8755] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_variables,
  [8762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACK,
  [8769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_from,
  [8776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      sym_quoted_string,
  [8783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_SEMI,
  [8790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [8797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [8804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RPAREN,
  [8811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_name_COLON,
  [8818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DOT,
  [8825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
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
  [SMALL_STATE(15)] = 956,
  [SMALL_STATE(16)] = 1001,
  [SMALL_STATE(17)] = 1040,
  [SMALL_STATE(18)] = 1079,
  [SMALL_STATE(19)] = 1118,
  [SMALL_STATE(20)] = 1159,
  [SMALL_STATE(21)] = 1198,
  [SMALL_STATE(22)] = 1237,
  [SMALL_STATE(23)] = 1276,
  [SMALL_STATE(24)] = 1315,
  [SMALL_STATE(25)] = 1356,
  [SMALL_STATE(26)] = 1411,
  [SMALL_STATE(27)] = 1464,
  [SMALL_STATE(28)] = 1503,
  [SMALL_STATE(29)] = 1550,
  [SMALL_STATE(30)] = 1599,
  [SMALL_STATE(31)] = 1644,
  [SMALL_STATE(32)] = 1691,
  [SMALL_STATE(33)] = 1742,
  [SMALL_STATE(34)] = 1773,
  [SMALL_STATE(35)] = 1814,
  [SMALL_STATE(36)] = 1851,
  [SMALL_STATE(37)] = 1884,
  [SMALL_STATE(38)] = 1915,
  [SMALL_STATE(39)] = 1946,
  [SMALL_STATE(40)] = 1977,
  [SMALL_STATE(41)] = 2008,
  [SMALL_STATE(42)] = 2039,
  [SMALL_STATE(43)] = 2070,
  [SMALL_STATE(44)] = 2101,
  [SMALL_STATE(45)] = 2132,
  [SMALL_STATE(46)] = 2165,
  [SMALL_STATE(47)] = 2196,
  [SMALL_STATE(48)] = 2227,
  [SMALL_STATE(49)] = 2258,
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
  [SMALL_STATE(93)] = 3610,
  [SMALL_STATE(94)] = 3652,
  [SMALL_STATE(95)] = 3694,
  [SMALL_STATE(96)] = 3736,
  [SMALL_STATE(97)] = 3778,
  [SMALL_STATE(98)] = 3818,
  [SMALL_STATE(99)] = 3860,
  [SMALL_STATE(100)] = 3899,
  [SMALL_STATE(101)] = 3938,
  [SMALL_STATE(102)] = 3977,
  [SMALL_STATE(103)] = 4016,
  [SMALL_STATE(104)] = 4055,
  [SMALL_STATE(105)] = 4096,
  [SMALL_STATE(106)] = 4135,
  [SMALL_STATE(107)] = 4174,
  [SMALL_STATE(108)] = 4215,
  [SMALL_STATE(109)] = 4254,
  [SMALL_STATE(110)] = 4295,
  [SMALL_STATE(111)] = 4334,
  [SMALL_STATE(112)] = 4373,
  [SMALL_STATE(113)] = 4412,
  [SMALL_STATE(114)] = 4451,
  [SMALL_STATE(115)] = 4490,
  [SMALL_STATE(116)] = 4529,
  [SMALL_STATE(117)] = 4568,
  [SMALL_STATE(118)] = 4607,
  [SMALL_STATE(119)] = 4646,
  [SMALL_STATE(120)] = 4685,
  [SMALL_STATE(121)] = 4724,
  [SMALL_STATE(122)] = 4763,
  [SMALL_STATE(123)] = 4804,
  [SMALL_STATE(124)] = 4843,
  [SMALL_STATE(125)] = 4882,
  [SMALL_STATE(126)] = 4921,
  [SMALL_STATE(127)] = 4962,
  [SMALL_STATE(128)] = 5003,
  [SMALL_STATE(129)] = 5044,
  [SMALL_STATE(130)] = 5083,
  [SMALL_STATE(131)] = 5122,
  [SMALL_STATE(132)] = 5161,
  [SMALL_STATE(133)] = 5200,
  [SMALL_STATE(134)] = 5239,
  [SMALL_STATE(135)] = 5280,
  [SMALL_STATE(136)] = 5319,
  [SMALL_STATE(137)] = 5358,
  [SMALL_STATE(138)] = 5393,
  [SMALL_STATE(139)] = 5428,
  [SMALL_STATE(140)] = 5463,
  [SMALL_STATE(141)] = 5498,
  [SMALL_STATE(142)] = 5533,
  [SMALL_STATE(143)] = 5568,
  [SMALL_STATE(144)] = 5603,
  [SMALL_STATE(145)] = 5638,
  [SMALL_STATE(146)] = 5673,
  [SMALL_STATE(147)] = 5708,
  [SMALL_STATE(148)] = 5743,
  [SMALL_STATE(149)] = 5778,
  [SMALL_STATE(150)] = 5813,
  [SMALL_STATE(151)] = 5848,
  [SMALL_STATE(152)] = 5883,
  [SMALL_STATE(153)] = 5918,
  [SMALL_STATE(154)] = 5953,
  [SMALL_STATE(155)] = 5988,
  [SMALL_STATE(156)] = 6023,
  [SMALL_STATE(157)] = 6058,
  [SMALL_STATE(158)] = 6093,
  [SMALL_STATE(159)] = 6128,
  [SMALL_STATE(160)] = 6163,
  [SMALL_STATE(161)] = 6198,
  [SMALL_STATE(162)] = 6233,
  [SMALL_STATE(163)] = 6268,
  [SMALL_STATE(164)] = 6303,
  [SMALL_STATE(165)] = 6338,
  [SMALL_STATE(166)] = 6373,
  [SMALL_STATE(167)] = 6408,
  [SMALL_STATE(168)] = 6443,
  [SMALL_STATE(169)] = 6478,
  [SMALL_STATE(170)] = 6513,
  [SMALL_STATE(171)] = 6548,
  [SMALL_STATE(172)] = 6583,
  [SMALL_STATE(173)] = 6618,
  [SMALL_STATE(174)] = 6653,
  [SMALL_STATE(175)] = 6688,
  [SMALL_STATE(176)] = 6723,
  [SMALL_STATE(177)] = 6758,
  [SMALL_STATE(178)] = 6793,
  [SMALL_STATE(179)] = 6828,
  [SMALL_STATE(180)] = 6863,
  [SMALL_STATE(181)] = 6898,
  [SMALL_STATE(182)] = 6933,
  [SMALL_STATE(183)] = 6968,
  [SMALL_STATE(184)] = 7003,
  [SMALL_STATE(185)] = 7038,
  [SMALL_STATE(186)] = 7056,
  [SMALL_STATE(187)] = 7074,
  [SMALL_STATE(188)] = 7092,
  [SMALL_STATE(189)] = 7109,
  [SMALL_STATE(190)] = 7125,
  [SMALL_STATE(191)] = 7141,
  [SMALL_STATE(192)] = 7154,
  [SMALL_STATE(193)] = 7170,
  [SMALL_STATE(194)] = 7186,
  [SMALL_STATE(195)] = 7198,
  [SMALL_STATE(196)] = 7212,
  [SMALL_STATE(197)] = 7226,
  [SMALL_STATE(198)] = 7240,
  [SMALL_STATE(199)] = 7254,
  [SMALL_STATE(200)] = 7268,
  [SMALL_STATE(201)] = 7281,
  [SMALL_STATE(202)] = 7294,
  [SMALL_STATE(203)] = 7307,
  [SMALL_STATE(204)] = 7320,
  [SMALL_STATE(205)] = 7333,
  [SMALL_STATE(206)] = 7346,
  [SMALL_STATE(207)] = 7359,
  [SMALL_STATE(208)] = 7372,
  [SMALL_STATE(209)] = 7385,
  [SMALL_STATE(210)] = 7398,
  [SMALL_STATE(211)] = 7411,
  [SMALL_STATE(212)] = 7424,
  [SMALL_STATE(213)] = 7437,
  [SMALL_STATE(214)] = 7450,
  [SMALL_STATE(215)] = 7463,
  [SMALL_STATE(216)] = 7476,
  [SMALL_STATE(217)] = 7489,
  [SMALL_STATE(218)] = 7502,
  [SMALL_STATE(219)] = 7515,
  [SMALL_STATE(220)] = 7528,
  [SMALL_STATE(221)] = 7541,
  [SMALL_STATE(222)] = 7554,
  [SMALL_STATE(223)] = 7567,
  [SMALL_STATE(224)] = 7576,
  [SMALL_STATE(225)] = 7589,
  [SMALL_STATE(226)] = 7602,
  [SMALL_STATE(227)] = 7615,
  [SMALL_STATE(228)] = 7628,
  [SMALL_STATE(229)] = 7641,
  [SMALL_STATE(230)] = 7654,
  [SMALL_STATE(231)] = 7667,
  [SMALL_STATE(232)] = 7680,
  [SMALL_STATE(233)] = 7693,
  [SMALL_STATE(234)] = 7706,
  [SMALL_STATE(235)] = 7719,
  [SMALL_STATE(236)] = 7732,
  [SMALL_STATE(237)] = 7745,
  [SMALL_STATE(238)] = 7758,
  [SMALL_STATE(239)] = 7769,
  [SMALL_STATE(240)] = 7782,
  [SMALL_STATE(241)] = 7795,
  [SMALL_STATE(242)] = 7808,
  [SMALL_STATE(243)] = 7821,
  [SMALL_STATE(244)] = 7834,
  [SMALL_STATE(245)] = 7847,
  [SMALL_STATE(246)] = 7860,
  [SMALL_STATE(247)] = 7870,
  [SMALL_STATE(248)] = 7880,
  [SMALL_STATE(249)] = 7890,
  [SMALL_STATE(250)] = 7898,
  [SMALL_STATE(251)] = 7908,
  [SMALL_STATE(252)] = 7918,
  [SMALL_STATE(253)] = 7928,
  [SMALL_STATE(254)] = 7938,
  [SMALL_STATE(255)] = 7948,
  [SMALL_STATE(256)] = 7958,
  [SMALL_STATE(257)] = 7968,
  [SMALL_STATE(258)] = 7978,
  [SMALL_STATE(259)] = 7986,
  [SMALL_STATE(260)] = 7996,
  [SMALL_STATE(261)] = 8006,
  [SMALL_STATE(262)] = 8014,
  [SMALL_STATE(263)] = 8024,
  [SMALL_STATE(264)] = 8032,
  [SMALL_STATE(265)] = 8042,
  [SMALL_STATE(266)] = 8052,
  [SMALL_STATE(267)] = 8062,
  [SMALL_STATE(268)] = 8072,
  [SMALL_STATE(269)] = 8080,
  [SMALL_STATE(270)] = 8090,
  [SMALL_STATE(271)] = 8098,
  [SMALL_STATE(272)] = 8108,
  [SMALL_STATE(273)] = 8116,
  [SMALL_STATE(274)] = 8126,
  [SMALL_STATE(275)] = 8134,
  [SMALL_STATE(276)] = 8142,
  [SMALL_STATE(277)] = 8152,
  [SMALL_STATE(278)] = 8162,
  [SMALL_STATE(279)] = 8172,
  [SMALL_STATE(280)] = 8182,
  [SMALL_STATE(281)] = 8192,
  [SMALL_STATE(282)] = 8202,
  [SMALL_STATE(283)] = 8212,
  [SMALL_STATE(284)] = 8222,
  [SMALL_STATE(285)] = 8232,
  [SMALL_STATE(286)] = 8240,
  [SMALL_STATE(287)] = 8248,
  [SMALL_STATE(288)] = 8256,
  [SMALL_STATE(289)] = 8266,
  [SMALL_STATE(290)] = 8276,
  [SMALL_STATE(291)] = 8286,
  [SMALL_STATE(292)] = 8294,
  [SMALL_STATE(293)] = 8304,
  [SMALL_STATE(294)] = 8314,
  [SMALL_STATE(295)] = 8321,
  [SMALL_STATE(296)] = 8328,
  [SMALL_STATE(297)] = 8335,
  [SMALL_STATE(298)] = 8342,
  [SMALL_STATE(299)] = 8349,
  [SMALL_STATE(300)] = 8356,
  [SMALL_STATE(301)] = 8363,
  [SMALL_STATE(302)] = 8370,
  [SMALL_STATE(303)] = 8377,
  [SMALL_STATE(304)] = 8384,
  [SMALL_STATE(305)] = 8391,
  [SMALL_STATE(306)] = 8398,
  [SMALL_STATE(307)] = 8405,
  [SMALL_STATE(308)] = 8412,
  [SMALL_STATE(309)] = 8419,
  [SMALL_STATE(310)] = 8426,
  [SMALL_STATE(311)] = 8433,
  [SMALL_STATE(312)] = 8440,
  [SMALL_STATE(313)] = 8447,
  [SMALL_STATE(314)] = 8454,
  [SMALL_STATE(315)] = 8461,
  [SMALL_STATE(316)] = 8468,
  [SMALL_STATE(317)] = 8475,
  [SMALL_STATE(318)] = 8482,
  [SMALL_STATE(319)] = 8489,
  [SMALL_STATE(320)] = 8496,
  [SMALL_STATE(321)] = 8503,
  [SMALL_STATE(322)] = 8510,
  [SMALL_STATE(323)] = 8517,
  [SMALL_STATE(324)] = 8524,
  [SMALL_STATE(325)] = 8531,
  [SMALL_STATE(326)] = 8538,
  [SMALL_STATE(327)] = 8545,
  [SMALL_STATE(328)] = 8552,
  [SMALL_STATE(329)] = 8559,
  [SMALL_STATE(330)] = 8566,
  [SMALL_STATE(331)] = 8573,
  [SMALL_STATE(332)] = 8580,
  [SMALL_STATE(333)] = 8587,
  [SMALL_STATE(334)] = 8594,
  [SMALL_STATE(335)] = 8601,
  [SMALL_STATE(336)] = 8608,
  [SMALL_STATE(337)] = 8615,
  [SMALL_STATE(338)] = 8622,
  [SMALL_STATE(339)] = 8629,
  [SMALL_STATE(340)] = 8636,
  [SMALL_STATE(341)] = 8643,
  [SMALL_STATE(342)] = 8650,
  [SMALL_STATE(343)] = 8657,
  [SMALL_STATE(344)] = 8664,
  [SMALL_STATE(345)] = 8671,
  [SMALL_STATE(346)] = 8678,
  [SMALL_STATE(347)] = 8685,
  [SMALL_STATE(348)] = 8692,
  [SMALL_STATE(349)] = 8699,
  [SMALL_STATE(350)] = 8706,
  [SMALL_STATE(351)] = 8713,
  [SMALL_STATE(352)] = 8720,
  [SMALL_STATE(353)] = 8727,
  [SMALL_STATE(354)] = 8734,
  [SMALL_STATE(355)] = 8741,
  [SMALL_STATE(356)] = 8748,
  [SMALL_STATE(357)] = 8755,
  [SMALL_STATE(358)] = 8762,
  [SMALL_STATE(359)] = 8769,
  [SMALL_STATE(360)] = 8776,
  [SMALL_STATE(361)] = 8783,
  [SMALL_STATE(362)] = 8790,
  [SMALL_STATE(363)] = 8797,
  [SMALL_STATE(364)] = 8804,
  [SMALL_STATE(365)] = 8811,
  [SMALL_STATE(366)] = 8818,
  [SMALL_STATE(367)] = 8825,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(318),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(174),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(316),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(247),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(177),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(221),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(219),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(218),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(212),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(168),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(167),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(297),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(296),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(302),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(300),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(298),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(127),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(283),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(190),
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
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 7),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 7),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 4, .production_id = 9),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 4, .production_id = 9),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 2, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 3, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_literal, 3, .production_id = 6),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_literal, 3, .production_id = 6),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, .production_id = 13),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, .production_id = 13),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_player_set, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_player_set, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 7, .production_id = 26),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 7, .production_id = 26),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parallel_for, 5, .production_id = 18),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parallel_for, 5, .production_id = 18),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shuffle, 3, .production_id = 11),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shuffle, 3, .production_id = 11),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 5, .production_id = 22),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 5, .production_id = 22),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_text, 11, .production_id = 30),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_text, 11, .production_id = 30),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 11, .production_id = 31),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 11, .production_id = 31),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reverse, 3, .production_id = 11),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reverse, 3, .production_id = 11),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 11),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 11),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 5, .production_id = 18),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 5, .production_id = 18),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 5, .production_id = 19),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 5, .production_id = 19),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 13, .production_id = 40),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 13, .production_id = 40),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 3, .production_id = 11),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 3, .production_id = 11),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_choice, 11, .production_id = 29),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_choice, 11, .production_id = 29),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 13, .production_id = 39),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 13, .production_id = 39),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 11, .production_id = 32),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 11, .production_id = 32),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 12, .production_id = 34),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 12, .production_id = 34),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scores, 3, .production_id = 12),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scores, 3, .production_id = 12),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 6, .production_id = 24),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 6, .production_id = 24),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timer, 4, .production_id = 14),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_timer, 4, .production_id = 14),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 13, .production_id = 38),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 13, .production_id = 38),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deal, 7, .production_id = 25),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deal, 7, .production_id = 25),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_loop, 3, .production_id = 10),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_loop, 3, .production_id = 10),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 4, .production_id = 15),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 4, .production_id = 15),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 16),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 16),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 17, .production_id = 52),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 17, .production_id = 52),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_in_parallel, 2, .production_id = 5),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_in_parallel, 2, .production_id = 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 5, .production_id = 20),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sort, 5, .production_id = 20),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 15, .production_id = 48),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 15, .production_id = 48),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_text, 9, .production_id = 27),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_text, 9, .production_id = 27),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discard, 5, .production_id = 21),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discard, 5, .production_id = 21),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 15, .production_id = 47),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 15, .production_id = 47),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 15, .production_id = 46),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 15, .production_id = 46),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_vote, 14, .production_id = 43),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_vote, 14, .production_id = 43),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_choice, 13, .production_id = 36),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_choice, 13, .production_id = 36),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input_range, 13, .production_id = 37),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_input_range, 13, .production_id = 37),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(207),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(179),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(178),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(27),
  [405] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(13),
  [408] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(27),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(109),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_entry, 3, .production_id = 2),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 3),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_entry, 3, .production_id = 23),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_entry, 3, .production_id = 23),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_identifier, 1),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_range, 5),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_configuration_repeat1, 2), SHIFT_REPEAT(362),
  [543] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(147),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_setup_rule_repeat1, 2),
  [566] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_setup_rule_repeat1, 2), SHIFT_REPEAT(282),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_map_repeat1, 2),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_map_repeat1, 2), SHIFT_REPEAT(259),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2), SHIFT_REPEAT(366),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 9, .production_id = 33),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 15, .production_id = 53),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 7, .production_id = 28),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 14, .production_id = 51),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 13, .production_id = 50),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 10, .production_id = 35),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 13, .production_id = 49),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 12, .production_id = 45),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_description, 3, .production_id = 41),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 11, .production_id = 42),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setup_rule, 12, .production_id = 44),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rules, 2, .production_id = 5),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_game, 6, .production_id = 3),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_per_audience, 2, .production_id = 1),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_identifier_repeat1, 2),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_per_player, 2, .production_id = 1),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 13, .production_id = 17),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2, .production_id = 1),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_configuration, 12, .production_id = 17),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2, .production_id = 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [865] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
