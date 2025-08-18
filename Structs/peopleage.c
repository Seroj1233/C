#include<stdio.h>

struct Person {
	int age;
	float height;
};
int main(){
	struct Person obj1, obj2;
	printf("Enter the fisrt person age: ");
	scanf("%d" , &obj1.age);
	printf("Enter the second person age: ");
	scanf("%d" , &obj2.age);
	if(obj1.age > obj2.age) { 
		printf("The first person is older\n");
	} else {
		printf("The second person is older\n");
	}
	return 0;
}
