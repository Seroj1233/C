#include<stdio.h>

struct Point {
	float x;
	float y;
};

int main(){
	struct Point obj1, obj2;
	printf("Enter the first coordinate (x , y): ");
	scanf("%f %f" , &obj1.x , &obj1.y);
	printf("Enter the second coordinate (x , y): ");
	scanf("%f %f" , &obj2.x , &obj2.y);
	float distance = 0;
	distance = ((obj2.x - obj1.x) * (obj2.x - obj1.x) + (obj2.y - obj1.y) * (obj2.y - obj1.y));
	printf("The Euclidean distance is: %f\n" , distance);
	return 0;
}
