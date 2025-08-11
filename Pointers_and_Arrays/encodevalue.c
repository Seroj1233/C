#include<stdio.h>

int main(){
	int res = 0;
	char c1 = 0;
	char c2 = 0;
	short sh = 0;
	printf("Enter the character: ");
	scanf(" %c" , &c1);
	printf("Enter the character: ");
	scanf(" %c" , &c2);
	printf("Enter the number: ");
	scanf("%hd" , &sh);


	res = c1 << 24 | c2 << 16 | (short)sh;
	printf("The result is: %d\n" , res);
	return 0;
}
