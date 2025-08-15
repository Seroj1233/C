#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	int sorted = 1;
	for (int i = 0; i < SIZE; ++i) {
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	for (int i = 0; i < SIZE; ++i) {
		if(arr[i] > arr[i + 1]) {
			sorted = 0;
		}
	}
	if (sorted == 1) {
		printf("The array is sorted\n");
	} else {
		printf("The array is not sorted\n");
	}
	return 0;
}
