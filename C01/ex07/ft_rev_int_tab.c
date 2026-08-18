/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 17:45:01 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/17 20:32:02 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	left;
	int	right;

	left = 0;
	right = size - 1;
	while (left < right)
	{
		temp = tab[left];
		tab[left] = tab[right];
		tab[right] = temp;
		left++;
		right--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	tab[5];
	int	i;

	i = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	printf("before:");
	while (i < 5)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 5);
	i = 0;
	printf("after:");
	while (i < 5)
	{
		printf("%d,", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
