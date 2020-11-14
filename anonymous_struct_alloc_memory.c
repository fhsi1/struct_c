#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char	name[20];
	int		age;
	char	address[100];
} Person;

int		main()
{
	Person *p1 = malloc(sizeof(Person));

	strcpy(p1->name, "Alice");
	p1->age = 30;
	strcpy(p1->address, "London 1st street");

	printf("Name : %s", p1->name);
	printf("Age : %d", p1->age);
	printf("Address : %s", p1->address);

	free(p1);

	return 0;
}
