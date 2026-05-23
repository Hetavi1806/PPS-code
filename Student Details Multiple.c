#include <stdio.h>

struct student {
	int rollNumber;
	char name[50];
	float marks;
};

int main() {
	int i, n;
	
	printf("Enter the number of students:");
	scanf("%d", &n);
	
	
	
	struct student students[n];
	
	for (i = 0; i < n; i++) {
		printf("\nEnter details for student %d\n", i + 1);
		printf("Roll Number: ");
		scanf("%d", &students[i].rollNumber);
		
		printf("Name: ");
		scanf(" %[^\n]", &students[i].name);
		
		printf("Marks: ");
		scanf("%f", &students[i].marks);
	}
	
	
	
	
	printf("\n---student details ---\n");
	for( i = 0; i < n; i++) {
		printf("\nstudent %d\n", i + 1);
		printf("Roll Number: %d\n", students[i].rollNumber);
		printf("Name       : %s\n", students[i].name);
		printf("Marks      : %.2f\n", students[i].marks);
	}
	   return 0;
	}

