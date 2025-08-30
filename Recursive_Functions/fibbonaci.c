#include<stdio.h>

int fib(int num) {
	if ( num < 2 && num >= 0) {
		return num;
	} else {
		return fib(num-1) + fib(num-2);
	}
}

int main() {

	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	int res = fib(num);
	printf("The result is: %d" , res);
	printf("\n");
	return 0;
}
