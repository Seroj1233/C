#include<stdio.h>

struct Rectangle {
	int length;
	int width;
};

int main(){
	struct Rectangle rec;

	printf("Enter the length: ");
	scanf("%d" , &rec.length);
	printf("Enter the width: ");
	scanf("%d" , &rec.width);
	int area = rec.length * rec.width;
	int per =  2 * (rec.length + rec.width);
	printf("The area and perimeter of rectangle is %d and %d" , area, per);
	printf("\n");
	return 0;



}
