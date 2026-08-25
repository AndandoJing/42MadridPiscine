/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:05:02 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/25 15:19:28 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size && dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (i == size)
		return (size + j);
	while (src[k] != '\0' && (i + k < size - 1))
	{
		dest[i + k] = src[k];
		k++;
	}
	dest[i + k] = '\0';
	return (i + j);
}
/*
#include <stdio.h>

int	main(void)
{
	char				dest1[20] = "Hello";
	char				dest2[20] = "Hello";
	char				dest3[20] = "Hello";
	char				dest4[20] = "Hello";
	char				src[] = "Cat";
	unsigned int		size1;
	unsigned int		size2;
	unsigned int		size3;
	unsigned int		size4;
	unsigned int		result1;
	unsigned int		result2;
	unsigned int		result3;
	unsigned int		result4;

	size1 = 0;
	size2 = 3;
	size3 = 7;
	size4 = 20;
	result1 = ft_strlcat(dest1, src, size1);
	result2 = ft_strlcat(dest2, src, size2);
	result3 = ft_strlcat(dest3, src, size3);
	result4 = ft_strlcat(dest4, src, size4);
	printf("size: %u, return = %u, dest = %s\n",
		size1, result1, dest1);
	printf("size: %u, return = %u, dest = %s\n",
		size2, result2, dest2);
	printf("size: %u, return = %u, dest = %s\n",
		size3, result3, dest3);
	printf("size: %u, return = %u, dest = %s\n",
		size4, result4, dest4);
	return (0);
}
*/