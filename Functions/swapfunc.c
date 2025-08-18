#include<stdio.h>

void swap(int *num1, int *num2){
	*num1 = *num1 ^ *num2;
	*num2 = *num1 ^ *num2;
	*num1 = *num1 ^ *num2;
}
int main(){
	int num1 = 0;
	int num2 = 0;
	printf("Enter the first number to swap: ");
	scanf("%d" , &num1);
	printf("Enter the second number to swap: ");
	scanf("%d", &num2);
	swap(&num1, &num2);
	printf("The result of swap is a = %d b = %d" , num1, num2);
	return 0;
}
