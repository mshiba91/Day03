#include <stdio.h>
#include <unistd.h>

void print_ft_ft(int *nbr)
{ if (nbr)
	{
		*nbr = 42;
	}
}
int main(void)
{
	print_ft_ft('*nbr');
		return(0);
}
