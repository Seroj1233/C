#include<stdio.h>

int main(){
    
    double a = 0;
    printf("Enter the first number: ");
    scanf("%lf" , &a);
    double b = 0;
    printf("Enter the second number: ");
    scanf("%lf" , &b);
    double c = 0;
    printf("Enter the third number: ");
    scanf("%lf" , &c);
    double res = 0;
    res = (a + b + c) / 3;
    printf("The average of three is: %lf" , res);
    return 0;
    
}
