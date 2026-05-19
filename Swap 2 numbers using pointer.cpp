#include<stdio.h>
//Function to swap two integers using pointers
void swap(int *a, int *b)
{
	int temp;
	temp = *a;  //Store the value at address a
	*a = *b;    //Put value at address b into adress a
	*b = temp;   //Put the stored value into address b
}
int main()
{
	int num1, num2;
	//Input values from user
	printf("Enter first number:");
	scanf("%d", &num1);
	printf("Enter second number:");
	scanf("%d", &num2);
	//Display before swap
	printf("\n Before swapping: num1 = %d, num2 = %d\n", num1, num2);
	//Call swap function
	swap(&num1, &num2);
	//Display after swap
	printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}
