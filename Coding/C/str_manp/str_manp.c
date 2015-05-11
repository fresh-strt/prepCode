
#include<stdio.h>
#include "str_manp.h"

void str_rev(char* str){

	//first test for unexpected input
	if( str==NULL ){
		printf("input string is NULL\n");
		return;
	}
	else{
		char temp;
		char* t1 = str, *t2 = str;
		while(*t2 != '\0')
			t2++;
		t2--; //because without this tail will point to null char due to prev increment
		while(t1< t2){
			temp = *t2;
			*t2 = *t1;
			*t1 = temp;
			t1++;
			t2--;
		}
		printf("reversed string\n");
		return;
	}
}
