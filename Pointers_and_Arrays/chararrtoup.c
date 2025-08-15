#include<stdio.h>
#include<ctype.h>
#define SIZE 50
int main(){
	char arr[SIZE] = {};
	printf("Enter characters: ");
	fgets(arr, SIZE , stdin);
	for (int i = 0; arr[i] != '\0'; ++i) {
		arr[i] = toupper(arr[i]);

	}
	printf("The result is: %s" , arr);
	return 0;
}
