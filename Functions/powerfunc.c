#include<stdio.h>

int power(int num, int pow){
	int sum = 1;
	for(int i = 1; i < pow; ++i) {
		sum = sum * num;
	}
	return sum;
}
int main(){
	int num = 0;
	int pow = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the power: ");
	scanf("%d" , &pow);
	int res = power(num, pow);
	printf("The result is: %d\n" , res);
	return 0;
}
