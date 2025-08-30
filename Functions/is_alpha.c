#include<stdio.h>
#include<stdbool.h>

char is_alpha (char ch) {
	if (ch >= '0' && ch <= '9') {
		return false;
	} else {
		return true;
	}
}

int main(){
	char ch = 0;
	printf("Enter the character: ");
	scanf(" %c" , &ch);
	int res = is_alpha(ch);
	if (res) {
		printf("True\n");
	} else {
		printf("False\n");
	}
	return 0;
}
