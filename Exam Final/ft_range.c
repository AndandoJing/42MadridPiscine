/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:47:06 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/03 22:04:03 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_size(int start, int end)
{
	int	size;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	return (size);
}

int	*ft_range(int start, int end)
{
	int	*result;
	int	size;
	int	i;

	size = ft_size(start, end);
	result = malloc(sizeof(int) * size);
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		if (start <= end)
		{
			result[i] = start;
			start++;
			i++;
		}
		else
		{
			result [i] = start;
			start--;
			i++;
		}
	}
	return (result);
}
