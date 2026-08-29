/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/29 15:37:08 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/29 16:58:10 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}

/*
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	output;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	output = nb % 10 + '0';
	write(1, &output, 1);
}

int	main(int argc, char **argv)
{
	int	nb;
	
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		ft_putnbr(ft_iterative_factorial(nb));
	}
	else
		write(2, "Error\n", 6);
	return (0);
}
*/
