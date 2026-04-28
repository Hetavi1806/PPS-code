#include<stdio.h>
int main()
{
	int array[100],n,i;
	int largest, smallest;
	//Input the number of elements
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	// Input array elements
	printf("Enter %d elements: \n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",& array[i]);
	}
	// Initialize largest and smallest 
	largest=smallest=array[0];
	// Find the largest and sallest elemnts
	for(i=1; i<n; i++)
	{
		if( array [i]>largest)
		largest= array[i];
		if(array[i]<smallest)
		smallest= array[i];
	}
	// Output results
	printf("Largest element: %d\n", largest);
	printf("Smallest element: %d\n", smallest);
	return 0;
}

