#include<stdio.h>

union Currency {
	int usd;
	int eur;
};

int main() {

	union Currency obj;

	printf("Enter the amount in Dollars and in Euro: ");
	scanf("%d %d" , &obj.usd , &obj.eur);

	printf("The result is: %d %d" ,obj.usd, obj.eur);
	return 0;
}
