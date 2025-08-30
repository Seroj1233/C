#include<stdio.h>
#define MAX_QUESTIONS 5
#define MAX_TEXT_LEN 100
#define MAX_OPTION_LEN 50
#include"header.h"

	char questions[MAX_QUESTIONS][MAX_TEXT_LEN] = {
		"Which of the following is a programming language?",
		"What is the capital city of Australia?",
		"In the movie The Matrix, what color pill does Neo take?",
		"Who wrote Romeo and Juliet?",
		"What does “HTTP” stand for?"
	};
	
	char optionsA[MAX_QUESTIONS][MAX_OPTION_LEN] = {"HTML", "Sydney", "Blue", "Charles Dickens", "HyperText Transfer Protocol"};
	char optionsB[MAX_QUESTIONS][MAX_OPTION_LEN] = {"Python", "Canberra", "Green", "William Shakespeare", "HighText Transfer Program"};
	char optionsC[MAX_QUESTIONS][MAX_OPTION_LEN] = {"CSS", "Melbourne", "Red", "Leo Tolstoy", "HyperTransfer Text Process"};
	char optionsD[MAX_QUESTIONS][MAX_OPTION_LEN] = {"SQL", "Perth", "Yellow", "Mark Twain", "Home Tool Transfer Protocol"};
	
	char correctAnswers[MAX_QUESTIONS] = { 'B', 'B', 'C', 'B', 'A'};

