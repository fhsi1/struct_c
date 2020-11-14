#include <stdio.h>

struct Point2D {
	int	x;
	int	y;
};

int		main()
{
	struct Point2D p[3];

	p[0].x = 10;
	p[0].x = 20;
	p[0].x = 30;
	p[0].x = 40;
	p[0].x = 50;
	p[0].x = 60;

	printf("%d %d\n", p[0].x, p[0].y);
	printf("%d %d\n", p[1].x, p[1].y);
	printf("%d %d\n", p[2].x, p[2].y);

	return 0;
}
