#include<stdio.h>

int main(){
	int temp = 0;
	int is_cold = 0;
	printf("Enter the temperature: ");
	scanf("%d" , &temp);
	if(temp <= 15){
		is_cold = 1;
	} else {
		is_cold = 0;
	}
	if(is_cold){
		printf("It is cold");
	} else {
		printf("It is warm");
	}
	return 0;
}
