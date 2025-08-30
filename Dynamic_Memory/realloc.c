#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 0;
	printf("Enter the array length: ");
	scanf("%d" , &num);

	int *arr = malloc(num * sizeof(int));
	
	printf("Enter the numbers: ");
	for (int i = 0; i < num; ++i) {
		scanf("%d" , &arr[i]);
	}

	printf("The result is: ");
	for (int i = 0; i < num; ++i) {
		printf("%d\n" , arr[i]);
	}
	printf("\n");

	int resize = 0;
	printf("Enter new length: ");
	scanf("%d" , &resize);

	int *newarr = realloc(arr, resize * sizeof(int));
	
	arr = newarr;
	printf("Enter the numbers: ");
	for (int i = num; i < resize; ++i) {
		scanf("%d" , &arr[i]);
	}
	
	printf("The updated result is: ");
	for (int i = 0; i < resize; ++i) {
		printf("%d " , arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}

