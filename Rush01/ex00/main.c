/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 18:06:35 by charroyo          #+#    #+#             */
/*   Updated: 2026/08/22 21:10:34 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_error(void);
int		ft_solve(int grid[4][4], int *clues, int pos);
void	ft_print_grid(int grid[4][4]);
void	ft_init_grid(int grid[4][4]);

int	ft_read_clues(char *input_str, int *clues)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (input_str[i * 2] < '1' || input_str[i * 2] > '4')
			return (0);
		if (i < 15 && input_str[i * 2 + 1] != ' ')
			return (0);
		clues[i] = input_str[i * 2] - '0';
		i++;
	}
	return (input_str[31] == '\0');
}

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	clues[16];

	if (argc != 2 || !ft_read_clues(argv[1], clues))
	{
		ft_error();
		return (0);
	}
	ft_init_grid(grid);
	if (ft_solve(grid, clues, 0))
		ft_print_grid(grid);
	else
		ft_error();
	return (0);
}
