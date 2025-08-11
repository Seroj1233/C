#include<stdio.h>

int main(){
	int num = 0;
	int bit = 0;
	printf("Enter the number to multiply and divide: ");
	scanf("%d" , &num);
	printf("Enter the number's n-th bit: ");
	scanf("%d" , &bit);
	num = num << bit;
	num = num >> bit;
	printf("The result is: %d\n" , num);
	return 0;
}
