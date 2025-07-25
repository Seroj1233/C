#include<stdio.h>

int main(){

	int num = 0;
	int ibit = 0;
	int jbit = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the i-bit to swap: ");
	scanf("%d" , &ibit);
	printf("Enter the j-bit to swap: ");
	scanf("%d" , &jbit);
	if(((num >> ibit) & 1) != ((num >> jbit) & 1)) {
		num = num ^ (1 << ibit);
		num = num ^ (1 << jbit);
	} 

	printf("The result is: %d\n" , num);
	return 0;


}
