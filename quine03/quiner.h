/**
 * QUINER.H
 */

#ifndef __QUINER_H__
#define __QUINER_H__

#define _hTab		(char)9;
#define _LFNF		(char)10;
#define _doubleComma	(char)34;
#define _percent	(char)37;
#define _backSlash	(char)92;

static const char *prologue =
{
"\
const char *progdata = \"const char *progdata = \%c\%s\%c;\%c
"
};

/* プロトタイプ宣言 */
char *replace(char *srccode);
char *begin2main(char *srccode);
char *main2end(char *srccode);

#endif //__QUINER_H__
