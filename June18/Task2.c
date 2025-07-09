#include<stdio.h>

int main(){

	char letter = 0;
	printf("Input uppercase letter to get lowercase %c\n" , letter);
	scanf("%c" , &letter);
	letter = letter + ('a' - 'A');
	printf("The result is %c\n" , letter);
	return 0;
}
