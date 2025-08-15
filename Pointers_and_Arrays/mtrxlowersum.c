#include<stdio.h>
#define ROW 3
#define COL 3

int main(){
	int arr[ROW][COL] = {
		{11,12,13},
		{21,22,23},
		{31,32,33}
	};
	int sum = 0;
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < COL; ++j) {
			if (i > j) {
				sum = sum + arr[i][j];
			}
		}
	}
	printf("The result is: %d\n" , sum);
	return 0;
}

			// 00 01 02
			// 10 11 12
			// 20 21 22
