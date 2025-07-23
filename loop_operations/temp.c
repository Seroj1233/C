#include<stdio.h>

int main(){
	
	int temp = 0;
	printf("Enter a temperature in Celsius: ");
	scanf("%d" , &temp);
	if(temp >= 15) {
		printf("%d is Warm\n");
	} else { 
		printf("%d is Cold");
	}

	return 0;
}
