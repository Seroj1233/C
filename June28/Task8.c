#include<stdio.h>

int main(){
    
    int x = 0;
    int y = 0;
    printf("Input the first number to swap: x = ");
    scanf("%d" , &x);
    printf("Input the second number to swap: y = ");
    scanf("%d" , &y);
    x = x ^ y;
    y = x ^ y;
    x = y ^ x;
    printf("The result is: x = %d y = %d" , x , y);
    return 0;
    
    
}
