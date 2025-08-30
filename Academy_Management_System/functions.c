#include<stdio.h>
#include<string.h>
#define SIZE 3
#define NAME 100
#include "header.h" 
void addStudent (studinfo *obj){

	printf("Please Enter your Name and Surname: ");
	fgets(obj->name, NAME, stdin);

	printf("Please Enter your Id: ");
	scanf("%d" , &obj->user_id);
	
	printf("Enter your Language (Cpp - 0, Web - 1, AI - 2, DevHack - 3): ");
	scanf("%d", &obj->language);

	while (obj->language < Cpp || obj->language > DevHack) {
		printf("Enter correct number: ");
		scanf("%d" , &obj->language);
	}
		switch(obj->language) {
			case Cpp: 
				printf("Language: Cpp\n");
				break;
			case Web:
				printf("Language: Web\n");
				break;
			case AI:
				printf("Language: AI\n");
				break;
			case DevHack:
				printf("Language: DevHack\n");
		}

	printf("Enter your phase (Computer_Science - 0, Core_Language - 1, Specialties - 2: ");
	scanf("%d" , &obj->phase);

	while(obj->phase < Computer_Science || obj->phase > Specialties) {
		printf("Enter correct number: ");
		scanf("%d" , &obj->phase);
	}
		switch (obj->phase) {
			case Computer_Science:
				printf("Phase: Computer_Science\n");
				break;
			case Core_Language:
				printf("Phase: Core_Language\n");
				break;
			case Specialties:
				printf("Phase: Specialties\n");
				break;
		}
}

void inputMonthlyExam (studinfo *obj) {

	for (int i = 0; i < SIZE; ++i) {
		printf("Enter your monthly Exam score %d: ", i + 1);
		scanf("%d" , &obj->monthExams[i]);
	}
}

void calculateTotal (studinfo *obj) {

	obj->totalScore += (obj->monthExams[0] * 0.10) + (obj->monthExams[1] * 0.10) + (obj->monthExams[2] * 0.80);
}

int minScoreForThirdMonth (int month1, int month2) {

        float total = 0;
        int min = 80;
        total += (month1 * 0.10) + (month2 * 0.10);
        total = min - total;
        total = total / 0.8;
        return total;
}

void checkPassed (studinfo *obj) {

	if (obj->totalScore >= 80) {
		obj->passed = 1;
	} else {
		obj->passed = 0;
	}
}

void printStudentReport (studinfo *obj) {

	printf("\n\n");
	printf("%s" , obj->name);
      
     	switch(obj->language) {
		case Cpp:
			printf("Language: Cpp\n");
                        break;
                case Web:
                        printf("Language: Web\n");
                        break;
                case AI:
                        printf("Language: AI\n");
                        break;
                case DevHack:
                        printf("Language: DevHack\n");
                }

	printf("%f\n" , obj->totalScore);

	if (obj->passed == 1) {
		printf("Congratulations you are in the next phase\n");
	} else {
		printf("Unfortunately you did not pass sorry\n");
	}

	int month1 = obj->monthExams[0];
	int month2 = obj->monthExams[1];
	printf("You need %d to pass\n" , minScoreForThirdMonth ( month1,  month2));

}






