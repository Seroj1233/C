#include<stdio.h>

int main(){
	
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Enter three integers to get the greatest: ");
	scanf("%d" , &a);
	scanf("%d" , &b);
	scanf("%d" , &c);
	if (a > b && a > c) {
		printf("The %d is the greatest: \n" , a);
	} else if (b > a && b > c) {
		printf("The %d is the greatest: \n" , b);
	} else if (c > a && c > b) {
		printf("The %d is the greatest: \n" , c);
	}
	return 0;

	
}
