#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	for(int i = 0; i < SIZE - 1; ++i){
		for(int j = 0; j < SIZE - i - 1; ++j){
			if(arr[j] > arr[j + 1]){
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			}
		}
	}
	printf("The result is: ");
	for(int i = 0; i < SIZE; ++i){
		printf("%d" , arr[i]);
	}
	return 0;

}
