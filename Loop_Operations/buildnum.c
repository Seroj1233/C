#include<stdio.h>

int main(){
	int digit = 0;
	int num = 0;
	for(int i = 0; i < 3; ++i){
		printf("Enter digit: ");
		scanf("%d" , &digit);
		num = num * 10 + digit;
	}
	printf("The result is: %d\n" , num);
	return 0;
}
