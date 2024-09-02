#include <stdio.h>
#include <stdlib.h>

struct Emp
{
	int eno;
	char ename[20];
	float esal;
};
int main() {

	struct Emp* ptr;
	ptr= (struct Emp*) malloc(sizeof(struct Emp));
	printf("%zu",sizeof(struct Emp));

	return 0;
}