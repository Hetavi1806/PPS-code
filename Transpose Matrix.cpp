#include<stdio.h>
int main()
{
	int matrix [10][10], transpose[10][10];
	int rows, cols, i, j;
	//Input matrix dimensions 
	printf("Enter number of rows and coloumns of the matrix:");
	scanf("%d %d", & rows, & cols);
	// Input matrix elements
	printf ("Enter elements of the matrix:\n");
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			printf ("Elements [%d][%d]:", i, j);
			scanf("%d", & matrix [i][j]);
		}
	}
	// Transpose the matrix
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			transpose[j][i]= matrix [i][j];
		}
	}
	//Display the transposed matrix
	printf("\n Transposed Matrix:\n");
	for(i=0; i<cols; i++)
	{
		for(j=0; j<rows; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}
	return 0;
}

