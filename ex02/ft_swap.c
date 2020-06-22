#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a' int*d)
{
	int b;

	if (a && d)
	{
		b = *a;
		*a = *d;
		*d = b;
	}
}
