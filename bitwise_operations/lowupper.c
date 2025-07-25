#include<stdio.h>

int main(){

	char ch;
	printf("Enter the character: ");
	scanf("%c" , &ch);
	if( ch >= 'a' && ch <= 'z' ) {
		ch = ch & ~(1 << 5);
		printf("The uppercase letter: %c\n" , ch);
	} else if (ch >= 'A' && ch <= 'Z') {
		ch = ch | (1 << 5);
		printf("The lowecase letter: %c\n" , ch);
	}
	else {
		printf("You did not write a letter\n");
	}
	return 0;


}
