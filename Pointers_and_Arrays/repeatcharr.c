#include<stdio.h>
#define SIZE 10

int main(){
	char arr[SIZE] = {};
	printf("Enter characters: ");
	for (int i = 0; i < SIZE; ++i) {
		scanf(" %c" , &arr[i]);
	}
	int dup = 0;
	for (int i = 0; i < SIZE; ++i) {
		for (int j = i + 1; j < SIZE; ++j) {
			if(arr[i] == arr[j]) {
				dup = arr[i];
			}
		}
	}
	for (int i = 0; i < SIZE; ++i) {
		printf("%c" , arr[i] );
	}
	printf("\n");
	printf("The duplicate is: %c\n" , dup);
	return 0;
}
