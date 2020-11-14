#include <stdio.h>

struct PacketHeader {
	char	flags;
	int		seq;
} __attribute__((aligned(1), packed));

int		main()
{
	struct	PacketHeader header;

	printf("%ld\n", sizeof(header.flags));
	printf("%ld\n", sizeof(header.seq));
	printf("%ld\n", sizeof(header));

	return 0;
}
