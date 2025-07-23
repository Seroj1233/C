#include<stdio.h>

int main(){

	int num = 0;
	printf("Enter a number: ");
	scanf("%d" , &num);
	if (num > 0 && (num & (num - 1)) == 0 ) {
			printf("Your number is power of 2");
		} else {
	printf("Your number is not power of 2");
	}
	return 0;	


}
