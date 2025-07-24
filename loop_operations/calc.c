#include<stdio.h>

int main(){

	int num1;
	int num2;
	char ch;
	
	
	while (1) {
	 	printf("Enter the first number or (q) to quit: ");
       		if(scanf("%d" , &num1) != 1) break;

	        printf("Enter the operation (+,-,*,/) or (q) to quit: ");
	        scanf(" %c" , &ch);

	        printf("Enter the second number or (q) to quit: ");
	        if(scanf("%d" , &num2))

	switch (ch) {
			
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
			if(num2 == 0) {
				printf("Error");
			} else {

			printf("The result is: %d\n" , num1 / num2);
			break;
			}
	}
			
}

return 0;
}

