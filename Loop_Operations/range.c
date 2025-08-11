#include<stdio.h>

int main(){
	int range = 0;
	int sum = 0;
	printf("Enter the number: ");
	scanf("%d" , &range);
	for(int i = 0; i <= range; ++i){
		if(i % 2 == 0){
			sum = sum + i;
		}
	}
	printf("The result is: %d" , sum);
	return 0;
}
