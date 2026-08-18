/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:30:29 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/18 17:13:42 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>

int	main(void)
{
	char	src[7];
	char	dest[7];

	src[0] = 'H';
	src[1] = 'e';
	src[2] = 'l';
	src[3] = 'l';
	src[4] = 'o';
	src[5] = '!';
	src[6] = '\0';
	printf("Source: %s\n", src);
	printf("Destination: %s", ft_strcpy(dest, src));
	return (0);
}
*/
