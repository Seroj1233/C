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
