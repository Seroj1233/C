#include<stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int sum = 0;
	printf("Enter the first number: ");
	scanf("%d" , &a);
	printf("Enter the second number: ");
	scanf("%d" , &b);
	for (int i = a; i <= b ; i++){
		if ( i % 2 == 0)
			sum = sum + i;
	}
	printf("The sum of evens are: %d\n" , sum);
	return 0;
	}

