#include<stdio.h>


int main() {
	int rows;
//	printf("enter number of rows:");
//	scanf("%d",&rows);
 rows=5;
	for (int i = 1; i < rows; i++) {

		// second loop for printing number in each rows
		for (int j = 1; j <= i; j++) {
//            printf("%d ", j + 1);
			printf(" %d ",j%2);
		}
		printf("\n");
	}
	return 0;
}