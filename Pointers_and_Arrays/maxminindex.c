#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {12, 233, 33, 4, 55};
	int max = 0;
	int min = 0;
	for(int i = 0; i < 5; ++i){ 
		if(arr[i] > arr[max]){
			max = i;
		}
		if(arr[i] < arr[min]){
			min = i;
		}
	}
	printf("The max and min indexes are: %d %d\n" , max, min);
	return 0;
}
