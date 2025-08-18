#include<stdio.h>
#define PI 3.14

struct Circle {
	float radius;
};

int main() {

	struct Circle obj;

	printf("Enter the radius of Circle: ");
	scanf("%f" , &obj.radius);

	float area = 0;
	area = PI * obj.radius * obj.radius;

	float circumference = 0;
	circumference = 2 * PI * obj.radius;
	
	printf("The result of area and circumference is: %f and %f\n" , area, circumference );
	return 0;
}
