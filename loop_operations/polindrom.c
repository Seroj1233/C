#include<stdio.h>

int main(){

	int oldnum;
	int reversed = 0;
	int digit;
	int newnum;
	printf("Enter a number to check if it is polindrom: ");
	scanf("%d" , &newnum);
	oldnum = newnum;
	while (newnum > 0) {
		digit = newnum % 10;
		reversed = reversed * 10 + digit;
		newnum = newnum / 10;
	} if (oldnum == reversed) {
		printf("The number is polindrome");
	} else {
		printf("The number is not polindrome");
	}
	return 0;




}
