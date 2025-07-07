#include<stdio.h>

int main(){

	printf("Please input lowercase letter: ");
	char letter = 0;
	scanf("%c" , &letter);
	letter = letter - ('a' - 'A'); 
	printf("The result is: %c\n" , letter);
	return 0;
}
///
#include<stdio.h>

int main(){

	char letter = 0;
	printf("Input uppercase letter to get lowercase %c\n" , letter);
	scanf("%c" , &letter);
	letter = letter + ('a' - 'A');
	printf("The result is %c\n" , letter);
	return 0;
}
///
#include<stdio.h>

int main(){

	int x = 0;
	int y = 0;
	printf("Input the first number ");
	scanf("%d" , &x);
	printf("Input the second number ");
	scanf("%d" , &y);
	int res = x + y;
	printf("The result is %d\n" , res);
	return 0;
}
///
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
///
#include<stdio.h>

int main(){

	double Celsius = 0;
	printf("Enter the Celsius ");
	scanf("%lf" , &Celsius);
	printf("The result of Celsius in Farenheit %lf \n" , (Celsius * 9/5) + 32);
	return 0;
}
///

