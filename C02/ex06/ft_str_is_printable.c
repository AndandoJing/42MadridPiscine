/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 11:36:44 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/20 13:41:43 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	str2[2];
	char	str3[3];
	char	str4[3];
	char	str5[3];

	str1[0] = '\0';
	str2[0] = '1';
	str2[1] = '\0';
	str3[0] = '\n';
	str3[1] = '2';
	str3[2] = '\0';
	str4[0] = '3';
	str4[1] = '\t';
	str4[2] = '\0';
	str5[0] = '!';
	str5[1] = ' ';
	str5[2] = '\0';
	printf("'%s'->%d\n", str1, ft_str_is_printable(str1));
	printf("'%s'->%d\n", str2, ft_str_is_printable(str2));
	printf("'%s'->%d\n", str3, ft_str_is_printable(str3));
	printf("'%s'->%d\n", str4, ft_str_is_printable(str4));
	printf("'%s'->%d\n", str5, ft_str_is_printable(str5));
	return (0);
}
*/
