/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 14:58:02 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/26 18:44:21 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid_base(char *base, int i)
{
	int	j;

	if (base[i] == '+' || base[i] == '-' || base[i] == ' '
		|| (base[i] >= 9 && base[i] <= 13))
		return (0);
	j = i + 1;
	while (base[j] != '\0')
	{
		if (base[i] == base[j])
			return (0);
		j++;
	}
	return (1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	base_length;

	i = 0;
	while (base[i] != '\0')
		i++;
	base_length = i;
	if (i < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (ft_is_valid_base(base, i) == 0)
			return (0);
		i++;
	}
	return (base_length);
}

int	ft_base_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c != base[i])
			i++;
		else
			return (i);
	}
	return (-1);
}

int	ft_convert(char *str, char *base, int base_len)
{
	int	result;
	int	digit;
	int	i;

	i = 0;
	result = 0;
	digit = ft_base_index(str[i], base);
	while (digit != -1)
	{
		result = result * base_len + digit;
		i++;
		digit = ft_base_index(str[i], base);
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	base_len;
	int	result;

	i = 0;
	sign = 1;
	base_len = ft_check_base(base);
	if (base_len == 0)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	result = ft_convert(&str[i], base, base_len);
	return (sign * result);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_atoi_base("2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("101010", "01"));
	printf("%d\n", ft_atoi_base("vn", "poneyvif"));
	printf("%d\n", ft_atoi_base("   ---+--+2A", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("2Axyz", "0123456789ABCDEF"));
	return (0);
}
*/
