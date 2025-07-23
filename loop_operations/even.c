#include<stdio.h>

int main(){

	int num = 0;
	printf("Enter a number: ");
	scanf("%d" , &num);
	if(num %2 == 0){
		printf("The number %d is Even\n ");
	} else {
		printf("The number %d is Odd\n ");
	}
	return 0;
}
