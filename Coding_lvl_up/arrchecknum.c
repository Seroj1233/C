#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	int num = 0;
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	printf("Enter the number: ");
	scanf("%d" , &num);
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] == num){
			printf("You have that number in array: %d\n" , num);
		}
	}
	return 0;
}
