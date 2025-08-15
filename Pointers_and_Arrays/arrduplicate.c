#include<stdio.h>
#define SIZE 6

int main(){
	int arr[SIZE] = {};
	printf("Enter the number: ");
	for (int i = 0; i < SIZE; ++i) {
		scanf("%d" , &arr[i]);
	}
	for (int i = 0; i < SIZE - 1; ++i) {
		for (int j = 0; j < SIZE - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
			int tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			}
		}
	}
	int unique = 0;;
	for (int i = 0; i < SIZE; ++i) {
		if (arr[i] != arr[unique]) {
			unique++;
			arr[unique] = arr[i];
		}
	}
	for (int i = 0; i <= unique; ++i) {
		printf("%d" , arr[i]);
	}
	printf("\n");
	return 0;

	


}
