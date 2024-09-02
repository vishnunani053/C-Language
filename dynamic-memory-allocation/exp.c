#include <stdio.h>
#include <stdlib.h>

struct EMP {
	int eid;
	char eName[20];
	float eSal;
};

int main()
{
	struct EMP* ptr;
	ptr = (struct EMP*) malloc(sizeof(struct EMP));

	if(ptr == NULL) {
		printf("Memory out of space \n");
	} else {
		printf("Enter employee details (ID Name Salary): \n");
		scanf("%d %19s %f", &ptr->eid, ptr->eName, &ptr->eSal);  // Use %19s to prevent buffer overflow
		printf("Employee ID: %d\n", ptr->eid);
		printf("Employee Name: %s\n", ptr->eName);
		printf("Employee Salary: %.1f\n", ptr->eSal);
		printf("Size of EMP struct: %zu bytes\n", sizeof(struct EMP));  // Correct format specifier for size_t

		free(ptr);  // Free the allocated memory
	}

	return 0;  // Return 0 to indicate successful completion
}
