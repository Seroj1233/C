#include<stdio.h>

int rev (int num) {
	int rev = 0;
	int digit = 0;
	while (num > 0) {
		digit = num % 10;
		rev = rev * 10 + digit;
		num = num / 10;
	}
	return rev;
}
int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	int res = rev(num);
	printf("The reversed number is: %d\n" , res);
	return 0;
}
		
		


