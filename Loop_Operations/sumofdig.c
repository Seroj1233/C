#include<stdio.h>

int main(){
	int num = 0;
	int digit = 0;
	int sum = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("The result is: ");
	while(num > 0){
		digit = num % 10;
		sum = sum + digit;
		num = num / 10;
	}
	printf("%d\n" , sum);
	return 0;
}
