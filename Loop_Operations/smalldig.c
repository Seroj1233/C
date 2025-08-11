#include<stdio.h>

int main(){
	int num = 0;
	int digit = 0;
	int min = 9;
	printf("Enter the number: ");
	scanf("%d" , &num);
	while(num > 0){
		digit = num % 10;
		if(digit < min){
			min = digit;
		}
		num = num / 10;
	}
	printf("The lowest digit in the number is: %d\n" , min);
	return 0;
}
