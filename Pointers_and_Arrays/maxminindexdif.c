#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	int max = 0;
	int min = 0;
	for(int i = 0; i < SIZE; ++i){
		if(arr[i] > arr[max]){
			max = i;
		}
		if(arr[i] < arr[min]){
			min = i;
		}
	}
	printf("The diff between max and min index is: %d\n" , max - min);
	return 0;
}
