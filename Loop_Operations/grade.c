#include<stdio.h>

int main(){
	int score = 0;
	printf("Enter your score: ");
	scanf("%d" , &score);
	if(score >= 90 && score <= 100){
		printf("You are in A class\n");
	} else if(score >= 80 && score <= 89){
		printf("You are in B class\n");
	} else if(score >= 70 && score <= 79){
		printf("You are in C class\n");
	} else if(score >= 60 && score <= 69){
		printf("You are in D class\n");
	} else {
		printf("You are in E class\n");
	}
	return 0;
}
