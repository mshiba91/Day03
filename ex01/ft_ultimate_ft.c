/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:38:54 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/24 16:05:13 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <stdio.h>

int putchar(char c)

{
	write(1 ,&c ,1);
}

void print_ft_ultimate_ft()
{
	char c;
	int *********nbr;

	c = *********nbr;

	{
		*********nbr = 42;
		print(*********nbr);
	}
}

int main(void)
{
	print_ft_ultimate_ft();
   
	return(0);
}
