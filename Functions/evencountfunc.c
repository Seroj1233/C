#include<stdio.h>
#define SIZE 5
int even(int arr[SIZE]){
	int count = 0;
	for (int i = 0; i < SIZE; ++i) {
		if (arr[i] % 2 == 0) {
			++count;
		}
	}
	return count;
}
int main(){
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE; ++i) {
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	int res = even(arr);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d" , arr[i]);
	}
	printf("\n");
	printf("The even numbers of this array is: %d" , res);
	printf("\n");
	return 0;
}
