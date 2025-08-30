#include<stdio.h>
#include<string.h>
#include "header.h"

int main() {

	studinfo obj;
	studinfo *ptr = &obj;

	addStudent(&obj);

	inputMonthlyExam(&obj);

       	calculateTotal(&obj);

       	checkPassed(&obj);

	int month1 = obj.monthExams[0];
        int month2 = obj.monthExams[1];
        minScoreForThirdMonth (month1, month2);

	printStudentReport(&obj);
	
	return 0;

}
