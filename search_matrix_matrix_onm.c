//search sorted matrix o(n+m)//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int r, c;int key;
	printf("enter the rows and columns of the matrix:");
	scanf("%d %d", &r, &c);
	int arr[100][100];
	printf("enter the elements:");
	for (int i = 0;i < r;i++) {
		for (int j = 0;j < c;j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("enter the element to search:");
	scanf("%d", &key);
	int i = 0,j = c - 1;
	int found = 0;
	while (i < r && j >= 0) {
		if (arr[i][j] == key) {
			found = 1;
			printf("found at position(%d,%d)\n", i, j);
			break;
		}
		else if (arr[i][j] > key) {
			j--;
		}
		else {
			i++;
		}
	}
	if (!found)
		printf("element not found\n");
	return 0;
}
output:--
enter the rows and columns of the matrix:3 3
enter the elements:1 2 3
4 5 6
7 8 9
enter the element to search:7
found at position(2,0)
