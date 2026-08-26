/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 15:34:51 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/26 14:55:41 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;
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
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (base_length);
}

void	ft_print_base(long n, char *base, int base_len)
{
	if (n >= base_len)
		ft_print_base(n / base_len, base, base_len);
	write(1, &base[n % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	n;

	base_len = ft_check_base(base);
	if (base_len == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	ft_print_base(n, base, base_len);
}
/*
int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;
	int	nbr4;
	int	nbr5;
	char		*base10;
	char		*base2;
	char		*base16;
	char		*base8;

	base8 = "poneyvif";
	base10 = "0123456789";
	base2 = "01";
	base16 = "0123456789ABCDEF";
	nbr1 = -2147483648;
	nbr2 = 2147483647;
	nbr3 = 42;
	nbr4 = -42;
	nbr5 = 0;
	write(1, "42, Base8, ", 11);
	ft_putnbr_base(nbr3, base8);
	write(1, "\n", 1);
	write(1, "42, Base2, ", 11);
	ft_putnbr_base(nbr3, base2);
       	write(1, "\n", 1);
	write(1, "42, Base16, ", 12);
	ft_putnbr_base(nbr3, base16);
	write(1, "\n", 1);
	write(1, "42, Base10, ", 12);
	ft_putnbr_base(nbr3, base10);
	write(1, "\n", 1);
	write(1, "-42, Base10, ", 13);
	ft_putnbr_base(nbr4, base10);
	write(1, "\n", 1);
	write(1, "0, Base2, ", 10);
	ft_putnbr_base(nbr5, base2);
	write(1, "\n", 1);
	write(1, "-2147483648, Base16, ", 21);
	ft_putnbr_base(nbr1, base16);
	write(1, "\n", 1);
	write(1, "2147483647, Base2, ", 19);
	ft_putnbr_base(nbr2, base2);
	write(1, "\n", 1);
	write(1, "Invalid 1: [", 12);
	ft_putnbr_base(42, "");
	write(1, "]\n", 2);
	write(1, "Invalid 2: [", 12);
	ft_putnbr_base(42, "0");
	write(1, "]\n", 2);
	write(1, "Invalid 3: [", 12);
	ft_putnbr_base(42, "012340");
	write(1, "]\n", 2);
	write(1, "Invalid 4: [", 12);
	ft_putnbr_base(42, "012+34");
	write(1, "]\n", 2);
	write(1, "invalid 5: [", 12);
	ft_putnbr_base(42, "012-34");
	write(1, "]\n", 2);
	return (0);
}
*/
