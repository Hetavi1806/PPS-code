#include<stdio.h>
int main()
{
	int n, first = 0, second = 1, next; 
	 // Ask the user for the number of terms
	 printf("Enter the number of terms:");
	 scanf ("%d", &n);
	 //Print the beginning of the output
	 printf("Fibonacci Series:");
	 //Loop through n terms
	 for(int i=0; i<n; i++)
	 {
	 	if(i<=1)
	 	{
	 		//For the first two terms, use the loop index itself
	 		next=i;
		 }
		 else
		 {
		 	//For remaining terms, calculate next number
		 	next= first + second;
		 	//Shift the previous two numbers for next iteration
		 	first = second;
		 	second = next;
		 	}
		 	//Print the current Fibonacci number
		 	printf("%d", next);
	 }
	 //New line after the series
	 printf("\n");
	 return 0;
}
	    
		          
					  
						     

