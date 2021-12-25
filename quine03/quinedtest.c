char *progdata = "char *progdata = %c%s%c;%c[source code]int main(...){%c%cfprintf(stdout, progdata, 34, progdata, 34, 10, ...);[source code]";

#include <stdio.h>

int main(int argc, char **argv){
	printf ("hello world!\n");
	return 0;
}

