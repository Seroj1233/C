#include<stdio.h>

int main(){

	double Celsius = 0;
	printf("Enter the Celsius ");
	scanf("%lf" , &Celsius);
	printf("The result of Celsius in Farenheit %lf \n" , (Celsius * 9/5) + 32);
	return 0;
}
