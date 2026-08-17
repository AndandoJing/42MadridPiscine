#include <stdio.h>

int	main(void)
{
	int	n;
	int	*p;

	n = 42;
	p = &n;
	*p = 100;
	printf("n = %d\n", n);
	printf("&n = %p\n", (void *)&n);
	printf("p = %p\n", (void *)p);
	printf("*p = %d\n", *p);
	printf("&p = %p\n", (void *)&p);
	return(0);
}
