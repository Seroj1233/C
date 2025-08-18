#include<stdio.h>

union Flag {
	int number;
	char flag;
};

int main() {
	
	union Flag obj;

	printf("Enter the number: ");
	scanf("%d" , &obj.number);

	printf("The ASCII value is: %c\n" , obj.flag);
	return 0;
}
