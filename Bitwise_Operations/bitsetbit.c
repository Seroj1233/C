#include<stdio.h>

int main(){
	int num = 0;
	int bit = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the n-th bit to set: ");
	scanf("%d" , &bit);
	if(num = num | (1 << bit)){
		printf("The result is: %d" , num);
	}
	return 0;
}
