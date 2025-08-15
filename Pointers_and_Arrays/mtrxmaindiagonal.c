#include<stdio.h>
#define ROW 3
#define COL 3

int main(){
	int arr[ROW][COL] = {
		{11,12,13},
		{21,22,23},
		{31,32,33}
	};
	int diagonal[ROW] = {};
	for (int i = 0; i < ROW; ++i) {
		diagonal[i] = arr[i][i];
	}
	for (int i = 0; i < ROW; ++i) {
		printf(" %d " , diagonal[i]);
	}
	printf("\n");
	return 0;
}
