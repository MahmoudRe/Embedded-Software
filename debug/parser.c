/* THIS FILE HAS BEEN AUTOMATICALLY GENERATED BY LLnextgen. DO NOT EDIT */
#line 24 "parser.g"

#include "expression.h"

struct _t3_config_this;
T3_CONFIG_LOCAL int _t3_config_parse(parse_context_t * LLuserData);
T3_CONFIG_LOCAL int _t3_config_parse_include(parse_context_t * LLuserData);
T3_CONFIG_LOCAL int _t3_config_parse_constraint(parse_context_t * LLuserData);
T3_CONFIG_LOCAL void _t3_config_abort(struct _t3_config_this *, int);

#line 13 "parser.c"
#define LLsymb _t3_config_symb
#define LLmessage _t3_config_message
#define LLreissue _t3_config_reissue
#define LLabort _t3_config_abort
#define LL_MISSINGEOF (-1)
#define LL_DELETE (0)
#define LL_VERSION 0x000505L
#define LL_NEW_TOKEN (-2)
#define LL_THREAD_SAFE
#define LLthisType struct _t3_config_this
#define LLscnt (LLthis->LLscnt_)
#define LLtcnt (LLthis->LLtcnt_)
#define LLcsymb (LLthis->LLcsymb_)
#define LL_NTERMINALS 31
#define LL_NSETS 10
#define LL_SSETS 4
#define LLinset(LLx) (LLsets[LLx*LL_SSETS + (LLcsymb/8)] & (1<<(LLcsymb & 7)))
#define LL_SCANDONE(LLx) if (LLsymb != LLx) LLerror(LLx);
#include <string.h>
static const char LLsets[] = {
	'\x6E', 	'\x20', 	'\x00', 	'\x00', 
	'\x60', 	'\x00', 	'\x00', 	'\x00', 
	'\x6E', 	'\x20', 	'\x02', 	'\x00', 
	'\x10', 	'\x10', 	'\x07', 	'\x00', 
	'\x10', 	'\x10', 	'\x00', 	'\x00', 
	'\x00', 	'\x10', 	'\x08', 	'\x00', 
	'\xFE', 	'\x23', 	'\xF1', 	'\x6F', 
	'\x80', 	'\x03', 	'\xF1', 	'\x03', 
	'\x7E', 	'\x20', 	'\x00', 	'\x6E', 
	'\xFE', 	'\x63', 	'\xF1', 	'\x6F', 
	0
};
static const int LLindex[] = { 0,
	   0,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   12,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   26,   -1,   30,   -1,   29,   22,   -1,
	  13,   15,   -1,   11,   14,   -1,   -1,   25,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   19,   20,   16,   21,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   27,   -1,   28,   24,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   17,   23,   18,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	  -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
	   0,    1,    2,    3,    4,    5,    6,    7,
	   8,    9,   10};
#include "parser.h"
int _t3_config_yylex_wrapper(struct _t3_config_this *);
void LLmessage(struct _t3_config_this *, int);
static void LLread(LLthisType *LLthis) { LLcsymb = LLindex[(LLsymb = _t3_config_yylex_wrapper(LLthis)) + 1]; }
static int LLskip(LLthisType *LLthis) {
	int LL_i;
	if (LLcsymb >= 0) {
		if (LLtcnt[LLcsymb] != 0) return 0;
		for (LL_i = 0; LL_i < LL_NSETS; LL_i++)
			if (LLscnt[LL_i] != 0 && LLinset(LL_i))
				return 0;
	}

	for (;;) {
		LLmessage(LLthis, 0 /* LL_DELETE */);
		while ((LLcsymb = LLindex[(LLsymb = _t3_config_yylex_wrapper(LLthis)) + 1]) < 0) LLmessage(LLthis, 0 /* LL_DELETE */);
		if (LLtcnt[LLcsymb] != 0)
			return 1;
		for (LL_i = 0; LL_i < LL_NSETS; LL_i++)
			if (LLscnt[LL_i] != 0 && LLinset(LL_i))
				return 1;
	}
}
static void LLerror(LLthisType *LLthis, int LLtoken) {
	if (LLtoken == 256 /* EOFILE */) {
		LLmessage(LLthis, -1 /* LL_MISSINGEOF */);
		while (LLindex[(LLsymb = _t3_config_yylex_wrapper(LLthis)) + 1] != 0) /*NOTHING*/ ;
		return;
	}
	LLtcnt[LLindex[LLtoken + 1]]++;
	LLskip(LLthis);
	LLtcnt[LLindex[LLtoken + 1]]--;
	if (LLsymb != LLtoken) { LLreissue = LLsymb; LLmessage(LLthis, LLtoken); }
}
void LLabort(LLthisType *LLthis, int LLretval) {
	longjmp(LLthis->LLjmp_buf_, LLretval);
}
#define LLread() LLread(LLthis)
#define LLskip() LLskip(LLthis)
#define LLerror(LLx) LLerror(LLthis, LLx)
#line 34 "parser.g"

#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <string.h>
#include "config.h"
#include "util.h"

static t3_config_t *allocate_item(struct _t3_config_this *LLthis, t3_bool allocate_name) {
	t3_config_t *result;

	if ((result = (t3_config_t *) malloc(sizeof(t3_config_t))) == NULL)
		LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);

	result->next = NULL;
	result->type = T3_CONFIG_NONE;
	result->line_number = _t3_config_data->line_number;
	result->value.ptr = NULL;
	result->file_name = _t3_config_ref_file_name(_t3_config_data->included);

	if (allocate_name) {
		if ((result->name = _t3_config_strdup(_t3_config_get_text(_t3_config_data->scanner))) == NULL)
			LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
	} else {
		result->name = NULL;
	}

	return result;
}

static void set_value(struct _t3_config_this *LLthis, t3_config_t *item, t3_config_type_t type) {
	switch (type) {
		case T3_CONFIG_BOOL:
			item->type = type;
			item->value.boolean = LLsymb == BOOL_TRUE;
			break;
		case T3_CONFIG_INT: {
			long value;
			errno = 0;
			value = strtol(_t3_config_get_text(_t3_config_data->scanner), NULL, 0);
/*
			if (errno == ERANGE
#if T3_CONFIG_INT_MAX < LONG_MAX || T3_CONFIG_INT_MIN > LONG_MIN
				|| value > T3_CONFIG_INT_MAX || value < T3_CONFIG_INT_MIN
#endif
			)
				LLabort(LLthis, T3_ERR_OUT_OF_RANGE);
*/
			item->type = type;
			item->value.integer = (int) value;
			break;
		}
		case T3_CONFIG_NUMBER: {
			double value;
			errno = 0;
			value = _t3_config_strtod(_t3_config_get_text(_t3_config_data->scanner));
/*			if (errno == ERANGE)
				LLabort(LLthis, T3_ERR_OUT_OF_RANGE);*/
			item->type = type;
			item->value.number = value;
			break;
		}
		case T3_CONFIG_STRING: {
			/* Don't need to allocate full yytext, because we drop the quotes. */
			char *text = _t3_config_get_text(_t3_config_data->scanner);
			char *value = malloc(strlen(text));

			if (value == NULL)
				LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);

			_t3_unescape(value, text);

			item->type = type;
			item->value.string = value;
			break;
		}
		case T3_CONFIG_LIST:
		case T3_CONFIG_SECTION:
			item->type = type;
			item->value.list = NULL;
			break;
		default:
			LLabort(LLthis, T3_ERR_INTERNAL);
	}
}

static t3_bool transform_percent_list(struct _t3_config_this *LLthis, t3_config_t *item, t3_config_t **last_dptr) {
	t3_config_t *list;

	if ((*last_dptr)->name[0] != '%')
		return t3_false;

	if ((list = t3_config_get(item, (*last_dptr)->name + 1)) == NULL) {
		/* No existing list found. Transform the current item into new plist. */
		list = allocate_item(LLthis, t3_false);
		list->type = T3_CONFIG_PLIST;
		list->name = (*last_dptr)->name;
		(*last_dptr)->name = NULL;
		memmove(list->name, list->name + 1, strlen(list->name));
		list->value.list = *last_dptr;
		*last_dptr = list;
		return t3_false;
	}

	if (list->type != T3_CONFIG_PLIST) {
		if (_t3_config_data->opts != NULL && (_t3_config_data->opts->flags & T3_CONFIG_VERBOSE_ERROR))
			_t3_config_data->error_extra = _t3_config_strdup((*last_dptr)->name);
		LLabort(LLthis, T3_ERR_DUPLICATE_KEY);
	}

	t3_config_add_existing(list, NULL, *last_dptr);
	*last_dptr = NULL;
	return t3_true;
}

T3_CONFIG_LOCAL int _t3_config_yylex_wrapper(struct _t3_config_this *LLthis);
int _t3_config_yylex_wrapper(struct _t3_config_this *LLthis) {
	if (LLreissue == LL_NEW_TOKEN) {
		/* Unfortunately, we have to initialize the LLthis member here, because
		   it may be used in the _t3_config_lex routine and this is the first
		   oportunity we have to initialize it. This does mean it will get set
		   over and over again, once for each token read. Unless we modify LLnextgen
		   to allow us to execute some code before the first LLread, we're stuck
		   with this. */
		_t3_config_data->LLthis = LLthis;
		/* Increase line number when the last token was a newline, instead of
		   when we find a newline, to improve error location reporting. */
		if (LLsymb == '\n')
			_t3_config_data->line_number++;
		return _t3_config_lex(_t3_config_data->scanner);
	} else {
		int LLretval = LLreissue;
		LLreissue = LL_NEW_TOKEN;
		return LLretval;
	}
}

T3_CONFIG_LOCAL void LLmessage(struct _t3_config_this *LLthis, int LLtoken);
void LLmessage(struct _t3_config_this *LLthis, int LLtoken) {
	(void) LLtoken;
	LLabort(LLthis, T3_ERR_PARSE_ERROR);
}

static file_name_t *new_file_name(const t3_config_t *config) {
	file_name_t *result;
	if ((result = malloc(sizeof(file_name_t))) == NULL)
		return NULL;

	if ((result->file_name = _t3_config_strdup(t3_config_get_string(config))) == NULL) {
		free(result);
		return NULL;
	}
	result->count = 1;
	return result;
}

static void include_file(struct _t3_config_this *LLthis, t3_config_t *item, t3_config_t *include) {
	/* Location to save data from current lexer. */
	yyscan_t scanner;
	int scan_type;
	int line_number;
	FILE *file;
	t3_config_t *included;

	yyscan_t new_scanner;
	FILE *new_file;
	int result;

	for (included = _t3_config_data->included; included != NULL; included = included->next) {
		if (strcmp(included->value.string, include->value.string) == 0) {
			/* It is an error to use recursive includes. */
			if (_t3_config_data->opts->flags & T3_CONFIG_VERBOSE_ERROR)
				_t3_config_data->error_extra = t3_config_take_string(include);

			/* Delete "include" because we no longer need it. */
			t3_config_delete(include);

			LLabort(LLthis, T3_ERR_RECURSIVE_INCLUDE);
		}
	}

	include->next = _t3_config_data->included;
	_t3_config_data->included = include;
	_t3_config_unref_file_name(include);
	if ((include->file_name = new_file_name(include)) == NULL)
		LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);


	/* Use either the default or the user supplied include-callback function to open
	   the include file. */
	if (_t3_config_data->opts->flags & T3_CONFIG_INCLUDE_DFLT)
		new_file = t3_config_open_from_path(_t3_config_data->opts->include_callback.dflt.path,
			include->value.string, _t3_config_data->opts->include_callback.dflt.flags);
	else
		new_file = _t3_config_data->opts->include_callback.user.open(include->value.string,
			_t3_config_data->opts->include_callback.user.data);

	/* Abort if the include file could not be found. */
	if (new_file == NULL) {
		if (_t3_config_data->opts->flags & T3_CONFIG_VERBOSE_ERROR)
			_t3_config_data->error_extra = _t3_config_strdup(include->value.string);
		LLabort(LLthis, T3_ERR_ERRNO);
	}

	/* Initialize a new lexer. */
	if (_t3_config_lex_init_extra(_t3_config_data, &new_scanner) != 0)
		LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);

	/* Replace the current context's lexer related values, after saving the current settings. */
	scanner = _t3_config_data->scanner;
	scan_type = _t3_config_data->scan_type;
	file = _t3_config_data->file;
	line_number = _t3_config_data->line_number;

	_t3_config_data->scanner = new_scanner;
	_t3_config_data->scan_type = SCAN_FILE;
	_t3_config_data->file = new_file;

	_t3_config_data->current_section = item;
	_t3_config_data->line_number = 1;
	/* Parse the included file. */
	result = _t3_config_parse_include(_t3_config_data);

	/* Destroy the new lexer, and reset all the lexer related values in the context. */
	_t3_config_lex_destroy(new_scanner);

	_t3_config_data->scanner = scanner;
	_t3_config_data->scan_type = scan_type;
	_t3_config_data->file = file;

	/* Close the include file. */
	fclose(new_file);

	/* Abort if the parse of the include file was not successful. */
	if (result != T3_ERR_SUCCESS)
		LLabort(LLthis, result);

	/* The line number may get used if LLabort is called above. Thus we only reset it
	   after we pass all possible LLabort calls. */
	_t3_config_data->line_number = line_number;

	/* Remove the current include from the list (stack) of included files. */
	_t3_config_data->included = _t3_config_data->included->next;
	/* Prevent deletion of the entire chain. */
	include->next = NULL;
	t3_config_delete(include);
}


#line 371 "parser.c"
static void _t3_config_0_config(LLthisType *LLthis) ;
static void _t3_config_1_include_config(LLthisType *LLthis) ;
static void _t3_config_2_value(LLthisType *LLthis,
#line 297 "parser.g"
t3_config_t *item
#line 377 "parser.c"
) ;
static void _t3_config_3_item(LLthisType *LLthis,
#line 366 "parser.g"
t3_config_t **item
#line 382 "parser.c"
) ;
static void _t3_config_4_section(LLthisType *LLthis,
#line 379 "parser.g"
t3_config_t *item
#line 387 "parser.c"
) ;
static void _t3_config_5_section_contents(LLthisType *LLthis,
#line 386 "parser.g"
t3_config_t *item
#line 392 "parser.c"
) ;
static void _t3_config_6_constraint(LLthisType *LLthis) ;
static void _t3_config_7_expression(LLthisType *LLthis,
#line 559 "parser.g"
int priority, expr_node_t **node
#line 398 "parser.c"
) ;
static void _t3_config_8_factor(LLthisType *LLthis,
#line 574 "parser.g"
expr_node_t **node
#line 403 "parser.c"
) ;
static void _t3_config_0_config(LLthisType *LLthis) {
#line 286 "parser.g"

	_t3_config_data->result = allocate_item(LLthis, t3_false);
	((t3_config_t *) _t3_config_data->result)->line_number = 0;

#line 411 "parser.c"
_t3_config_5_section_contents(LLthis,
#line 290 "parser.g"
_t3_config_data->result
#line 415 "parser.c"
);
}
static void _t3_config_1_include_config(LLthisType *LLthis) {
_t3_config_5_section_contents(LLthis,
#line 294 "parser.g"
_t3_config_data->current_section
#line 422 "parser.c"
);
}
static void _t3_config_2_value(LLthisType *LLthis,
#line 297 "parser.g"
t3_config_t *item
#line 428 "parser.c"
) {
#line 297 "parser.g"

	t3_config_t **next_ptr;

#line 434 "parser.c"
LL_0:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_0;
/*FALLTHROUGH*/
case 1:/* INT */
LLscnt[0]--;
LL_SCANDONE(257);/* INT */
#line 301 "parser.g"
{
		set_value(LLthis, item, T3_CONFIG_INT);
	}
#line 448 "parser.c"
LLread();
break;
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
LLscnt[0]--;
LLscnt[1]++;
LL_1:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_1;
/*FALLTHROUGH*/
case 5:/* BOOL_TRUE */
LLscnt[1]--;
LL_SCANDONE(261);/* BOOL_TRUE */
break;
case 6:/* BOOL_FALSE */
LLscnt[1]--;
LL_SCANDONE(262);/* BOOL_FALSE */
break;
}
#line 306 "parser.g"
{
		set_value(LLthis, item, T3_CONFIG_BOOL);
	}
#line 474 "parser.c"
LLread();
break;
case 2:/* NUMBER */
LLscnt[0]--;
LL_SCANDONE(258);/* NUMBER */
#line 311 "parser.g"
{
		set_value(LLthis, item, T3_CONFIG_NUMBER);
	}
#line 484 "parser.c"
LLread();
break;
case 3:/* STRING */
LLscnt[0]--;
LLtcnt[11]++;
LL_SCANDONE(259);/* STRING */
#line 316 "parser.g"
{
		set_value(LLthis, item, T3_CONFIG_STRING);
	}
#line 495 "parser.c"
LLread();
for (;;) {
LL_2:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_2;
break;
case 0:/* <NUL> */
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 12:/* <NL> */
case 13:/* '(' */
case 14:/* ',' */
case 15:/* ')' */
case 17:/* '{' */
case 18:/* '}' */
case 19:/* ';' */
break;
case 11:/* '+' */
LLtcnt[12]++;
LLtcnt[3]++;
LL_SCANDONE(43);/* '+' */
LLread();
for (;;) {
LL_3:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_3;
break;
case 3:/* STRING */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
LLtcnt[3]--;
LL_SCANDONE(259);/* STRING */
#line 323 "parser.g"
{
			/* We won't be adding the entire yytext, so we can safely ignore the
			   nul byte. */
			char *text = _t3_config_get_text(_t3_config_data->scanner);
			char *value = realloc(item->value.string, strlen(text) + strlen(item->value.string));
			if (value == NULL)
				LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);

			item->value.string = value;
			value += strlen(value);
			_t3_unescape(value, text);
		}
#line 553 "parser.c"
LLread();
continue;
}
LLtcnt[11]--;
break;
}
break;
case 13:/* '(' */
LLscnt[0]--;
LLtcnt[12]++;
LLscnt[2]++;
LLtcnt[15]++;
LL_SCANDONE(40);/* '(' */
#line 338 "parser.g"
{
		set_value(LLthis, item, T3_CONFIG_LIST);
		item->value.list = NULL;
		next_ptr = &item->value.list;
	}
#line 573 "parser.c"
LLread();
for (;;) {
LL_4:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_4;
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 15:/* ')' */
case 17:/* '{' */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
for (;;) {
LL_5:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_5;
break;
case 15:/* ')' */
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 17:/* '{' */
LLscnt[2]++;
LLtcnt[12]++;
LLtcnt[14]++;
#line 345 "parser.g"
{
			*next_ptr = allocate_item(LLthis, t3_false);
		}
#line 620 "parser.c"
LL_6:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_6;
/*FALLTHROUGH*/
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
LLscnt[2]--;
LLscnt[0]++;
_t3_config_2_value(LLthis,
#line 349 "parser.g"
*next_ptr
#line 638 "parser.c"
);
break;
case 17:/* '{' */
LLscnt[2]--;
_t3_config_4_section(LLthis,
#line 351 "parser.g"
*next_ptr
#line 646 "parser.c"
);
LLread();
break;
}
#line 353 "parser.g"
{
			next_ptr = &(*next_ptr)->next;
		}
#line 655 "parser.c"
for (;;) {
LL_7:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_7;
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 14:/* ',' */
case 15:/* ')' */
case 17:/* '{' */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
for (;;) {
LL_8:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_8;
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 15:/* ')' */
case 17:/* '{' */
break;
case 14:/* ',' */
LLtcnt[12]++;
LLscnt[2]++;
LLtcnt[12]++;
LL_SCANDONE(44);/* ',' */
LLread();
for (;;) {
LL_9:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_9;
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 17:/* '{' */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
#line 360 "parser.g"
{
			*next_ptr = allocate_item(LLthis, t3_false);
		}
#line 727 "parser.c"
LL_10:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_10;
/*FALLTHROUGH*/
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
LLscnt[2]--;
LLscnt[0]++;
_t3_config_2_value(LLthis,
#line 360 "parser.g"
*next_ptr
#line 745 "parser.c"
);
break;
case 17:/* '{' */
LLscnt[2]--;
_t3_config_4_section(LLthis,
#line 360 "parser.g"
*next_ptr
#line 753 "parser.c"
);
LLread();
break;
}
#line 360 "parser.g"
{
			next_ptr = &(*next_ptr)->next;
		}
#line 762 "parser.c"
for (;;) {
LL_11:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_11;
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 14:/* ',' */
case 15:/* ')' */
case 17:/* '{' */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
continue;
}
LLtcnt[14]--;
break;
}
continue;
}
LLscnt[2]--;
break;
}
LLtcnt[15]--;
LL_SCANDONE(41);/* ')' */
LLread();
break;
}
}
static void _t3_config_3_item(LLthisType *LLthis,
#line 366 "parser.g"
t3_config_t **item
#line 806 "parser.c"
) {
LLscnt[3]++;
LL_SCANDONE(260);/* IDENTIFIER */
#line 368 "parser.g"
{
		*item = allocate_item(LLthis, t3_true);
	}
#line 814 "parser.c"
LLread();
LL_0:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_0;
/*FALLTHROUGH*/
case 17:/* '{' */
LLscnt[3]--;
_t3_config_4_section(LLthis,
#line 372 "parser.g"
*item
#line 827 "parser.c"
);
LLread();
break;
case 16:/* '=' */
LLscnt[3]--;
LLscnt[0]++;
LL_SCANDONE(61);/* '=' */
LLread();
_t3_config_2_value(LLthis,
#line 375 "parser.g"
*item
#line 839 "parser.c"
);
break;
}
}
static void _t3_config_4_section(LLthisType *LLthis,
#line 379 "parser.g"
t3_config_t *item
#line 847 "parser.c"
) {
LLscnt[4]++;
LLtcnt[18]++;
LL_SCANDONE(123);/* '{' */
LLread();
LLscnt[4]--;
_t3_config_5_section_contents(LLthis,
#line 382 "parser.g"
item
#line 857 "parser.c"
);
LLtcnt[18]--;
LL_SCANDONE(125);/* '}' */
}
static void _t3_config_5_section_contents(LLthisType *LLthis,
#line 386 "parser.g"
t3_config_t *item
#line 865 "parser.c"
) {
#line 386 "parser.g"

	t3_config_t **next_ptr = &item->value.list;
	item->type = T3_CONFIG_SECTION;
	while (*next_ptr != NULL)
		next_ptr = &(*next_ptr)->next;

#line 874 "parser.c"
LLtcnt[12]++;
LLtcnt[4]++;
for (;;) {
LL_0:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_0;
break;
case 0:/* <NUL> */
case 4:/* IDENTIFIER */
case 18:/* '}' */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
for (;;) {
LL_1:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_1;
break;
case 0:/* <NUL> */
case 18:/* '}' */
break;
case 4:/* IDENTIFIER */
LLscnt[5]++;
_t3_config_3_item(LLthis,
#line 394 "parser.g"
next_ptr
#line 909 "parser.c"
);
#line 395 "parser.g"
{
			if (_t3_config_data->opts != NULL && (_t3_config_data->opts->flags & (T3_CONFIG_INCLUDE_DFLT | T3_CONFIG_INCLUDE_USER)) &&
					strcmp((*next_ptr)->name, "%include") == 0)
			{
				t3_config_t *include = *next_ptr;
				*next_ptr = NULL;
				include_file(LLthis, item, include);
				while (*next_ptr != NULL)
					next_ptr = &(*next_ptr)->next;
			} else {
				if (t3_config_get(item, (*next_ptr)->name) != *next_ptr) {
					if (_t3_config_data->opts != NULL && (_t3_config_data->opts->flags & T3_CONFIG_VERBOSE_ERROR))
						_t3_config_data->error_extra = _t3_config_strdup((*next_ptr)->name);
					LLabort(LLthis, T3_ERR_DUPLICATE_KEY);
				}
				if (!transform_percent_list(LLthis, item, next_ptr))
					next_ptr = &(*next_ptr)->next;
			}
		}
#line 931 "parser.c"
LL_2:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_2;
/*FALLTHROUGH*/
case 0:/* <NUL> */
case 18:/* '}' */
LLscnt[5]--;
break;
case 4:/* IDENTIFIER */
case 12:/* <NL> */
case 19:/* ';' */
LLscnt[5]--;
LLscnt[5]++;
LLtcnt[12]++;
LL_3:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_3;
/*FALLTHROUGH*/
case 19:/* ';' */
LLscnt[5]--;
LL_SCANDONE(59);/* ';' */
break;
case 12:/* <NL> */
LLscnt[5]--;
LL_SCANDONE(10);/* <NL> */
break;
}
LLread();
for (;;) {
LL_4:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_4;
break;
case 0:/* <NUL> */
case 4:/* IDENTIFIER */
case 18:/* '}' */
break;
case 12:/* <NL> */
LL_SCANDONE(10);/* <NL> */
LLread();
continue;
}
LLtcnt[12]--;
break;
}
}
continue;
}
LLtcnt[4]--;
break;
}
}
#line 422 "parser.g"

static int get_priority(int operator) {
	switch (operator) {
		case '|':
		case '^':
		case '&':
			return 0;
		case '=':
		case NE:
		case '<':
		case LE:
		case '>':
		case GE:
			return 1;
		case '/':
			return 2;
		default:
			break;
	}
	/* This point should never be reached. */
	return -1;
}

static expr_type_t symb2expr(int symb) {
	static const struct {
		int symb;
		expr_type_t type;
	} map[] = {
		{ '=', EXPR_EQ },
		{ NE, EXPR_NE },
		{ '<', EXPR_LT },
		{ LE, EXPR_LE },
		{ '>', EXPR_GT },
		{ GE, EXPR_GE },
		{ '&', EXPR_AND },
		{ '|', EXPR_OR },
		{ '^', EXPR_XOR },
		{ '/', EXPR_PATH }
	};
	size_t i;

	for (i = 0; i < sizeof(map) / sizeof(map[0]); i++)
		if (map[i].symb == symb)
			return map[i].type;
	return EXPR_EQ;
}

static expr_node_t *new_expression(struct _t3_config_this *LLthis, expr_type_t type, expr_node_t *operand_0, expr_node_t *operand_1) {
	expr_node_t *result;
	/* We use a t3_config_t to reuse the conversion stuff we wrote for that. */
	t3_config_t config_node;

	/* Convert this first, such that when it jumps out because of insufficient
	   memory, we don't cause a memory leak. */
	switch (type) {
		case EXPR_INT_CONST:
			set_value(LLthis, &config_node, T3_CONFIG_INT);
			break;
		case EXPR_NUMBER_CONST:
			set_value(LLthis, &config_node, T3_CONFIG_NUMBER);
			break;
		case EXPR_STRING_CONST:
			set_value(LLthis, &config_node, T3_CONFIG_STRING);
			break;
		default:
			break;
	}

	if ((result = malloc(sizeof(expr_node_t))) == NULL)
		LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
	result->type = type;
	result->value.operand[0] = operand_0;
	result->value.operand[1] = operand_1;

	switch (type) {
		case EXPR_BOOL_CONST:
			result->value.boolean = LLsymb == BOOL_TRUE;
			break;
		case EXPR_INT_CONST:
			result->value.integer = config_node.value.integer;
			break;
		case EXPR_NUMBER_CONST:
			result->value.number = config_node.value.number;
			break;
		case EXPR_STRING_CONST:
			result->value.string = config_node.value.string;
			break;
		case EXPR_IDENT:
			if ((result->value.string = _t3_config_strdup(_t3_config_get_text(_t3_config_data->scanner))) == NULL) {
				free(result);
				LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
			}
			break;
		default:
			break;
	}
	return result;
}


#line 1090 "parser.c"
static void _t3_config_6_constraint(LLthisType *LLthis) {
#line 523 "parser.g"

	expr_node_t *top;
	_t3_config_data->LLthis = LLthis;
	_t3_config_data->result = NULL;

	if ((top = malloc(sizeof(expr_node_t))) == NULL)
		LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
	_t3_config_data->result = top;
	top->type = EXPR_TOP;
	top->value.operand[0] = NULL;
	if ((top->value.operand[1] = malloc(sizeof(expr_node_t))) == NULL)
		LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
	top->value.operand[1]->type = EXPR_STRING_CONST;
	top->value.operand[1]->value.string = NULL;

#line 1108 "parser.c"
LLtcnt[10]++;
LLscnt[6]++;
LL_0:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_0;
LLtcnt[10]--;
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 4:/* IDENTIFIER */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 25:/* '/' */
case 26:/* '!' */
case 27:/* '[' */
case 29:/* '%' */
case 30:/* '#' */
LLtcnt[10]--;
break;
case 10:/* DESCRIPTION */
LLtcnt[10]--;
LL_SCANDONE(266);/* DESCRIPTION */
#line 540 "parser.g"
{
			if ((top->value.operand[1]->value.string = _t3_config_strdup(_t3_config_get_text(_t3_config_data->scanner) + 1)) == NULL)
				LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
			/* We can safely subtract one from the length of the string because we
			   know the closing '}' is there. */
			top->value.operand[1]->value.string[strlen(top->value.operand[1]->value.string) - 1] = 0;
		}
#line 1142 "parser.c"
LLread();
}
LLscnt[6]--;
_t3_config_7_expression(LLthis,
#line 548 "parser.g"
0, &top->value.operand[0]
#line 1149 "parser.c"
);
#line 549 "parser.g"
{
		if (top->value.operand[1] == NULL) {
			if ((top->value.operand[1] = malloc(sizeof(expr_node_t))) == NULL)
				LLabort(LLthis, T3_ERR_OUT_OF_MEMORY);
			top->value.operand[1]->type = EXPR_STRING_CONST;
			top->value.operand[1]->value.string = NULL;
		}
	}
#line 1160 "parser.c"
}
static void _t3_config_7_expression(LLthisType *LLthis,
#line 559 "parser.g"
int priority, expr_node_t **node
#line 1165 "parser.c"
) {
#line 559 "parser.g"

	int operator;

#line 1171 "parser.c"
LLscnt[8]++;
LLscnt[7]++;
_t3_config_8_factor(LLthis,
#line 562 "parser.g"
node
#line 1177 "parser.c"
);
for (;;) {
LL_0:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_0;
break;
case 0:/* <NUL> */
case 14:/* ',' */
case 15:/* ')' */
break;
case 7:/* NE */
case 8:/* LE */
case 9:/* GE */
case 16:/* '=' */
case 20:/* '<' */
case 21:/* '>' */
case 22:/* '&' */
case 23:/* '|' */
case 24:/* '^' */
case 25:/* '/' */
if (!(
#line 564 "parser.g"
(get_priority(LLsymb) >= priority)
#line 1202 "parser.c"
)) {
break;
}
LLscnt[7]++;
LLscnt[6]++;
LL_1:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_1;
/*FALLTHROUGH*/
case 16:/* '=' */
LLscnt[7]--;
LL_SCANDONE(61);/* '=' */
break;
case 7:/* NE */
LLscnt[7]--;
LL_SCANDONE(263);/* NE */
break;
case 20:/* '<' */
LLscnt[7]--;
LL_SCANDONE(60);/* '<' */
break;
case 8:/* LE */
LLscnt[7]--;
LL_SCANDONE(264);/* LE */
break;
case 21:/* '>' */
LLscnt[7]--;
LL_SCANDONE(62);/* '>' */
break;
case 9:/* GE */
LLscnt[7]--;
LL_SCANDONE(265);/* GE */
break;
case 22:/* '&' */
LLscnt[7]--;
LL_SCANDONE(38);/* '&' */
break;
case 23:/* '|' */
LLscnt[7]--;
LL_SCANDONE(124);/* '|' */
break;
case 24:/* '^' */
LLscnt[7]--;
LL_SCANDONE(94);/* '^' */
break;
case 25:/* '/' */
LLscnt[7]--;
LL_SCANDONE(47);/* '/' */
break;
}
#line 566 "parser.g"
{
			*node = new_expression(LLthis, symb2expr(LLsymb), *node, NULL);
			operator = LLsymb;
		}
#line 1260 "parser.c"
LLread();
LLscnt[6]--;
_t3_config_7_expression(LLthis,
#line 570 "parser.g"
get_priority(operator) + 1, &(*node)->value.operand[1]
#line 1266 "parser.c"
);
continue;
}
LLscnt[7]--;
break;
}
}
static void _t3_config_8_factor(LLthisType *LLthis,
#line 574 "parser.g"
expr_node_t **node
#line 1277 "parser.c"
) {
LL_0:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_0;
/*FALLTHROUGH*/
case 4:/* IDENTIFIER */
LLscnt[8]--;
LL_SCANDONE(260);/* IDENTIFIER */
#line 576 "parser.g"
{
		*node = new_expression(LLthis, EXPR_IDENT, NULL, NULL);
	}
#line 1292 "parser.c"
LLread();
break;
case 26:/* '!' */
LLscnt[8]--;
LLscnt[8]++;
LL_SCANDONE(33);/* '!' */
LLread();
_t3_config_8_factor(LLthis,
#line 581 "parser.g"
node
#line 1303 "parser.c"
);
#line 582 "parser.g"
{
		*node = new_expression(LLthis, EXPR_NOT, *node, NULL);
	}
#line 1309 "parser.c"
break;
case 13:/* '(' */
LLscnt[8]--;
LLscnt[6]++;
LLtcnt[15]++;
LL_SCANDONE(40);/* '(' */
LLread();
LLscnt[6]--;
_t3_config_7_expression(LLthis,
#line 587 "parser.g"
0, node
#line 1321 "parser.c"
);
LLtcnt[15]--;
LL_SCANDONE(41);/* ')' */
LLread();
break;
case 3:/* STRING */
LLscnt[8]--;
LL_SCANDONE(259);/* STRING */
#line 591 "parser.g"
{
		*node = new_expression(LLthis, EXPR_STRING_CONST, NULL, NULL);
	}
#line 1334 "parser.c"
LLread();
break;
case 1:/* INT */
LLscnt[8]--;
LL_SCANDONE(257);/* INT */
#line 596 "parser.g"
{
		*node = new_expression(LLthis, EXPR_INT_CONST, NULL, NULL);
	}
#line 1344 "parser.c"
LLread();
break;
case 2:/* NUMBER */
LLscnt[8]--;
LL_SCANDONE(258);/* NUMBER */
#line 601 "parser.g"
{
		*node = new_expression(LLthis, EXPR_NUMBER_CONST, NULL, NULL);
	}
#line 1354 "parser.c"
LLread();
break;
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
LLscnt[8]--;
LLscnt[1]++;
LL_1:
switch (LLcsymb) {
default:
if (LLskip())
goto LL_1;
/*FALLTHROUGH*/
case 6:/* BOOL_FALSE */
LLscnt[1]--;
LL_SCANDONE(262);/* BOOL_FALSE */
break;
case 5:/* BOOL_TRUE */
LLscnt[1]--;
LL_SCANDONE(261);/* BOOL_TRUE */
break;
}
#line 606 "parser.g"
{
		*node = new_expression(LLthis, EXPR_BOOL_CONST, NULL, NULL);
	}
#line 1380 "parser.c"
LLread();
break;
case 25:/* '/' */
LLscnt[8]--;
LLscnt[8]++;
LL_SCANDONE(47);/* '/' */
LLread();
LL_2:
switch (LLcsymb) {
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 4:/* IDENTIFIER */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 13:/* '(' */
case 25:/* '/' */
case 26:/* '!' */
case 27:/* '[' */
case 29:/* '%' */
case 30:/* '#' */
LLscnt[8]--;
LLscnt[8]++;
_t3_config_8_factor(LLthis,
#line 613 "parser.g"
node
#line 1407 "parser.c"
);
#line 614 "parser.g"
{
			*node = new_expression(LLthis, EXPR_PATH, NULL, *node);
			(*node)->value.operand[0] = new_expression(LLthis, EXPR_PATH_ROOT, NULL, NULL);
		}
#line 1414 "parser.c"
break;
default:
if (LLskip())
goto LL_2;
/*FALLTHROUGH*/
case 0:/* <NUL> */
case 7:/* NE */
case 8:/* LE */
case 9:/* GE */
case 14:/* ',' */
case 15:/* ')' */
case 16:/* '=' */
case 20:/* '<' */
case 21:/* '>' */
case 22:/* '&' */
case 23:/* '|' */
case 24:/* '^' */
case 28:/* ']' */
LLscnt[8]--;
#line 619 "parser.g"
{
			*node = new_expression(LLthis, EXPR_PATH_ROOT, NULL, NULL);
		}
#line 1438 "parser.c"
break;
}
break;
case 27:/* '[' */
LLscnt[8]--;
LLscnt[8]++;
LLtcnt[28]++;
LL_SCANDONE(91);/* '[' */
LLread();
_t3_config_8_factor(LLthis,
#line 625 "parser.g"
node
#line 1451 "parser.c"
);
LLtcnt[28]--;
LL_SCANDONE(93);/* ']' */
#line 627 "parser.g"
{
		*node = new_expression(LLthis, EXPR_DEREF, *node, NULL);
	}
#line 1459 "parser.c"
LLread();
break;
case 29:/* '%' */
LLscnt[8]--;
LL_SCANDONE(37);/* '%' */
#line 632 "parser.g"
{
		*node = new_expression(LLthis, EXPR_THIS, NULL, NULL);
	}
#line 1469 "parser.c"
LLread();
break;
case 30:/* '#' */
LLscnt[8]--;
LLscnt[8]++;
LL_SCANDONE(35);/* '#' */
LLread();
LL_3:
switch (LLcsymb) {
case 13:/* '(' */
LLscnt[8]--;
LLscnt[9]++;
LLtcnt[15]++;
LL_SCANDONE(40);/* '(' */
LLread();
LLscnt[9]--;
LLtcnt[14]++;
#line 641 "parser.g"
{
				*node = new_expression(LLthis, EXPR_LIST, NULL, *node);
			}
#line 1491 "parser.c"
_t3_config_7_expression(LLthis,
#line 644 "parser.g"
0, &(*node)->value.operand[0]
#line 1495 "parser.c"
);
for (;;) {
LL_4:
switch (LLcsymb) {
default:
if (LLskip()) goto LL_4;
break;
case 15:/* ')' */
break;
case 14:/* ',' */
LLscnt[6]++;
LL_SCANDONE(44);/* ',' */
#line 647 "parser.g"
{
				*node = new_expression(LLthis, EXPR_LIST, NULL, *node);
			}
#line 1512 "parser.c"
LLread();
LLscnt[6]--;
_t3_config_7_expression(LLthis,
#line 647 "parser.g"
0, &(*node)->value.operand[0]
#line 1518 "parser.c"
);
continue;
}
LLtcnt[14]--;
break;
}
LLtcnt[15]--;
LL_SCANDONE(41);/* ')' */
LLread();
break;
case 1:/* INT */
case 2:/* NUMBER */
case 3:/* STRING */
case 4:/* IDENTIFIER */
case 5:/* BOOL_TRUE */
case 6:/* BOOL_FALSE */
case 25:/* '/' */
case 26:/* '!' */
case 27:/* '[' */
case 29:/* '%' */
case 30:/* '#' */
LLscnt[8]--;
LLscnt[8]++;
_t3_config_8_factor(LLthis,
#line 653 "parser.g"
node
#line 1545 "parser.c"
);
break;
default:
if (LLskip())
goto LL_3;
/*FALLTHROUGH*/
case 0:/* <NUL> */
case 7:/* NE */
case 8:/* LE */
case 9:/* GE */
case 14:/* ',' */
case 15:/* ')' */
case 16:/* '=' */
case 20:/* '<' */
case 21:/* '>' */
case 22:/* '&' */
case 23:/* '|' */
case 24:/* '^' */
case 28:/* ']' */
LLscnt[8]--;
break;
}
#line 656 "parser.g"
{
		*node = new_expression(LLthis, EXPR_LENGTH, *node, NULL);
	}
#line 1572 "parser.c"
break;
}
}
#undef LLerror
#undef LLread
int _t3_config_parse(parse_context_t * LLuserData) {
	LLthisType LLthis;
	int LLsetjmpRetval;
	memset(LLthis.LLscnt_, 0, LL_NSETS * sizeof(int));
	memset(LLthis.LLtcnt_, 0, LL_NTERMINALS * sizeof(int));
	LLthis.LLtcnt_[0]++;
	LLthis.LLdata_ = LLuserData;
	LLthis.LLsymb_ = 0;
	LLthis.LLreissue_ = -2 /* LL_NEW_TOKEN */;
	LLsetjmpRetval = setjmp(LLthis.LLjmp_buf_);
	if (LLsetjmpRetval == 0) {
	LLread(&LLthis);
	_t3_config_0_config(&LLthis);
	if (LLthis.LLcsymb_ != 0) LLerror(&LLthis, 256 /* EOFILE*/);
	}
	return LLsetjmpRetval;
}

int _t3_config_parse_include(parse_context_t * LLuserData) {
	LLthisType LLthis;
	int LLsetjmpRetval;
	memset(LLthis.LLscnt_, 0, LL_NSETS * sizeof(int));
	memset(LLthis.LLtcnt_, 0, LL_NTERMINALS * sizeof(int));
	LLthis.LLtcnt_[0]++;
	LLthis.LLdata_ = LLuserData;
	LLthis.LLsymb_ = 0;
	LLthis.LLreissue_ = -2 /* LL_NEW_TOKEN */;
	LLsetjmpRetval = setjmp(LLthis.LLjmp_buf_);
	if (LLsetjmpRetval == 0) {
	LLread(&LLthis);
	_t3_config_1_include_config(&LLthis);
	if (LLthis.LLcsymb_ != 0) LLerror(&LLthis, 256 /* EOFILE*/);
	}
	return LLsetjmpRetval;
}

int _t3_config_parse_constraint(parse_context_t * LLuserData) {
	LLthisType LLthis;
	int LLsetjmpRetval;
	memset(LLthis.LLscnt_, 0, LL_NSETS * sizeof(int));
	memset(LLthis.LLtcnt_, 0, LL_NTERMINALS * sizeof(int));
	LLthis.LLtcnt_[0]++;
	LLthis.LLdata_ = LLuserData;
	LLthis.LLsymb_ = 0;
	LLthis.LLreissue_ = -2 /* LL_NEW_TOKEN */;
	LLsetjmpRetval = setjmp(LLthis.LLjmp_buf_);
	if (LLsetjmpRetval == 0) {
	LLread(&LLthis);
	_t3_config_6_constraint(&LLthis);
	if (LLthis.LLcsymb_ != 0) LLerror(&LLthis, 256 /* EOFILE*/);
	}
	return LLsetjmpRetval;
}

