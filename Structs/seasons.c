#include<stdio.h>

enum Seasons{Winter = 1, Spring, Summer, Fall};

int main(){
	int month = 0;
	int season = 0;
	enum Seasons obj;

	printf("Please input a month (1 - 12): ");
	scanf("%d" , &month);
	
	if (month == 12 || month == 1 || month == 2) {
		season = Winter;
	} else if (month >= 3 && month <= 5) {
		season = Spring;
	} else if (month >= 6 && month <= 8) {
		season = Summer;
	} else if (month >= 9 && month <= 11) {
		season = Fall;
	}
	
	switch(season) {
		case Winter :
			printf("December, January, February - Winter\n");
			break;
		case Spring :
			printf("March, April, May - Spring\n");
			break;
		case Summer :
			printf("June, July, August - Summer\n");
			break;
		case Fall :
			printf("September, October, November - Fall\n");
			break;
		default : 
			printf("Enter correct number of the month\n");
	}
	return 0;




}
