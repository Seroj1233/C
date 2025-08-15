#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {};
	for (int i = 0; i < SIZE - 1; ++i) {
		printf("Enter the number: ");
		scanf("%d" , &arr[i]);
	}
	int sum1 = 0;
	int sum2 = 0;
	int res = 0;
	for (int i = 0; i < SIZE; ++i) {
		sum1 = sum1 + arr[i];
	}
	sum2 = SIZE * (SIZE + 1) / 2;
	res = sum2 - sum1;
	printf("The missing number is: %d" , res);
	return 0;
}
