#include<stdio.h>

int main(){
	char ch = 0;
	printf("Enter letter: ");
	scanf("%c" , &ch);
	if(ch >= 'a' && ch <= 'z'){
		printf("The result is: %c" , ch - 32);
	} else if(ch >= 'A' && ch <= 'Z') {
		printf("The result is: %c" , ch + 32);
	}
	return 0;
}
