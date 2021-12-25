/**
 * SYNTAX.H
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

#ifndef __SYNTAX_H__
#define __SYNTAX_H__

#define va_len(...) __va_len(__VA_ARGS__, NULL)

/* Prototype Declarations */
size_t __va_len(void *arg, ...);
char *program(char **stmts);
char *stmt(char *expr, char **stmts);
char *expr(char *primary);
char *primary(char *expr);

char *searchptrn(char *pattern, char *p);
int is_specified_ident(char *pattern, char *p); 
int is_space(char *p);
int is_alnum(char *p);


#endif // __SYNTAX_H__
