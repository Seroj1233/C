#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	int count = 0;
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the number: ");
		scanf("%d" , &arr[i]);
	}
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] % 2 == 1){
			count++;
		}
	}
	printf("The result is: %d\n" , count);
	return 0;
}
