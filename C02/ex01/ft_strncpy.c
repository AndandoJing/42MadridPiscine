/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:12:31 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/19 11:57:07 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[4];
	char	dest[3];
	int		i;

	src[0] = 'C';
	src[1] = 'a';
	src[2] = 't';
	src[3] = '\0';
	i = 0;
	printf("Source: %s\n", src);
	ft_strncpy(dest, src, 2);
	printf("Destination: ");
	while (i < 2)
	{
		printf("%c", dest[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
