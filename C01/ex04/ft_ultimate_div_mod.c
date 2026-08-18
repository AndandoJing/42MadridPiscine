/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 11:43:47 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/17 12:10:08 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp1 / temp2;
	*b = temp1 % temp2;
}
/*
#include <stdio.h>

int	main(void)
{
	int	test_a;
	int	test_b;

	test_a = 17;
	test_b = 5;
	printf("a before=%d, b before=%d\n", test_a, test_b);
	ft_ultimate_div_mod(&test_a, &test_b);
	printf("a after=%d, b after=%d\n", test_a, test_b);
	return (0);
}
*/
