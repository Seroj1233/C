#include<stdio.h>

int factorial (int num) {
	int sum = 1;
	for (int i = 1; i <= num; ++i) {
		sum = sum * i;
	}
	return sum;
}

int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	int res = factorial(num);
	printf("The factorial is: %d\n" , res);
	return 0;
}
