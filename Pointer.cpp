#include <stdio.h> 
int main()
 { 
 int array[5] = {10, 20, 30, 40, 50};
  int *ptr;
  int i;
  // Pointer points to the first element of the array
  ptr = array;
  printf("Accessing array elements using pointers:\n");
  for(i=0; i<5; i++)
  {
  	//*(ptr+i) accesses the ith element of the array
  	printf("Element %d = %d\n", i, *(ptr+i));
   } 
   return 0;
}
 
 
