#include<stdio.h>

int main(){
	int num = 0;
	int digit = 0;
	printf("Enter number greater than 12: ");
	scanf("%d" , &num);
	if(num < 12){
		printf("False\n");
	} else {
		printf("The result is: ");
		while(num > 0){
			digit = num % 10;
			num = num / 10;
			printf("%d" , digit);
		}
	}
	printf("\n");
	return 0;
}
