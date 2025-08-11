#include<stdio.h>

int main(){
	int a = 10;
	char b = 20;
	double c = 2.5;
	int *ptr1 = &a;
	char *ptr2 = &b;
	double *ptr3 = &c;
	printf("The address of int a = %d is: %p\n" ,*ptr1, ptr1 );
	printf("The address of char b = %c is: %p\n" ,*ptr2, ptr2 );
	printf("The address of int a = %lf is: %p\n" ,*ptr3, ptr3 );
	return 0;
}
