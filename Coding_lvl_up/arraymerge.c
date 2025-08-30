#include<stdio.h>
#define SIZE 5
#define SIZE1 10

void merge(int arr1[], int arr2[], int arr3[]) {
	
	int i = 0;
	int j = 0;
	int k = 0;

	while (i < SIZE && j < SIZE) {
		if (arr1[i] >= arr2[j]) {
			arr3[k] = arr2[j];
			++j;
			++k;
		} else {
			arr3[k] = arr1[i];
			++i;
			++k;
		}
	}
	while (i < SIZE) {
		arr3[k] = arr1[i];
		++i;
		++k;
	}
	while (j < SIZE) {
		arr3[k] = arr2[j];
		++j;
		++k;
	}
	
}

int main() {

	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	int arr3[SIZE1] = {};
	
	printf("Enter the first array numbers: ");
	for (int i = 0; i < SIZE; ++i) { 
		scanf("%d" , &arr1[i]);
	}

	printf("Enter the second array numbers: ");
	for (int i = 0; i < SIZE; ++i) {
		scanf("%d" , &arr2[i]);
	}

	merge(arr1, arr2, arr3);

	printf("Here is your merged and sorted array: ");
	for (int i = 0; i < SIZE1; ++i) {
		printf("%d " , arr3[i]);
	}

	printf("\n");
	return 0;
}
		

