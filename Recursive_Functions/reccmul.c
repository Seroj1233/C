#include<stdio.h>

int mul(int num) {
	if (num < 10) {
		return num;
	}
	return mul(num % 10) * mul(num / 10);
}


int main() {

	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	int res = 0;
	res = mul(num);
	if (num == 0) {
		printf("The result is: 0");
	} else {
	printf("The result is: %d" , res);
	}
	printf("\n");
	return 0;
}

