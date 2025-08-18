#include<stdio.h>
#include<string.h>
#define SIZE 50

chr* chr(char arr1[SIZE], char ch) {
	return strchr(arr1, ch);
}
int main(){
	char arr1[SIZE] = {};
	fgets(arr1, SIZE, stdin);
	char ch = 0;
	scanf(" %c" , &ch);
	char *res = chr(arr1, ch);
	printf("The result is: %c at position %ld" , ch, res - arr1);
	return 0;	

}
