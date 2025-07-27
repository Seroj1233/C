#include<stdio.h>

int main(){

	int n;
	printf("Enter array length: ");
	scanf("%d" , &n);
	int arr1[n];
	int arr2[n];
	int res;
	for(int i = 0; i < n; i++){
		printf("Enter number %d: " , i + 1);
		scanf("%d" , &arr1[i]);
	}
	for(int i = 0; i < n; i++){
		printf("Enter number %d: " , i + 1);
		scanf("%d" , &arr2[i]);
	}
	for(int i = 0; i < n; i++){
		res = arr1[i] * arr2[i];
		printf("The result is: %d\n" , res);
	}
	return 0;



}
