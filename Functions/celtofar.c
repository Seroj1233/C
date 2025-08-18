#include<stdio.h>

double far(double cel){
	double far = 0;
	double res = 0;
	res = far = ( cel * 9 / 5) + 32;
	return res;
}

int main(){
	double cel = 0;
	printf("Enter the number: ");
	scanf("%lf" , &cel);
	double res = far(cel);
	printf("The result is: %lf\n" , res);
	return 0;
}
