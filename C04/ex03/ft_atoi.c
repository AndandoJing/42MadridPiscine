/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 13:06:12 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/21 14:16:27 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	str = "42";
	printf("%d\n", ft_atoi(str));
	str = "   ++---7";
	printf("%d\n", ft_atoi(str));
	str = " ";
	printf("%d\n", ft_atoi(str));
	return (0);
}
*/
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		printf("%d\n", ft_atoi(argv[1]));
	}
	return (0);
}
*/
