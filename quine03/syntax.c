/**
 * SYNTAX.C
 */

/**
 * BNF(Backus Naur Form)に則り処理をこなす
 */

/**
 * program	= stmt*
 * stmt		= expr ";"
 * 		| "{" stmt* "}"
 * 		| "if" "(" expr ")" stmt ("else" stmt)?
 * 		| "while" "(" expr ")" stmt
 * 		| "for" "(" expr ")" stmt
 * 		| "for" "(" expr ")" stmt
 * expr		= primary
 * primary	= num | ident | "(" expr ")"
 */

/**
 * char *は生成規則を、 char **は生成規則の結合をあつかう。
 * 生成規則を再帰的にたどることにより終端記号へ行き着けるようにする。
 */

#include "syntax.h"

char **program(char *stmt, ...)
{
	va_list ap;
	va_start(ap, stmt);
	char **program = (char **)malloc(sizeof(ap));
}

char **program(char **stmt_begin, ...)
{
	va_list ap;
	va_start(ap, stmt_begin);

	stmt(

	char **program;
	size_t pos=0;
	while(*(program+pos) = *va_arg(ap, char**)!= NULL)
	{
		pos++;
	}
	size_t pos = 0;
	va_end(ap);
}
char **stmt(char *expr, char **stmts)
{
}
char **expr(char *primary)
{
}
char **primary(char *expr)
{
}

char *searchptrn(char *pattern, char *p) // スペースに続く単語を探索
{
	while(*p)
	{
		if(is_space(p))
		{
			p++;
			continue;
		}
		if(is_specified_ident("\\\n", p))
		{
			p+=2;
			continue;
		}
		if(is_specified_ident(pattern, p))
		{
			return p;
		}
	}
	return NULL;
}

size_t __va_len(void *arg, ...)
{
	va_list ap;
	va_start(ap, arg);
	size_t count = 0;
	while(va_arg(ap) != NULL)
	{
		count++;
	}
	va_end(ap);
	return count;
}

int is_specified_ident(char *pattern, char *p) // 指定された識別子か否か
{
	return	(strncmp(p, pattern, sizeof(pattern)-1) == 0) &&
		(!is_alnum(p[sizeof(pattern)-1]))
}

int is_space(char *p) // タブ、改行、空白か
{
	return 	(*p == _hTab) ||
		(*p == _LFNF) ||
		(*p == ' ');
}

int is_alnum(char *p) // 英数字か
{
	return	('a' <= *p && *p <= 'z') ||
		('A' <= *p && *p <= 'Z') ||
		('0' <= *p && *p <= '9') ||
		(*p == '__');
}
