#include<stdio.h>

int main(){

	int num = 0;
	int n = 0;
	int mul;
	int div;
	printf("Enter the num to multiply then divide: ");
	scanf("%d" , &num);
	printf("Enter the power: ");
	scanf("%d" , &n);
	if ( n >= 0){
		mul = num << n;
		div = num >> n;
		        printf("The result of multiplication: %d , %d" , mul ,div);
     //   printf("Divided by 2^%d = %d\n", n, divided);
	}
	return 0;



}
