#include<stdio.h>

int main(){

	int score = 0;
	printf("Enter your assessment: ");
	scanf("%d" , &score);

	if (score <= 60) {
		printf("You are in class E\n");
	} else if (score >= 60 && score <= 69) {
		printf("You are in class D\n");
	} else if (score >= 70 && score <= 79) {
		printf("You are in class C\n");
	} else if (score >= 80 && score <= 89) {
		printf("You are in class B\n");
	} else if (score >= 90 && score <= 100) {
		printf("You are in class A\n");
	}
	return 0;


}
