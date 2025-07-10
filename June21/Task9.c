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
