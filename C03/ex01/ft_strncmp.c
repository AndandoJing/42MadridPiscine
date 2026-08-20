/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 15:29:29 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/20 16:12:59 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "ABCD";
	char	s2[] = "ABCd";
	char	s3[] = "aBC";
	char	s4[1];

	s4[0] = '\0';
	printf("'%s', '%s', n=4, %d\n", s1, s2, ft_strncmp(s1, s2, 4));
	printf("'%s', '%s', n=4, %d\n", s1, s3, ft_strncmp(s1, s3, 4));
	printf("'%s', '%s', n=4, %d\n", s1, s4, ft_strncmp(s1, s4, 4));
	printf("'%s', '%s', n=4, %d\n", s4, s2, ft_strncmp(s4, s2, 4));
	printf("'%s', '%s', n=4, %d\n", s3, s2, ft_strncmp(s3, s2, 4));
	return (0);
}
*/
