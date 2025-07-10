#include<stdio.h>

int main(){
    
    int x = 34;
    int n = 0;
    printf("Input the n-th bit to clear it: ");
    scanf("%d" , &n);
    x = x  & ~(1 << n);
    printf("The result is: %d" , x);
    return 0;
    
}
