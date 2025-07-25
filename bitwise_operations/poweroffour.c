#include<stdio.h>

int main(){

	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	if (num > 0 && ((num & (num - 1)) == 0) && (num - 1) % 3 == 0) {
		printf("Your number is power of four");
	} else {
		printf("Your number is not power of four");
	}
	return 0;




}
