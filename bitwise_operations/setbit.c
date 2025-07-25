#include<stdio.h>

int main(){

	int num = 0;
	int nbit = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the n-th bit to set it (the bit starts from 0): ");
	scanf("%d" , &nbit);
	if (num = num | 1 << nbit) {
		printf("The result is: %d\n" , num);
	}
	return 0;
}
