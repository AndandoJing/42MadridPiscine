/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 20:26:10 by charroyo          #+#    #+#             */
/*   Updated: 2026/08/22 21:00:52 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_init_grid(int grid[4][4])
{
	int	i;

	i = 0;
	while (i < 16)
	{
		grid[i / 4][i % 4] = 0;
		i++;
	}
}

int	ft_if_repeats(int grid[4][4], int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == val || grid[i][col] == val)
			return (1);
		i++;
	}
	return (0);
}

int	ft_visible(int a, int b, int c, int d)
{
	int	visible;

	visible = 1;
	if (b > a)
		visible++;
	if (c > a && c > b)
		visible++;
	if (d > c && d > b && d > a)
		visible++;
	return (visible);
}

int	ft_check(int g[4][4], int *clues, int row, int col)
{
	int	fwd;
	int	rev;

	if (row == 3)
	{
		fwd = ft_visible(g[0][col], g[1][col], g[2][col], g[3][col]);
		rev = ft_visible(g[3][col], g[2][col], g[1][col], g[0][col]);
		if (fwd != clues[col] || rev != clues[4 + col])
			return (0);
	}
	if (col == 3)
	{
		fwd = ft_visible(g[row][0], g[row][1], g[row][2], g[row][3]);
		rev = ft_visible(g[row][3], g[row][2], g[row][1], g[row][0]);
		if (fwd != clues[8 + row] || rev != clues[12 + row])
			return (0);
	}
	return (1);
}

int	ft_solve(int grid[4][4], int *clues, int pos)
{
	int	row;
	int	col;
	int	val;

	if (pos == 16)
		return (1);
	row = pos / 4;
	col = pos % 4;
	val = 1;
	while (val <= 4)
	{
		if (!ft_if_repeats(grid, row, col, val))
		{
			grid[row][col] = val;
			if (ft_check(grid, clues, row, col))
			{
				if (ft_solve(grid, clues, pos + 1))
					return (1);
			}
			grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}
