#include<stdio.h>

int main(){
	int num = 0;
	printf("Enter the number: ");
	scanf("%d" , &num);
	if(num == 1){
		printf("1 is neither prime nor complex");
	}
	for(int i = 2; i < num; ++i){
		if(num % i == 0){
			printf("The number is composite\n");
			break;
		} else {
			printf("The number is prime\n");
			break;
		}
	}
	return 0;
}
