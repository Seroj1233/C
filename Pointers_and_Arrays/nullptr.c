#include<stdio.h>

int main(){
	int a = 15;
	int *ptr = &a;
	ptr = NULL;
	printf("The address of a = %d is %p\n", a, ptr);
	return 0;
}
