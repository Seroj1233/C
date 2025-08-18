#include<stdio.h>

struct Student {
	float mathGrade;
	float physicsGrade;
	float chemistryGrade;
};

int main(){
	struct Student stud;
	printf("Enter the grades of math , physics and chemistry: ");
	scanf("%f %f %f" , &stud.mathGrade, &stud.physicsGrade, &stud.chemistryGrade);
	float avg = 0;
	avg = (stud.mathGrade + stud.physicsGrade + stud.chemistryGrade) / 3;
	printf("The average of this grades is: %f" , avg);
	printf("\n");
	return 0;
}
