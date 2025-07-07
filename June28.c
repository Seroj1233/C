//Task1//
#include<stdio.h>

int main(){
    
    int x = 0;
    printf("Input the number to reverse it: ");
    scanf("%d" , &x);
    x = ~x + 1;
    printf("The result is: %d" , x);
    return 0;
    
}
//Task2//
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
//Task3//
#include<stdio.h>

int main(){
    
    int x = 34;
    int n = 0;
    printf("Input the n-th bit to set it: ");
    scanf("%d" , &n);
    x = x | 1 << n;
    printf("The result is: %d" , x);
    return 0;
    
}
//Task4//
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
//Task5//
#include<stdio.h>

int main(){
    
    int x = 34;
    int n = 0;
    printf("Input the n-th bit to toggle: ");
    scanf("%d" , &n);
    x = x ^ ( 1 << n);
    printf("The result is: %d" , x);
    return 0;
    
}
//Task6//
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
//Task7//
#include<stdio.h>

int main(){
    
    int x = 0;
    int n = 2;
    printf("Input the number to Divide by 2: ");
    scanf("%d" , &x);
    x = ( x >> 1);
    printf("The result is: %d" , x);
    return 0;
    
}
//Task8//
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
	///
