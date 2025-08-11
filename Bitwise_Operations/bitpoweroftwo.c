#include<stdio.h>

int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	if(num > 0 && ((num & (num - 1)) == 0)){
		printf("The number is power of two");
		} else {
		printf("The number is not power of two");
	}
	return 0;
}
