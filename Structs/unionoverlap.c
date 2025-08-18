#include<stdio.h>

union Data {
	int intvalue;
	char charvalue;
};

int main() {
	union Data obj;

	obj.intvalue = 10;

	printf("The int value is: %d" , obj.intvalue);
	printf("The char value is: %x", obj.charvalue);
	return 0;
}
