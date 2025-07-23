#include<stdio.h>

int main(){

	int age = 0;
	int can_vote;
	printf("Please enter your age: ");
	scanf("%d" , &age);
	if(age >= 18){
		can_vote = 1;
	} else { 
		can_vote = 0;
	}

	if(can_vote){
		printf("You can vote congrats\n");
	} else { 
		printf("You can not vote sorry\n");
	}
	return 0;
}

