#include<stdio.h>

int main(){
	int num = 0;
	int digit = 0;
	int reversed = 0;
	int palindrome = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	palindrome = num;
	while(num > 0){
		digit = num % 10;
		reversed = reversed * 10 + digit;
		num = num / 10;
	}

	if(reversed == palindrome){
		printf("Your number is polindrome");
	} else {
		printf("Your number is not polindrome");
	}
	return 0;
}
