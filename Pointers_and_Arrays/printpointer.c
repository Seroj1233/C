#include<stdio.h>

int main(){

	int a = 10;
	float b = 1.5;
	double c = 3.5;

	int *ptr1 = &a;
	float *ptr2 = &b;
	double *ptr3 = &c;
	
	printf("The address of int a = %d is: %p\n" , a , ptr1);
	printf("The address of float b = %f is: %p\n" , b , ptr2);
	printf("The address of double c = %lf is: %p\n" , c , ptr3);

	return 0;

}
