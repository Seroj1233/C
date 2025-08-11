#include<stdio.h>

int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("The divisord of the number %d is: \n" , num);
	for(int i = 1; i <= num; ++i){
		if(num % i == 0){
			printf("%d\n" , i);
		}
	}
	return 0;
}
