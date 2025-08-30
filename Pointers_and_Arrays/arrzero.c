#include<stdio.h>
#define SIZE 5

int main(){
	int arr[SIZE] = {};
	printf("Enter the numbers: ");
	for(int i = 0; i < SIZE; ++i) {
		scanf("%d" , &arr[i]);
	}

	int notzero = 0;
	for(int i = 0; i < SIZE; ++i) {
		if (arr[i] != 0) {
			int tmp = arr[notzero];
			arr[notzero] = arr[i];
			arr[i] = tmp;
			notzero++;
		}
	}
	
	for(int i = 0; i < SIZE; ++i) {
		printf(" %d" , arr[i]);
	}
	printf("\n");
	return 0;	
}
