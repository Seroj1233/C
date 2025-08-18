#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {};
	for(int i = 0; i < SIZE; ++i) {
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	int notzero = 0;
	for(int i = 0; i < SIZE; ++i) {
		if (arr[i] != 0) {
			arr[notzero] = arr[i];
			notzero++;
		}
	}
	 for (int i = notzero; i < SIZE; ++i) {
        arr[i] = 0;
    }
	
	for (int i = 0; i < notzero - 1; ++i) {
		for (int j = 0; j < notzero - i - 1; ++j) {
			if (arr[j] > arr[j + 1]){
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for(int i = 0; i < SIZE; ++i) {
		printf(" %d" , arr[i]);
	}
	printf("\n");
	return 0;	
}
