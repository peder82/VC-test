#include <stdio.h>
#include <stdlib.h>

main(void)
{
	int *p = (int *) malloc(4);

	if (!p)
	{
		return 1; // no memory available
	}

	*p = 42;
	free(p);
	p = 0;

	void *frame = malloc(1514);
	free(frame);
	frame = 0;

	char *message = (char *)malloc(141);
	free(message);
	message = 0;

	char str1[2];
	scanf("%s", &str1);

	return 0;
}