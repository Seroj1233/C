#include<stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	printf("Enter the first number: ");
	scanf("%d" , &num1);
	printf("Enter the second number: ");
	scanf("%d" , &num2);
	for(int i = num1; i > 1; --i){
		if(num1 % i == 0){
			for(int j = num2; j > 1; --j){
				if(num2 % i == 0) {
					printf("The biggest divisor of these two is: %d\n" , i);
					return 0;
				}
			}
		}
	}
	printf("There is not biggest divisor of these two\n");
	return 0;
}
