#include<stdio.h>
int main()
{
	int array[5]= {10, 20, 30, 40, 50};  // Initialize of array
	int i;
	printf("Elements of the array are:\n");
	// Display elements of the array
	for(i=0; i<5; i++)
	{
		printf("array[%d]= %d\n", i, array[i]);
	}
	return 0;
}
