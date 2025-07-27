#include<stdio.h>

int main(){
	
	int res;
	char c1 = 0;
	short sh = 0;
	char c2 = 0;

	printf("Enter first value: ");
	scanf(" %c" , &c1);
	printf("Enter second value: ");
	scanf(" %c" , &c2);
	printf("Enter third value: ");
	scanf("%hd" , &sh);

	res = (c1 << 24) | (c2 << 16) | (unsigned short)sh;

	printf("The result is: %d\n" , res);
	
	return 0;




}
