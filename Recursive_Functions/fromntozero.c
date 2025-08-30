#include<stdio.h>

void foo(int num) {
	if (num < 0) {
		return;
	}
	printf(" %d " , num);
	 foo(num - 1);

}

int main() {

	int num = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("The result is: ");
	foo(num);
	printf("\n");
	return 0;
}
