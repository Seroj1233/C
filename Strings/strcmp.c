#include<stdio.h>
#include<string.h>
#define SIZE 50

int cmp(char arr1[SIZE], char arr2[SIZE]){
	strcmp(arr1, arr2);
	int res = strcmp(arr1, arr2);
	return res;
}

int main(){
	char arr1[SIZE] = {};
	fgets(arr1, SIZE, stdin);
	char arr2[SIZE] = {};
	fgets(arr2, SIZE, stdin);
	int res = cmp(arr1, arr2);
	printf("The result is: %d", res);
	return 0;
}
