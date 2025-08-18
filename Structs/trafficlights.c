#include<stdio.h>

enum lights { Red, Yellow, Green };

int main() {

	int signal = 0;
	int collor = 0;
	enum lights obj;
	printf("Enter number from (0 - 2): ");
	scanf("%d" , &collor);

	if(collor == Red) {
		collor = Red;
	} else if (collor == Yellow) {
		collor = Yellow;
	} else if (collor == Green) {
		collor = Green;
	}

	switch(collor) {
		case Red : 
			printf("Red - Stop\n");
			break;
		case Yellow :
			printf("Yellow - Ready\n");
			break;
		case Green :
			printf("Green - Go\n");
			break;
		default :
			printf("Enter correct number\n");
	}
	return 0;





}
