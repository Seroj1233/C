#include<stdio.h>

int main(){
	int num = 0;
	printf("Enter the number to get its pattern: ");
	scanf("%d" , &num);
	for(int i = 0; i < num; ++i){
		for(int j = 0; j <= i; ++j){
		printf("%d" , j + 1);
		}
		printf("\n");
	}
	return 0;
}
