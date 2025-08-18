#include<stdio.h>

union Value {
	float floatvalue;
	int intvalue;
};

int main() {

	union Value obj;

	printf("Enter the number in float: ");
	scanf("%f" , &obj.floatvalue);

	printf("float value: %f\n" , obj.floatvalue);
	printf("Reinterpreted as int(bits): %d\n" , obj.intvalue);
	return 0;
}
