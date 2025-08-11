#include<stdio.h>

int main(){
	int num = 0;
	int digit = 0;
	int lucky = 1;
	printf("Enter the number: ");
	scanf("%d" , &num);
	while(num > 0){
		digit = num % 10;
		if(digit != 4 && digit != 7){
			lucky = 0;
			break;
		}
		num = num / 10;
	}
	if(digit && lucky){
		printf("The number is lucky\n");
	} else {
		printf("The number is not lucky\n");
	}
	return 0;
}
