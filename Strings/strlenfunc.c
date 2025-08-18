#include<stdio.h>

size_t strlen(char arr[]){
	size_t count = 0;
	while(arr[count] != '\0'){
		count++;
	}
	return count;
}

int main(){
	char arr[] = "Hello Everyone!";
	printf("The length of arr is: %ld", strlen(arr));
	return 0;
}
