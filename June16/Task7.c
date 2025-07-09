#include<stdio.h>

int main(){
    
  	float x = 0;
	float y = 0;
	printf("Input the first number ");
	scanf("%f" , &x);
	printf("Input the second number ");
	scanf("%f" , &y);
	printf("The result is %f \n x = %f \n y = %f" , (x + y) / 2 , x , y);
	return 0;

	
}
