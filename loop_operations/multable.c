#include<stdio.h>

int main(){

	int num;
	int sum = 1;
	printf("Enter the number: ");
	scanf("%d" , &num);
	for (int i = 1; i <= 9 ; i++ ) {
		sum = num * i;	
		printf("The multiplication table is: ");
		printf("%d\n" , sum);
		sum /= i;
	}
	return 0;





}
