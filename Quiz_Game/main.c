#include<stdio.h>
#define MAX_QUESTIONS 5
#define MAX_TEXT_LEN 100
#define MAX_OPTION_LEN 50
#include "header.h"

int main() {

	int choice = 0;
	int totalQuestions = 5;

	while (1) {
		printf("Quiz Menu:\n");
		printf("1) Play Quizz\n");
		printf("2) Exit\n");
		scanf("%d" , &choice);

		if (choice == 1) {
			playQuiz(totalQuestions);
		} else if (choice == 2) {
			printf("Bye\n");
			break;
		} else {
			printf("Enter correct number\n");
		}
	}
	
	return 0;
}
		

