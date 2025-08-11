#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the number: ");
		scanf("%d" , &arr[i]);
	}
	printf("The result is: ");
	for(int i = 0; i < SIZE; ++i){
		arr[i] = arr[i] / SIZE;
		printf("%d\n" , arr[i]);
	}
	return 0;
}
