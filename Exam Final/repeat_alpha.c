/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 15:25:06 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/03 17:51:35 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	j;
	int	repeat_times;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			repeat_times = str[i] - 'a' + 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat_times = str[i] - 'A' + 1;
		else
			repeat_times = 1;
		j = 0;
		while (j < repeat_times)
		{
			write(1, &str[i], 1);
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}
