#include<stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	printf("Enter three numbers: ");
	scanf("%d%d%d" , &a, &b, &c);
	if(a > b && a > c){
		printf("The greatest is: %d\n" , a);
	} else if(b > a && b > c){
		printf("The greatest is: %d\n" , b);
	} else{
		printf("The greatest is: %d\n" , c);
	}
	return 0;
}
