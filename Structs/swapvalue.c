#include<stdio.h>

struct Pair {
	int a;
	int b;
};

int main() {

	struct Pair obj, temp;
	
	printf("Enter the first number to swap: ");
	scanf("%d" , &obj.a);

	printf("Enter the second number to swap: ");
	scanf("%d" , &obj.b);

	temp.a = obj.a;
	temp.b = obj.b;

	obj.a = temp.b;
	obj.b = temp.a;

	printf("The result is a = %d b = %d\n" , obj.a , obj.b);
	return 0;
}

