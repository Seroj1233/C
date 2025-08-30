#include<stdio.h>
#include "header.h" 
#define SIZE 50
#define SIZE1 20
int main() {
/*
	char arr[] = "Hello world!";
	int len = 0;
	int res = 0;
	res = mystrlen(arr);
	printf("The result is: %d\n", res );
	return 0;
	

	char arr1[SIZE] = "Hello";
	const char arr2[] = "vazgen";
	mystrcpy(arr1, arr2);
	printf("The result is: %s" , arr1);
	return 0;
	
	
	char dest[SIZE] = "";
	fgets(dest, SIZE, stdin);
	char src[SIZE1] = "";
	fgets(src, SIZE1, stdin);
	mycat(dest, src);
	printf("The result is: %s" , dest);
	return 0;
}
