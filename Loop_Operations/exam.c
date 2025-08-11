#include<stdio.h>

int main(){
	int score = 0;
	int passed = 0;
	printf("Enter the score: ");
	scanf("%d" , &score);
	if(score >= 50){
		passed = 1;
	} else {
		passed = 0;
	}
	if(passed){
		printf("Congratulations you passed\n");
	} else { 
		printf("Sorry you did not pass\n");
	}
	return 0;
}
