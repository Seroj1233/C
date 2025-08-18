#include<stdio.h>

union Time {
	struct {
		int hours;
		int minutes;
	} time;
		float totalHours;
};

int main() {
	
	union Time obj;

	printf("Enter the hours: ");
	scanf("%d" , &obj.time.hours);

	printf("Enter the minutes: ");
	scanf("%d" , &obj.time.minutes);

	obj.totalHours = obj.time.hours + obj.time.minutes / 60.0;

	printf("The Total Hours is: %.2f\n" , obj.totalHours);
	return 0;


}
