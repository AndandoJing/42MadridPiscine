/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 16:23:40 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/20 17:08:16 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
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

	str[0] = 'a';
	str[1] = '1';
	str[2] = 'B';
	str[3] = 'c';
	str[4] = ' ';
	str[5] = '\n';
	str[6] = '!';
	printf("Original: '%s'.\n", str);
	printf("Now: '%s'.\n", ft_strupcase(str));
	return (0);
}
*/
