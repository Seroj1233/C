#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the number %d: ", i + 1);
		scanf("%d" , &arr[i]);
	}
	int max = arr[0];
	int min = arr[0];
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	printf("The max and min numbers of array are: %d %d" , max , min);
	return 0;
}
