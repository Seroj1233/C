#include<stdio.h>
#include<stdlib.h>

int main() {
	
	int num = 0;
	printf("Enter the string length: ");
	scanf("%d" , &num);
	getchar();

	char *str =  malloc( num * sizeof(char));
	
	printf("Enter your string: ");
	fgets(str, num, stdin);

	printf("The result is: ");
	fputs(str, stdout);
	
	printf("\n");
	free(str);
	return 0;
}
