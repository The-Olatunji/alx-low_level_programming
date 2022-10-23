#include <stdlib.h>
#include <time.h>
/**
  *positive_or_negative - declares if an integer is positive or negative
  *
  */

void ()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n < 0)
		printf("%d is positive", n);
	else
		printf("%d is negative", n);
	return (0);
}
