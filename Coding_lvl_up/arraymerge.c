#include <stdio.h>
#define SIZE 5
#define SIZE1 10
void merge(int arr1[], int arr2[], int arr3[] ){
	int k = 0;
	for(int i = 0; i < SIZE; ++i){
		arr3[k] = arr1[i];
		k++;
	}
	for(int j = 0; j < SIZE; ++j){
		arr3[k] = arr2[j];
		k++;
	}
}
int main(){
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	int arr3[SIZE1] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the first array numbers: ");
		scanf("%d" , &arr1[i]);
	}
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the second array numbers: ");
		scanf("%d" , &arr2[i]);
	}
	merge(arr1, arr2, arr3);
	printf("The result of merged arrays is: ");
	for(int i = 0; i < SIZE1; ++i){
		printf("%d" , arr3[i]);
	}
	printf("\n");
	return 0;
}
