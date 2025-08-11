#include<stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	printf("Enter the first number: ");
	scanf("%d" , &num1);
	printf("Enter the second number: ");
	scanf("%d" , &num2);
	for(int i = 2; i <= num1; ++i){
		if(num1 % i == 0){
			for(int j = 2; j <= num2; ++j){
				if(num2 % i == 0){
					printf("The lowest divisor of these two is: %d\n" , i);
					return 0;
				}
			}
		}
	}
	printf("There is not common divisor\n");
	return 0;
}
