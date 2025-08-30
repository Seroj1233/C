#include<stdio.h>
#include<stdlib.h>

int main () {
	
	int num = 0;
	printf("Enter array length: ");
	scanf("%d" , &num);

	int *arr = (int*) malloc(num * sizeof(int));

	printf("Enter the numbers: ");
	for (int i = 0; i < num; ++i) {
		scanf("%d" , &arr[i]);
	}

	printf("The result is: ");

	for (int i = 0; i < num; ++i) {
		printf(" %d " , arr[i]);
	}

	printf("\n");
	free(arr);

	return 0;
}
