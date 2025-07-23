#include<stdio.h>

int main(){
	
	int num = 0;
	int digit;
	printf("Enter a number greater than 12: ");
	scanf("%d" , &num);
	if (num <= 12) {
		printf("False");
	} else {
		printf("Here is your number: ");
		while( num > 0) {
			int digit = num % 10;
			printf("%d" , digit);
			num = num /10;
		}
		printf("\n");
	}
	return 0;
}


