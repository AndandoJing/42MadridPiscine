/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 13:30:28 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/03 18:05:15 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		write(1, "\n", 1);
		return ;
	}
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (i != 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, &str[0], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	rev_print(argv[1]);
	return (0);
}
