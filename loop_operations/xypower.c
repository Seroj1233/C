#include<stdio.h>

int main(){

	int x;
	int y;
	int sum = 1;	
	printf("Enter the number: ");
	scanf("%d" , &x);
	printf("Enter the power: ");
	scanf("%d" , &y);
	for (int i = 0 ; i < y; i++){
		sum = sum * x ;
	}
	printf("The result is: %d" , sum);
	return 0;




}


