/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 10:44:48 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/01 13:41:55 by jinjin           ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = ft_strlen(src);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (0);
	copy = ft_strcpy(copy, src);
	return (copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	*copy;

	copy = ft_strdup(src);
	if (!copy)
		return (1);
	printf("src: %p\n", (void *)src);
	printf("copy: %p\n", (void *)copy);
	printf("content: %s\n", copy);
	free(copy);
	return (0);
}
*/
