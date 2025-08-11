#include<stdio.h>

int main(){
	int age = 0;
	int can_vote = 0;
	printf("Enter your age: ");
	scanf("%d" , &age);
	if(age >= 18){
		can_vote = 1;
	} else {
		can_vote = 0;
	}
	if(can_vote){
		printf("Congratulations you can vote\n");
	} else {
		printf("Sorry you can not vote\n");
	}
	return 0;
}
