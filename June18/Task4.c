#include<stdio.h>

int main(){

	int length = 0;
	int width = 0;
	printf("Enter the length ");
	scanf("%d" , &length);
	printf("Enter the width ");
	scanf("%d" , &width);
	int Area = length * width;
	printf("The result of Area is %d\n" , Area);
	return 0;
}
