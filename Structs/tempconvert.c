#include<stdio.h>

struct Temperature {
	float celsius;
	float fahrenheit;
};

int main() {

	struct Temperature obj;

	printf("Enter the temperature in Celsius: ");
	scanf("%f" , &obj.celsius);

	obj.fahrenheit = (obj.celsius * 9 / 5) + 32;

	printf("The result in Celsius: %f\n" , obj.celsius);
	printf("The result in Fahrenheit will be: %f\n" , obj.fahrenheit);
	return 0;
}
