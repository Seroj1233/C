#include<stdio.h>

struct Rational {
	int numerator;
	int denominator;
};

int main(){
	
	struct Rational obj1 , obj2;

	printf("Enter the first number's numerator and denominator: ");
	scanf("%d %d" , &obj1.numerator , &obj1.denominator);

	printf("Enter the second number's numerator and denominator: ");
	scanf("%d %d" , &obj2.numerator , &obj2.denominator);

	int sum_num = obj1.numerator * obj2.denominator + obj2.numerator * obj1.denominator;
	int sum_den = obj1.denominator * obj2.denominator;

	int prod_num = obj1.numerator * obj2.numerator;
    	int prod_den = obj1.denominator * obj2.denominator;

	printf("The sum of number's: %d %d\n" , sum_num , sum_den);
	printf("The product of number's: %d %d\n" , prod_num , prod_den);
	return 0;
}
