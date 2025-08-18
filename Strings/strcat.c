#include<stdio.h>
#include<string.h>
#define SIZE 50

void cat (char arr1[SIZE], char arr2[]) {
	strcat(arr1, arr2);
}	

int main(){
	char arr1[SIZE] = {};
	fgets(arr1, SIZE, stdin);
	char arr2[SIZE] = {};
	fgets(arr2, SIZE, stdin);
	cat(arr1, arr2);	
	printf("The result is: %s" , arr1);
	return 0;
}
