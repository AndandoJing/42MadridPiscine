/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 18:25:31 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/16 20:38:52 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 5;
	printf("before: a=%d, b=%d\n", a, b);
	ft_swap(&a, &b);
	printf("after: a=%d, b=%d\n", a, b);
	return (0);
}
*/
