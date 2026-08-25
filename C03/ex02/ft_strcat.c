/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 15:59:20 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/24 19:33:46 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	src_len;
	int	dest_len;
	int	i;
	char		*dest;

	i = 0;
	if (argc == 3)
	{
		src_len = ft_strlen(argv[1]);
		dest_len = ft_strlen(argv[2]);
		dest = malloc((src_len + dest_len + 1) *sizeof(char));
		if (dest == NULL)
			return (1);
		while (argv[2][i] != '\0')
		{
			dest[i] = argv[2][i];
			i++;
		}
		dest[i] = '\0';
		printf("%s\n", ft_strcat(dest, argv[1]));
		free(dest);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
*/
