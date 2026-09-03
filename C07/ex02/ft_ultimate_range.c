/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 16:16:00 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/01 17:45:57 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_ultimate_range(&arr, -3, 12);
	if (size == -1)
		write(1, "error\n", 6);
	else if (size == 0)
		write(1, "NULL\n", 5);
	else
	{
		i = 0;
		while (i < size)
		{
			printf("%d ", arr[i]);
			i++;
		}
		printf("\n");
	}
	free(arr);
	return (0);
}
*/