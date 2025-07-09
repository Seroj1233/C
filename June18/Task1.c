#include<stdio.h>

int main(){

	printf("Please input lowercase letter: ");
	char letter = 0;
	scanf("%c" , &letter);
	letter = letter - ('a' - 'A'); 
	printf("The result is: %c\n" , letter);
	return 0;
}
