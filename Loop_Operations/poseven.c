#include<stdio.h>

int main(){
	int num = 0;
	int isposandeven = 0;
	int isposnoteven = 0;
	int isnotposbutiseven = 0;
	int isnotposandeven = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	if(num > 0 && num % 2 == 0){
		isposandeven = 1;
	} else if(num > 0 && num % 2 != 0){
		isposnoteven = 1;
	} else if(num < 0 && num % 2 == 0){
		isnotposbutiseven = 1;
	} else {
		isnotposandeven = 1;
	}
	if(isposandeven){
		printf("The number is positive and even\n");
	} else if(isposnoteven){
		printf("The number is positive but not even\n");
	} else if(isnotposbutiseven){
		printf("The number is not positive but it is even\n");
	} else {
		printf("The number is not positive and is not even\n");
	}
	return 0;
}
