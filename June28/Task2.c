#include<stdio.h>

int main(){
    
    int x = 0;
    int n = 2;
    printf("Input the number to get the power of that number: ");
    scanf("%d" , &n);
    x = 1 << n;
    printf("The result is: %d" , x);
    return 0;
    
}
