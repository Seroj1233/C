#include<stdio.h>

int main(){

	int score = 0;
	int passed;
	printf("Please Enter your exam score: ");
	scanf("%d" , &score);
	if(score >= 50) {
		passed = 1;
	} else { 
		passed = 0;
	}
	if(passed) {
		printf("Congratulations you made it\n");
	} else {
		printf("We are sorry you didnt pass but we belive you can next time, keep working!!\n");
	}
	return 0;
}
