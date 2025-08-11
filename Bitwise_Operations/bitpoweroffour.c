#include<stdio.h>

int main(){
	int num = 0;
	int bit = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	if(num > 0 && ((num & (num - 1)) == 0) && (num - 1) % 3 == 0){
		printf("The number is power of four: %d\n" , num);
	} else {
		printf("The number is not power of four: %d\n", num);
	}
	return 0;
}
