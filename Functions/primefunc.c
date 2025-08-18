#include<stdio.h>

int prime (int num) {
	int prime = 0;
	if (num % 2 == 0) {
		printf("The number is composite\n");
		return 0;
	} else {
		printf("The number is prime\n");
		return 0;
	}
}

int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	int res = 0;
	res = prime(num);
	return 0;
}
