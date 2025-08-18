#include<stdio.h>
#define SIZE 4

enum size { Small, Medium, Large, ExtraLarge };

int main(){
	
	enum size obj;
	int choose = 0;
	int price[SIZE] = { 10, 20, 30, 40};

	printf("Pizza's sizes and price's: ");
	for(int i = 0; i <= SIZE; ++i) {
		switch(i) {
			case Small:
				printf("Small: $%d\n", price[i]);
				break;
			case Medium: 
				printf("Medium: $%d\n" , price[i]);
				break;
			case Large:
				printf("Large: $%d\n" , price[i]);
				break;
			case ExtraLarge:
				printf("ExtraLarge: $%d\n" , price[i]);
				break;
		}
	}

	printf("Select what pizza you want (0 - Small, 1 - Medium, 2 - Large, 3 - ExtraLarge): ");
	scanf("%d" , &choose);
	
	switch(choose) {
		case Small:
			printf("You choosed Small pizza. It will cost you $%d\n" , price[choose]);
			break;
		case Medium:
			printf("You choosed Medium pizza. It will cost you $%d\n" , price[choose]);
			break;
		case Large:
			printf("You choosed Large pizza. It will cost you $%d\n" , price[choose]);
			break;
		case ExtraLarge: 
			printf("You choosed ExtraLarge pizza. It will cost you $%d\n" , price[choose]);
			break;
		default: 
			printf("Enter correct number\n");
	}

	return 0;
}
