
#include "tpool.h"

int	tpool_error(int i)
{
	printf("ERROR tpool: ");
	if (i == -1)
		printf("passed function errors, (0 == error).\n");
	else if (i == -2)
		printf("pthread_create.\n");
	else if (i == -3)
		printf("malloc tpool->thread.\n");
	else if (i == -4)
		printf("create_task.\n");
	else if (i == -5)
		printf("no function passed to tpool_add.\n");
	return (0);
}
