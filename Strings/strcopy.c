#include<stdio.h>
#include<string.h>
#define SIZE 50
void copy(char arr1[], const char arr2[]){
	strcpy(arr1, arr2);
}

int main(){
	char arr1[SIZE] = "Hello!";
	char arr2[] = "Everyone!";
	copy(arr1, arr2);
	printf("the result is: %s", arr1);
	return 0;
}
