#include<stdio.h>

int main(){

	int n;
	printf("Enter array length: ");
	scanf("%d" , &n);
	
	int arr[n];
	for(int i = 0; i < n; i++) {
		printf("Enter a number %d: " , i + 1);
		scanf("%d" , &arr[i]);
	}
	int maxindex = 0;
	int minindex = 0;
	for(int i = 1; i < n; i++) {
		if(arr[i] > arr[maxindex]) {
			maxindex = i;
		}
		if(arr[i] < arr[minindex]){
			minindex = i;
		}
	}
	printf("Index counts starts from 0\n");
	printf("The max index of array is: %d\n" , maxindex);
	printf("The min index of array is: %d\n" , minindex);

	return 0;



	

}

