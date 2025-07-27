#include<stdio.h>

int main(){

	int n;
	printf("Enter numbers length: ");
	scanf("%d" , &n);

	int arr[n];
	for(int i = 0; i < n; i ++) {
		printf("Enter number %d: " , i + 1);
		scanf("%d" , &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	printf("Max result: %d\n" , max);
	printf("Min result: %d\n" , min);
	return 0;



}
