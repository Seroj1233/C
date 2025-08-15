#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	printf("The result is: ");
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] % 2 == 0){
			printf("%d" , arr[i]);
		}
	}
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] % 2 == 1){
			printf("%d" , arr[i]);
		}
	}
	printf("\n");
	return 0;
}
