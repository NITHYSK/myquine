/**
 * MAIN.C
 */

#include "quiner.h"
#include <stdio.h>

/* MAIN */
int main(int argc, char **argv)
{
	fprintf(stdout, prologue);	// プロローグを出力
	fprintf(
			stdout,
			"char *progdata = \"%s\"",
			replace(begin2main(srccode))
	       );			// データ部を出力
	fprintf(stdout, srccode);	// ソース本体を出力
	fprintf(stdout, "fprintf(stdout, progdata, ");

	return 0;
}
