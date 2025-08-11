#include<stdio.h>
#define SIZE 5

int main(){
	char str[SIZE] = {};
	for(int i = 0; i < SIZE; ++i){
		printf("Enter character: ");
		scanf(" %c" , &str[i] );
	}
	printf("The result is: ");
	for(int i = 0; i < SIZE; ++i){
		if(str[i] >= 'a' && str[i] <= 'z'){
			str[i] = str[i] - 32;
			printf("%c" , str[i]);
		}
	}
	return 0;
}
