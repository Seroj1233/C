#include<stdio.h>

int mystrlen(char *arr) {
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	return len;
}

