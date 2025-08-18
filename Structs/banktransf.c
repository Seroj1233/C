#include<stdio.h>

struct Account {
	int ownerId;
	float balance;
};
int main(){
	struct Account acc1 , acc2;
	printf("Enter first Id: ");
	scanf("%d" , &acc1.ownerId);
	printf("Enter first balance: ");
	scanf("%f" , &acc1.balance);
	printf("Enter second Id: ");
   	scanf("%d", &acc2.ownerId);
    	printf("Enter second balance: ");
    	scanf("%f", &acc2.balance);
	float res = 0;
	float res2 = 0;
	float res3 = 0;
	res = acc1.balance * 0.20;
	res2 = acc1.balance - res;
	res3 = acc2.balance + res;
	printf("The balance of first Id before transfer: %f\n" , acc1.balance);
	printf("The balance of second Id before transfer: %f\n" , acc2.balance);
	printf("The balance of first Id after transfer: %f\n", res2);
	printf("The balance of second Id after transfer: %f\n" , res3);
	return 0;
}
