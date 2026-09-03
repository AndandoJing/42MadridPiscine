/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:10:32 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/02 15:37:57 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len = total_len + ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + ft_strlen(sep) * (size - 1);
	return (total_len);
}

int	ft_copy(char *result, char *src, int k)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		result[k++] = src[j++];
	}
	return (k);
}

void	ft_copy_join(char *result, int size, char **strs, char *sep)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		k = ft_copy(result, strs[i], k);
		if (i != size - 1)
			k = ft_copy(result, sep, k);
		i++;
	}
	result[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		if (!result)
			return (0);
		result[0] = '\0';
		return (result);
	}
	total_len = ft_total_len(size, strs, sep);
	result = malloc (sizeof(char) * (total_len + 1));
	if (!result)
		return (0);
	ft_copy_join(result, size, strs, sep);
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	sep[] = " - ";
	int		size;
	char	str1[] = "Hello";
	char	str2[] = "42";
	char	str3[] = "Madrid";
	char	*strs[3];
	char	*result;

	size = 3;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	result = ft_strjoin(size, strs, sep);
	if (!result)
		return (0);
	printf("%s\n", result);
	free (result);
	return (0);
}
*/