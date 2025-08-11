#include<stdio.h>

int main(){
	int x = 0;
	int y = 0;
	int sum = 1;
	printf("Enter the number: ");
	scanf("%d" , &x);
	printf("Enter the power: ");
	scanf("%d" , &y);
	for(int i = 1; i <= y; ++i){
		sum = sum * x;
	}
	printf("%d\n" , sum);
	return 0;
}
