/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 20:47:00 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/18 11:17:52 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size -1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		j++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[10];
	int	i;

	tab[0] = 3;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 0;
	tab[4] = -1;
	tab[5] = 100;
	tab[6] = 74;
	tab[7] = 42;
	tab[8] = -42;
	tab[9] = -89;
	i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 10);
	i = 0;
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
