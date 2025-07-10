#include<stdio.h>

int main(){
    
    int x = 0;
    int n = 2;
    printf("Input the number to multiply by 2: ");
    scanf("%d" , &x);
    x = ( x << 1);
    printf("The result is: %d" , x);
    return 0;
    
}
