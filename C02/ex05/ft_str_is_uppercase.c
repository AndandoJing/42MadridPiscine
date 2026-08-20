/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:26:28 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/20 11:34:49 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	str3[3];
	char	str4[3];

	str1[0] = '\0';
	str2[0] = 'a';
	str2[1] = 'A';
	str2[2] = '\0';
	str3[0] = 'B';
	str3[1] = 'b';
	str3[2] = '\0';
	str4[0] = 'C';
	str4[1] = 'D';
	str4[2] = '\0';
	printf("'%s'->%d\n", str1, ft_str_is_uppercase(str1));
	printf("%s->%d\n", str2, ft_str_is_uppercase(str2));
	printf("%s->%d\n", str3, ft_str_is_uppercase(str3));
	printf("%s->%d\n", str4, ft_str_is_uppercase(str4));
	return (0);
}
*/
