#include<stdio.h>

int main(){
	int num = 0;
	int ibit =0;
	int jbit =0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	printf("Enter the first bit to swap with the second: ");
	scanf("%d" , &ibit);
	printf("Enter the second bit to swap with the first: ");
	scanf("%d" , &jbit);
	if(((num >> ibit) & 1) == ((num >> jbit) & 1)){
                printf("The ibit and jbit are the same\n");
        } else if(num = num ^ (1 << ibit), num = num ^(1 << jbit)){
		printf("The result is: %d\n", num);
	}
	return 0;
}
