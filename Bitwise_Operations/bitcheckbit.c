#include<stdio.h>

int main(){
	int num = 0;
	int bit = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the n-th bit check it: ");
	scanf("%d" , &bit);
	if(num = num & (1 << bit)){
		printf("In that bit you have 1\n");
	} else {
		printf("In that bit you dont have 1\n");
	}
	return 0;
}
