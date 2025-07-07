//Task6//
#include<stdio.h>

int main(){
    
    printf("Enter any character: ");
    char character = 0;
    scanf("%c" , &character);
    printf("Your ASCII value is: %d" , character);
    return 0;
}
//Task7//
#include<stdio.h>

int main(){
    
    printf("Size of int: %ld " , sizeof(int));
    printf("Size of char: %ld " , sizeof(char));
    printf("Size of float: %ld " , sizeof(float));
    printf("Size of double: %ld " , sizeof(double));
    return 0;
}
//Task8//
#include<stdio.h>

int main(){
    
    int a = 0;
    int b = 0;
    printf("Enter the first number: ");
    scanf("%d" , &a);
    printf("Enter the second number: ");
    scanf("%d" , &b);
    int res = 0;
    res = a % b;
    printf("The result is: %d" , res);
    return 0;
}
//Task9//
#include<stdio.h>

int main(){
    
    int a = 0;
    printf("Enter The number to get its cube: ");
    scanf("%d" , &a);
    int res = 0;
    res = a * a * a;
    printf("The cube is: %d" , res);
    return 0;
}
//Task10//
#include<stdio.h>

int main(){
    
    int a = 0;
    int b = 0;
    printf("Enter the first number to swap:a =  ");
    scanf("%d" , &a);
    printf("Enter the second number to swap:b =  ");
    scanf("%d" , &b);
    printf("Your Entered numbers: a = %d, b = %d\n", a , b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("The result is: a = %d , b =%d " , a , b);
    return 0;
    
}
//Task11//
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
//Task12//
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
///



