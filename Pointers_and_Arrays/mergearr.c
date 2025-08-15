#include<stdio.h>
#define SIZE 10
#define SIZE1 5

int main(){
	int arr[SIZE] = {};
	int arr1[SIZE1] = {};
	int arr2[SIZE1] = {};
	for (int i = 0; i < SIZE1; ++i) {
		printf("Enter the numbers: ");
		scanf("%d" , &arr1[i]);
	}
	for (int i = 0; i < SIZE1; ++i) {
		printf("Enter the numbers: ");
		scanf("%d" , &arr2[i]);
	}
	int k = 0;
	for (int i = 0; i < SIZE1; ++i) {
		arr[k] = arr1[i];
		k++;
	}
	for (int i = 0; i < SIZE1; ++i) {
		arr[k] = arr2[i];
		k++;
	}
	for(int i = 0; i < SIZE - 1; ++i) {
		for(int j = 0; j < SIZE - 1 - i; ++j) {
			if(arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < SIZE; ++i) { 
		printf("%d" , arr[i]);
	}
	printf("\n");
	return 0;
}
