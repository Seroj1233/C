#include<stdio.h>
#define SIZE 5
int main(){
	char arr[SIZE] = {};
	printf("Enter the characters: ");
	for (int i = 0; i  < SIZE ; ++i) {
		scanf(" %c" , &arr[i]);
	}

	for (int i = SIZE; i >= 0; --i) {
		printf("%c" , arr[i]);	
	}
	printf("\n");
	return 0;
}
