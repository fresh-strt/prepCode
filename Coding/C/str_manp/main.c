
#include <stdio.h>
#include "str_manp.h"


int main(int argc, char* argv[]){

	char str[] = "triumph";
	str_rev(str);
	printf("str after reversal is %s\n",str);
	return 0;
}
