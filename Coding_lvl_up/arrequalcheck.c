#include<stdio.h>
#define SIZE 5

int equal(int arr1[] , int arr2[]){
	int res = 0;
	for(int i = 0; i < SIZE; ++i){
		if(arr1[i] == arr2[i] && SIZE == SIZE){
				return res = 1;
		} else {
			return res = 0;
		}
	}


}
int main(){
	int arr1[SIZE] = {};
	int arr2[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the number: ");
		scanf("%d" , &arr1[i]);
	}
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the number: ");
		scanf("%d" , &arr2[i]);
	}
	if(equal(arr1, arr2) == 1){
		printf("The arrays are equal");
	} else {
		printf("The arrays are not equal");
	}
	return 0;
}
