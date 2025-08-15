#include<stdio.h>
#define ROW 3
#define COL 3

int main(){
        int arr[ROW][COL] = {};
        for(int i = 0; i < ROW; ++i) {
                for (int j = 0; j < COL; ++j) {
                        printf("Enter the numbers: ");
                        scanf("%d" , &arr[i][j]);
                }
        }
        int max = arr[0][0];
	int row = 0;
	int col = 0;
        for (int i = 0; i < ROW; ++i) {
                for (int j = 0; j < COL; ++j) {
                        if (arr[i][j] > max) {
                                max = arr[i][j];
				row = i;
				col = j;
                        }
                }
        }
	printf("The maximum number is:%d \nPosition is Row = %d Column = %d" , max , row, col );
	return 0;
}


