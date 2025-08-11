#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {1, 2, 3, 4, 5};
	int *ptr = arr;
	printf("The numbers of array are: \n");
	for(int i = 0; i < 5; ++i){
	printf("%d\n" , ptr[i]);
	}
	
	return 0;
}
