#include<stdio.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("Enter the first number: ");
	scanf("%d" , &num1);
	printf("Enter the second number: ");
        scanf("%d" , &num2);
	printf("Enter the third number: ");
        scanf("%d" , &num3);
	if(num1 > num2 && num2 > num3){
		printf("The result is: %d %d %d\n" , num3, num2, num1);
	} else if(num2 >= num1 && num1 >= num3){
		printf("The result is: %d %d %d\n" , num3, num1, num2);
	} else if(num3 >= num2 && num2 >= num1){
		printf("The result is: %d %d %d\n" , num1, num2 , num3);
	} else if(num1 >= num3 && num3 >= num2){
		printf("The result is: %d %d %d\n" , num2, num3, num1);
	} else if(num2 >= num3 && num3 >= num1){
		printf("The result is: %d %d %d\n" , num1, num3, num2);
	} else {
		printf("The result is: %d %d %d\n" , num2, num1, num3);
	}
	return 0;
}
