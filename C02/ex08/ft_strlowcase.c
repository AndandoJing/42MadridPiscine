/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:10:23 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/20 17:17:29 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[7];

	str[0] = 'A';
	str[1] = '0';
	str[2] = 'b';
	str[3] = '&';
	str[4] = '\n';
	str[5] = '\0';
	printf("Before: '%s'.\n", str);
	printf("After: '%s'.\n", ft_strlowcase(str));
	return (0);
}
*/
