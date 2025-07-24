#include<stdio.h>

int main(){

	int num;
	int digit;
	int sum = 0;
	printf("Enter a number to add its digits: ");
	scanf("%d" , &num);
	while (num != 0) {
		 digit = num % 10;
		 sum = sum + digit;
  		 num = num / 10;
	} 
	printf("The result is: %d" , sum);
	return 0;




}
