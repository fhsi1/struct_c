#include <stdio.h>

struct Person
{
	char	name[20];
	int		age;
	char	address[100];
};

int		main()
{
	struct	Person p1;
	struct	Person *ptr;

	ptr = &p1;

	ptr->age = 30;

	printf("Age : %d\n", p1.age);
	printf("Age : %d\n", ptr->age);

	return 0;
}
