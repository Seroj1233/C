#include<stdio.h>

int main(){
    
    int x = 0;
    printf("Input the number to reverse it: ");
    scanf("%d" , &x);
    x = ~x + 1;
    printf("The result is: %d" , x);
    return 0;
    
}
