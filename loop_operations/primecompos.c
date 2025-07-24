#include<stdio.h>

int main(){

	int num;
	printf("Enter a number: ");
	scanf("%d" , &num);
	if (num <= 1){
		printf("False");
	}
       	else if(num>1) {
		for (int i =2; i<= num/2; i++ ) {
			if(num %i == 0) {
				printf("False");
				break;

			}
			else{
			   printf("Your number is prime: ");
			}
		}

	}

		
return 0;


}
