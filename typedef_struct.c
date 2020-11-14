#include <stdio.h>
#include <string.h>

typedef struct _Person {
	char	name[20];
	int		age;
	char	address[100];
} Person;

int				main()
{
	Person p1;

	strcpy(p1.name, "Alice");
	p1.age = 30;
	strcpy(p1.address, "London 1st street");

	printf("Name : %s\n", p1.name);
	printf("Age : %d\n", p1.age);
	printf("Address : %s\n", p1.address);

	return 0;
}
