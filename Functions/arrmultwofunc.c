#include<stdio.h>
#define SIZE 5
void mul(int arr[SIZE]){
	for (int i = 0; i < SIZE; ++i) {
		arr[i] = arr[i] * 2;
	}
}

int main(){
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE; ++i) {
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	mul(arr);
	for (int i = 0; i < SIZE; ++i) {
		printf(" %d " , arr[i]);
	}
	printf("\n");
	return 0;
}
