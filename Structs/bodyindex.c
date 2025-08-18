#include<stdio.h>

struct Person {
	float weight;
	float height;
};

int main() {
	
	struct Person obj;

	printf("Enter the weight: ");
	scanf("%f" , &obj.weight);

	printf("Enter the height: ");
	scanf("%f" , &obj.height);

	obj.height = obj.height / 100.0;
	float bmi = obj.weight / (obj.height * obj.height);

	printf("Your BMI is: %f" , bmi);
	
	if (bmi < 18.5) {
		printf("Underweight\n");
	} else if (bmi < 25) {
		printf("Normal\n");
	} else if (bmi < 30) {
		printf("Overweight\n");
	} else {
		printf("Obese\n");
	}
	return 0;
}
