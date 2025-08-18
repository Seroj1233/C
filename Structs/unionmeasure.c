#include<stdio.h>

struct Measurement {
	int width;
	float length;
};

int main() {
	
	struct Measurement obj;
	int choose = 0;
	printf("Enter 0 to enter length or 1 to enter width");
	scanf("%d" , &choose);
	if(choose != 1 && choose != 0) {
		return 0;
	}
	if(choose == 1) {
		printf("Enter the width");
		scanf("%d" , &obj.width);
		printf("The width: %d" , obj.width);
	} else {
		printf("Enter the length");
		scanf("%f" , &obj.length);
		printf("The length is: %f" , obj.length);
	}
	return 0;
}
