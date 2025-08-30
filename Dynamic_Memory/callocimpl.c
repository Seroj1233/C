#include<stdio.h>
#include<stdlib.h>

int main() {

	int num = 0;
	printf("Enter array length: ");
	scanf("%d" , &num);

	float *arr = malloc(num * sizeof(float));
	
	for(int i = 0; i < num; ++i) {
		arr[i] = 0;
	}	
	printf("Enter the numbers: ");
	for(int i = 0; i < num; ++i) {
		scanf("%f" , &arr[i]);
	}

	printf("The result is: ");
	for (int i = 0; i < num; ++i) {
		printf(" %f " , arr[i]);
	}

	printf("\n");
	free(arr);
	return 0;
}
