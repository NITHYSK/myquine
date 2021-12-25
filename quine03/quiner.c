/**
 * QUINER.C
 */
#include "syntax.h"
#include "quiner.h"

char *replace(char *srccode)
{
	char *replaced;
	replaced = (char *)malloc(sizeof(srccode));

	char *p = replaced;
	while(*(srccode++))
	{
		if(
				*srccode == _hTab ||
				*srccode == _LFNF ||
				*srccode == _doubleComma ||
				*srccode == _backSlash
		  )
		{
			*p = '%c';
		} else {
			*p = *srccode;
		}
		p++;
	}
	return replaced;
}

char *begin2main(char *srccode) // ソースコードの開始からmain関数直前までの文字列を返す
{
	char *p = srccode;
	if(searchptrn("main", p) == NULL)	return NULL;
	

	char *b2m; // 戻り値
	b2m = (char *)calloc(p-srccode+1, sizeof(char)); // ソースコードの先頭アドレスとpの差分+終端文字分だけメモリを確保
	strncmp(srccode, b2m,) 

}

char *aftermain(char *srccode) // main(){...}を検索し、{のポインタを返す
{
	char *p srccode;
	char *ret;
	
	if(
			searchptrn("main",p)	&&
			searchptrn("(",p)	&&
			searchptrn(")",p)	&&
			searchotrn("{",p)	&&
	)
	{
		ret = p;
	} else {
		return NULL;
	}

	if(		searchptrn("}",p))
	{
		return p;
	}

	char *ret; // mainが見つかった場合の戻り値
}


char *main2end(char *srccode)
{
}

