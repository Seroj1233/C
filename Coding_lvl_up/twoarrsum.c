#include<stdio.h>
#define SIZE 5

int main(){
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	int res = 0;
	for(int i = 0; i < SIZE; ++i){
		printf("Enter first array numbers: ");
		scanf("%d" , &arr1[i]);
	}
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the second array numbers: ");
		scanf("%d" , &arr2[i]);
	}
	printf("The result is: \n");
	for(int i = 0; i < SIZE; ++i){
		res = arr1[i] * arr2[i];
		printf("%d\n" , res);
	}
	return 0;
}
