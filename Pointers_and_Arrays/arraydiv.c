#include<stdio.h>

int main(){

	int n;
	printf("Enter array length: ");
	scanf("%d" , &n);

	int arr[n];
	for(int i = 0; i < n; i++) {
		printf("Enter number %d: ", i + 1);
		scanf("%d" , &arr[i]);
	}
	for(int i = 0; i <n; i++) {
		arr[i] = arr[i] / n;
		printf("The result is: %d\n" , arr[i]);
	}
	return 0;


}
