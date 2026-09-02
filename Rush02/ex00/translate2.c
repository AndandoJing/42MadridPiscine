/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 21:41:20 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 23:09:39 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_process_box(char *chunk, char *dict_str, int *first)
{
	char	key[3];

	if (ft_strlen(chunk) == 3)
	{
		ft_make_key(key, chunk[0], 0, 0);
		if (chunk[0] != '0' && (!ft_print_lkp(dict_str, key, first)
				|| (!ft_print_lkp(dict_str, "100", first))))
			return (0);
		chunk++;
	}
	if (ft_strlen(chunk) == 2 && chunk[0] == '1')
	{
		ft_make_key(key, chunk[0], chunk[1], 0);
		return (ft_print_lkp(dict_str, key, first));
	}
	if (ft_strlen(chunk) == 2)
	{
		ft_make_key(key, chunk[0], '0', 0);
		if (chunk[0] > '1' && !ft_print_lkp(dict_str, key, first))
			return (0);
		chunk++;
	}
	return (ft_process_uni(chunk, dict_str, first));
}

int	ft_process_uni(char *chunk, char *dict_str, int *first)
{
	char	key[2];

	key[0] = chunk[0];
	key[1] = 0;
	if (chunk[0] != '0' && !ft_print_lkp(dict_str, key, first))
		return (0);
	return (1);
}

void	ft_make_key(char *key, char c1, char c2, char c3)
{
	key[0] = c1;
	key[1] = c2;
	key[2] = c3;
}

int	ft_chunk_zero(char *str)
{
	while (*str)
	{
		if (*str != '0')
			return (0);
		str++;
	}
	return (1);
}
