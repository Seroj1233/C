#include<stdio.h>

int main(){

	int a = 1;
	char *ptr = (char*)&a;
	if(*ptr == 1) {
		printf("Your pc is little-endian\n");
	} else { 
		printf("Your pc is big-endian\n");
	}
	return 0;


}
