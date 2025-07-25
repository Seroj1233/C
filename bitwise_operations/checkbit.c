#include<stdio.h>

int main(){

	int num = 0;
	int nbit = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the n-th bit to check if there is 1: ");
	scanf("%d" , &nbit);
	if(num = num & (1 << nbit)) {
		printf("The %d bit is 1\n" , nbit);
	} else {
		printf("The %d bit is 0\n" , nbit);
	}
	return 0;
}	
