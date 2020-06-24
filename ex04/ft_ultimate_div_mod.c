/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 16:58:02 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/23 17:12:25 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}
int main (void)
{
	ft_ultimate_div_mod(
	return(0);
}
