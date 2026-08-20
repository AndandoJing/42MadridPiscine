/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 19:57:45 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/20 20:09:40 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
