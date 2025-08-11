#include<stdio.h>

int main(){
	char sym = 0;
	char lowercase = 0;
	printf("Enter the letter to make it lowercase: ");
	scanf("%c" , &sym);
	if(sym >= 'A' && sym <= 'Z'){
		printf("The result is: %c\n" , sym + 32);
	} else {
		printf("Please input uppercase letter\n");
	}
	return 0;
}
