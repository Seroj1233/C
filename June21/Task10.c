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
