#include<stdio.h>
#define PI 3.14

int main(){
    
    double r = 0;
    printf("Enter The Radius: ");
    scanf("%lf" , &r);
    double res = 0;
    res = PI * r * r;
    printf("The result is: %f" , res);
    return 0;
}
