#include <stdio.h>
int main() {
	char progdata[] =
	    "#include <stdio.h>%cint main(){char progdata[] = "
	    "%c%s%c;printf(progdata,10,34,progdata,34);}";
	printf(progdata, 10, 34, progdata, 34);
}
