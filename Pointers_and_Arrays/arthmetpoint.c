#include<stdio.h>

int main(){

	int a = 20;
	int b = 10;

	int *ptr1 = &a;
	int *ptr2 = &b;

	int res1 = 0;
	int res2 = 0;

	res1 = *ptr1 + *ptr2;
	res2 = *ptr1 - *ptr2;
	printf("The result of addition is: %d\n" , res1);
	printf("The result of subtraction is:%d\n" , res2);

	return 0;


}
