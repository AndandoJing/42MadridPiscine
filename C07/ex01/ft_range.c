/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 11:45:55 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/01 16:13:44 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (0);
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	min = -3;
	int	max = 12;
	int	i;
	int	size;

	range = ft_range(min, max);
	if (!range)
	{
		printf("NULL\n");
		return (0);
	}
	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
*/
