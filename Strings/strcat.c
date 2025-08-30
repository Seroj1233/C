#include<stdio.h>

void mycat(char *dest, const char *src) {

	while (*dest) {
		dest++;
	}
	while(( *dest++ = *src++)) { 
		*dest != '\0';
	}
}


