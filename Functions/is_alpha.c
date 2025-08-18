#include<stdio.h>

char is_alpha (char ch) {
	if (ch >= '0' && ch <= '9') {
		printf("False\n");
	} else {
		printf("True\n");
	}
	return ch;
}

int main(){
	char ch = 0;
	printf("Enter the character: ");
	scanf(" %c" , &ch);
	int res = is_alpha(ch);
	return 0;
}
