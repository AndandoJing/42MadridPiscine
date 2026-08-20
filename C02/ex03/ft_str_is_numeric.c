/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 15:09:57 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/19 15:58:34 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[1];
	char	str2[3];
	char	str3[4];
	char	str4[3];

	str1[0] = '\0';
	str2[0] = '1';
	str2[1] = '2';
	str2[2] = '\0';
	str3[0] = 'a';
	str3[1] = '4';
	str3[2] = '6';
	str3[3] = '\0';
	str4[0] = '3';
	str4[1] = 'a';
	str4[2] = '\0';
	printf("%s->%d\n", str1, ft_str_is_numeric(str1));
	printf("%s->%d\n", str2, ft_str_is_numeric(str2));
	printf("%s->%d\n", str3, ft_str_is_numeric(str3));
	printf("%s->%d\n", str4, ft_str_is_numeric(str4));
	return (0);
}
*/
