#include <stdio.h>

int main(){

	int num = 0;
	int is_pos_even = 0;
	int isnt_pos_but_even = 0;
	int is_pos_butnot_even = 0;
	int isnt_posand_even = 0;

	printf("Please Enter a number: ");
	scanf("%d" , &num);

	if(num % 2 == 0 && num > 0){
		is_pos_even = 1;
	} else if(num % 2 == 0 && num < 0){
		isnt_pos_but_even = 1;
	} else if(num % 2 != 0 &&  num > 0){
		is_pos_butnot_even = 1;
	} else if(num % 2 != 0 && num < 0){
		isnt_posand_even = 1;
	}

	if(is_pos_even){
		printf("Your number is positive and even\n");
	} 
	if(isnt_pos_but_even){
		printf("Your number is not positive but is even\n");
	}
       	if(is_pos_butnot_even){
		printf("Your number is positive but not even\n");
	}
	if(isnt_posand_even){
		printf("Your number is not positive and even\n");
	}

	return 0;
}
