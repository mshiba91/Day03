/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 10:38:05 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/24 10:45:30 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b);

int main()

{
		int m = 7;
		int l = 5;
		int *a = &m;
		int *b = &l;
		ft_swap(a,b)
			printf(a,b,'\n');
		return(0);
}
			
