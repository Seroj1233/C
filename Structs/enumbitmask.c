#include<stdio.h>

enum perm { Read = 1, Write = 2, Execute = 4 };

int main() {
	int permision = 0;
	printf("Enter the number for permision: ");
	scanf("%d" , &permision);

	switch (permision) {
		case (Read):
			printf("You can Read\n");
			break;
		case (Write):
			printf("You can Write\n");
			break;
		case (Execute):
			printf("You can Execute\n");
			break;
		case (Read + Write):
			printf("You can Read and Write\n");
			break;
		case (Read + Execute):
			printf("You can Read and Execute\n");
			break;
		case (Write + Execute):
			printf("You can Write and Execute\n");
			break;
		case (Read + Write + Execute):
			printf("You can Read, Write and Execute\n");
			break;
		default: 
			printf("Enter correct number\n");
	}
		return 0;
}
