/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 20:53:37 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/16 20:57:43 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 11;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("a=%d, b=%d, div=%d, mod=%d\n", a, b, div, mod);
	return (0);
}
*/
