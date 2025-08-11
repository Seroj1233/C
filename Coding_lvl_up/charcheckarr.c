#include<stdio.h>
#define SIZE 5

int main(){
	char arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the numbers: ");
		scanf(" %c" , &arr[i]);
	}
	printf("The result is: \n");
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] >= '0' && arr[i] <= '9'){
			printf("%c" , arr[i]);
		}
	}
	return 0;
}
