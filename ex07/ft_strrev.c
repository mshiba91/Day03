/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshiba <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:42:48 by mshiba            #+#    #+#             */
/*   Updated: 2020/06/23 11:43:06 by mshiba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <unistd.h.>

char ft_strrev(char *str)
{
	int  i;
	int size ;
	char temp;

	i =0;
	size = 0;
	if (str)
	{
			while (str[size] != '\0')
			{
				size++;
			}
				{
					while (i < size / 2)
					{
						temp = str[i];
						str[i] = str[size - i - 1];
						str[size - i -1] = temp;
						++i;
					}
				}
				return (str);
	}
			
