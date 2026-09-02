/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 21:41:10 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 23:09:30 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_print_lkp(char *dict_str, char *key, int *first)
{
	char	*value;

	value = ft_find_value(dict_str, key);
	if (!value)
		return (0);
	if (!*first)
		write(1, " ", 1);
	ft_putstr(value);
	free(value);
	*first = 0;
	return (1);
}

int	ft_print_box(int box, char *dict_str, int *first)
{
	char	*mag;
	int		k;
	int		res;

	mag = malloc((box - 1) * 3 + 2);
	if (!mag)
	{
		return (0);
	}
	mag[0] = '1';
	k = 1;
	while (k <= (box - 1) * 3)
		mag[k++] = '0';
	mag[k] = 0;
	res = ft_print_lkp(dict_str, mag, first);
	free(mag);
	return (res);
}

int	ft_get_chunk(char *chunk, char *number, int len)
{
	int	i;
	int	chunk_len;

	chunk_len = len % 3;
	if (chunk_len == 0)
	{
		chunk_len = 3;
	}
	i = 0;
	while (i < chunk_len)
	{
		chunk[i] = number[i];
		i++;
	}
	chunk[i] = '\0';
	return (chunk_len);
}

int	ft_translate(char *number, char *dict_str)
{
	int		len;
	int		chunk_len;
	int		boxes;
	int		first;
	char	chunk[4];

	len = ft_strlen(number);
	boxes = (len + 2) / 3;
	first = 1;
	if (ft_chunk_zero(number))
		return (ft_print_lkp(dict_str, "0", &first));
	while (boxes > 0)
	{
		chunk_len = ft_get_chunk(chunk, number, len);
		if (!ft_chunk_zero(chunk))
			if (!ft_process_box(chunk, dict_str, &first)
				|| (boxes > 1 && !ft_print_box(boxes, dict_str, &first)))
				return (0);
		number += chunk_len;
		len -= chunk_len;
		boxes--;
	}
	ft_print_newline();
	return (1);
}
