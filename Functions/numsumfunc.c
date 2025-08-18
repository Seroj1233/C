#include<stdio.h>

int sum (int num) {
	int sum1 = 0;
	int digit = 0;
	while (num > 0) {
		digit = num % 10;
		sum1 = sum1 + digit;
		num = num / 10;
	}
	return sum1;
}
int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	int res = sum(num);
	printf("The sum of number is: %d\n" , res);
	return 0;
}
