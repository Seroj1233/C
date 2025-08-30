#include<stdio.h>
#include"header.h"
#include<ctype.h>

int getCorrect(int correct){
	return correct;
}

int getWrong(int wrong){
	return wrong;
}

void playQuiz (int totalQuestions) {
	
	int correct = 0;
	int wrong = 0;
	char answer = 0;

	printf("\n");

	for (int i = 0; i < 5; ++i) {
	printf("Question number %d : ", i + 1); //questions[i]);
	printf("%s\n" , questions[i]);
	printf("A - %s\n" , optionsA[i]);
	printf("B - %s\n" , optionsB[i]);
	printf("C - %s\n" , optionsC[i]);
	printf("D - %s\n" , optionsD[i]);

	printf("Enter your answer: ");
	scanf(" %c" , &answer);

	answer = toupper(answer);
	
	if ( answer == correctAnswers[i]) {
		printf("You are correct\n");
		printf("\n");
		correct++;
	} else {
		printf("You are wrong, correct answer is %c\n" , correctAnswers[i]);
		printf("\n");
		wrong++;
	}
	}
	printf("Quizz is finished\n");
	printf("Correct answers: %d\n", correct);
	printf("Wrong answers: %d\n" , wrong);
	printf("\n");
}
