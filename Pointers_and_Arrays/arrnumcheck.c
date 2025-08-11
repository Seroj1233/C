#include<stdio.h>
#define SIZE 5
int main(){
	int arr[SIZE] = {};
	int num = 0;
	for(int i = 0; i < SIZE; ++i){
		printf("Enter the numbers: ");
		scanf("%d" , &arr[i]);
	}
	printf("Enter number: ");
	scanf("%d" , &num);
	for(int i = 0; i < SIZE; ++i){
		if(num == arr[i]){
			printf("Yes you have that number in array\n");
			return 0;
		}
	}
	printf("You dont have that number in array\n");
	return 0;
}
