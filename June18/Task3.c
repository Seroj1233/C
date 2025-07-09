#include<stdio.h>

int main(){

	int x = 0;
	int y = 0;
	printf("Input the first number ");
	scanf("%d" , &x);
	printf("Input the second number ");
	scanf("%d" , &y);
	int res = x + y;
	printf("The result is %d\n" , res);
	return 0;
}
