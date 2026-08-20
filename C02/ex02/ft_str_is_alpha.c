/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/19 11:17:56 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/19 13:24:48 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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
	char	str1[4];
	char	str2[] = "AbCD";
	char	str3[1];

	str1[0] = '8';
	str1[1] = 'A';
	str1[2] = 'b';
	str1[3] = '\0';
	str3[0] = '\0';
	printf("string1: %s only alphabetical? %d\n", str1, ft_str_is_alpha(str1));
	printf("string2: %s only alphabetical? %d\n", str2, ft_str_is_alpha(str2));
	printf("string3: %s only alphabetical? %d\n", str3, ft_str_is_alpha(str3));
	return (0);
}
*/
