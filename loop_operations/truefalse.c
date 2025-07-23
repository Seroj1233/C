#include<stdio.h>

int main(){

	char sym;
	printf("Enter a number to get true: ");
	scanf("%c" , &sym);

	if(sym >= '0' && sym <= '9') {
		printf("True\n" , sym);
	} else {
		printf("False\n");
	}
	return 0;


}
