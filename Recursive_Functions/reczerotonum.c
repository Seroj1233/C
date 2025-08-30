#include<stdio.h>

void nums(int num) {
	if (num < 0) {
		return;
	}
	nums(num - 1);
	printf("The res is: %d\n" , num);
}

int main() {
	
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	nums(num);
	return 0;
}
	
