#include<stdio.h>

int main(){

	int a = 20;
	double b = 2.5;

	int *ptr1 = &a;
	double *ptr2 = &b;

	ptr1 = NULL;
	ptr2 = NULL;

	printf("The address of a = %d is NULL: %p\n" , a , ptr1);
	printf("The address of b = %lf is NULL: %p\n" , b , ptr2);
	
	return 0;



}
