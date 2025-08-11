#include<stdio.h>

int main(){
	int num = 0;
	int max = -1;
	for(int i = 0; i < 4; ++i){
		printf("Enter number or (-1) to quit: ");
		scanf("%d" , &num);
		if(num == -1){
			printf("You exited the programm succesfully\n");
			break;
		}
		if(num > max){
			max = num;
		}
	}
	if(max > 0){
		printf("The biggest numbers is: %d\n" , max);
	}
	return 0;
}
