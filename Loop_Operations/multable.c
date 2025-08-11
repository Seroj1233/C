#include<stdio.h>

int main(){
	int num = 0;
	int sum = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("The mul table of number %d is:\n " , num);
	for(int i = 1; i <= 10; ++i){
		sum = i * num;
		printf("%d\n" , sum);
	}
	return 0;
}
