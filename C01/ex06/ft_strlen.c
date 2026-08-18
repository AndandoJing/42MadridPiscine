/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 15:30:19 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/17 15:35:41 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("Cat -> length=%d\n", ft_strlen("Cat"));
	printf("Piscine -> length=%d\n", ft_strlen("Piscine"));
	printf("Hello -> length=%d\n", ft_strlen("Hello"));
	return (0);
}
*/
