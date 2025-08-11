#include<stdio.h>

int main(){
	int num = 0;
	int is_even = 0;
	printf("Enter the number:");
	scanf("%d" , &num);
	if(num % 2 == 0){
		is_even = 1;
	} else {
		is_even = 0;
	}
	if(is_even){
		printf("The number is even\n");
	} else {
		printf("The number is odd\n");
	}
	return 0;
}
