#include<stdio.h>

int main(){
	int a = 15;
	int *ptr = &a;
	printf("The address of a = %d is: %p\n" , *ptr, ptr);
	return 0;
}
