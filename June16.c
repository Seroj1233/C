//Task1//
#include<stdio.h>

int main(){
    
	int a = 0;
	printf("Input the number to get it on the screen: ");
	scanf ("%d" , &a);
	printf ("The result is %d\n" , a);
	return 0;
	
}
//Task2//
#include<stdio.h>

int main(){
    
  	double a = 0;
  	printf("Input the number to get it on the screen: ");
  	scanf("%lf" , &a);
    printf("The result is %lf" , a);
 	return 0;
    
	
}
//Task3//
#include<stdio.h>

int main(){
    
  	char a = 0;
	scanf("%c" , &a);
    printf("The result is %c" , a);
	return 0;
    
	
}
//Task4//
#include<stdio.h>

int main(){
    
    int x = 0;
    scanf("%d" , &x);
	printf("The result is %d" , (4 * x + 21 * x * x -12));
	return 0; 

	
}
//Task5//
#include<stdio.h>

int main(){
    
    float x = 0;
	scanf("%f" , &x);
	printf("The result is %f" , (x / (5 + 2) + 30 * x - 51));
	return 0; 

	
}
//Task6//
#include<stdio.h>

int main(){
    
    float x = 0;
	float y = 0;
	printf("Input the first number");
	scanf("%f" , &x);
	printf("Input the second number");
	scanf("%f" , &y);
	printf("The result is %f" , (x * y + 21 * x / y - 200));
	return 0; 

	
}
//Task7//
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
