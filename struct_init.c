#include <stdio.h>

struct Person {
	char	name[20];
	int		age;
	char	address[100];
};

int		main()
{
	struct Person p1 = {.name = "Alice", .age = 30, .address = "London 1st Street"};

	printf("Name : %s\n", p1.name);
	printf("Name : %d\n", p1.age);
	printf("Name : %s\n", p1.address);

	struct Person p2 = {"Elle", 17, "LA !st street"};

	printf("Name : %s\n", p1.name);
	printf("Name : %d\n", p1.age);
	printf("Name : %s\n", p1.address);

	return 0;
}
