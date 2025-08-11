#include<stdio.h>

int main(){
	int num1 = 0;
	char operation = 0;
	int num2 = 0;
	while(1){
	printf("Enter the first number or (q) to quit: ");
	if(scanf("%d" , &num1) != 1) break;
	printf("Enter the operation(+, -, *, /): ");
	scanf(" %c" , &operation);
	printf("Enter the second number or (q) to quit: ");
	if(scanf("%d" , &num2) != 1) break;
	switch(operation){
		case '+' :
			printf("The result is: %d\n" , num1 + num2);
			break;
		case '-' :
			printf("The result is: %d\n" , num1 - num2);
			break;
		case '*' :
			printf("The result is: %d\n" , num1 * num2);
			break;
		case '/' :
			if(num2 == 0){
				printf("Error, You can not divide by 0\n");
			} else {
				printf("The result is: %d\n" , num1 / num2);
			break;
			}
	}
}
	return 0;
}	
