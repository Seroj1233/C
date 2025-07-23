#include<stdio.h>

int main(){

	int num = 0;
	int n = 0;
	printf("Enter the num to multiply then divide: ");
	scanf("%d" , &num);
	printf("Enter the power: ");
	scanf("%d" , &n);
	if ( 1 << n && n >> 1){
		printf("The result is: %d\n");
	}
	return 0;



}
