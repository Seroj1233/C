#include<stdio.h>

union Number {
	int intvalue;
	float floatvalue;
};

int main() {
	union Number obj;

	obj.intvalue = 10;

	printf("The number in int is 10\n");
	printf("The result in int: %d\n" , obj.intvalue);
	printf("The result in float %f\n\n" , obj.floatvalue);

	obj.floatvalue = 1.5;

	printf("The number in float is 1.5\n");
	printf("The result in float: %f\n" , obj.floatvalue);
	printf("The result in int: %d\n\n" , obj.intvalue);

	printf("The results in other data types are undefined!!!\n");

	return 0;
}
