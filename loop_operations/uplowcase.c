#include <stdio.h>

int main(){

	char sym;
	char lowercase;
	printf("Enter an uppercase letter to get its lowercase: ");
	scanf("%c" , &sym);


	if(sym >= 'A' && sym  <= 'Z') {
		char lowercase = sym + 32;
		printf("Here is the lowecase version: %c\n" , lowercase);
	} else { 
		printf("Your entered letter is not uppercase\n");
	}
	return 0;


}

