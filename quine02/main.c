#define GEN 126
#include <stdio.h>
int main(int argc, char **argv){
	printf("generadion = %d\n", GEN+1);
	char *progdata = "#define GEN %d%c#include <stdio.h>%cint main(int argc, char **argv){%c%cprintf(%cgeneradion = %cd%cn%c, GEN+1);%c%cchar *progdata = %c%s%c;%c%cFILE *fp;%c%cif(!(fp=fopen(argv[1], %cw%c))){ printf(%cFILE OPEN ERROR!%cn%c); return 1; }%c%c%cfprintf(fp, progdata, GEN+1,10,10,10,9,34,37,92,34,10,9,34,progdata,34,10,9,10,9,34,34,34,92,34,10,10,9,10,10,9,34,92,34,10,9,10);%c%c%cif(fclose(fp)!=0){ printf(%cFILE CLOSE ERROR!%cn%c); return 1; }%c%creturn 0;%c}";
	FILE *fp;
	if(!(fp=fopen(argv[1], "w"))){ printf("FILE OPEN ERROR!\n"); return 1; }

	fprintf(fp, progdata, GEN+1,10,10,10,9,34,37,92,34,10,9,34,progdata,34,10,9,10,9,34,34,34,92,34,10,10,9,10,10,9,34,92,34,10,9,10);

	if(fclose(fp)!=0){ printf("FILE CLOSE ERROR!\n"); return 1; }
	return 0;
}