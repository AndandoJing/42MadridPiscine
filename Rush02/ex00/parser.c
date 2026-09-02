/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 17:09:29 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 22:55:54 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	ft_valid_line(char *dict_str, int i)
{
	if (!ft_is_digit(dict_str[i]))
		return (0);
	while (ft_is_digit(dict_str[i]))
		i++;
	i = ft_skip_spaces(dict_str, i);
	if (dict_str[i] != ':')
		return (0);
	i++;
	i = ft_skip_spaces(dict_str, i);
	if (dict_str[i] == '\n' || dict_str[i] == '\0')
		return (0);
	while (dict_str[i] != '\n' && dict_str[i] != '\0')
	{
		if (dict_str[i] < 32 || dict_str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	ft_valid_dict(char *dict_str)
{
	int	index;

	index = 0;
	if (!dict_str || dict_str[0] == '\0')
		return (0);
	while (dict_str[index] != '\0')
	{
		if (dict_str[index] == '\n')
			index++;
		else
		{
			if (!ft_valid_line(dict_str, index))
				return (0);
			while (dict_str[index] != '\n'
				&& dict_str[index] != '\0')
				index++;
		}
	}
	return (1);
}

static int	ft_value_start(char *dict_str, int index)
{
	while (ft_is_digit(dict_str[index]))
		index++;
	index = ft_skip_spaces(dict_str, index);
	index++;
	index = ft_skip_spaces(dict_str, index);
	return (index);
}

static int	ft_value_len(char *dict_str, int start)
{
	int	end;

	end = start;
	while (dict_str[end] != '\n' && dict_str[end] != '\0')
		end++;
	while (end > start && dict_str[end - 1] == ' ')
		end--;
	return (end - start);
}

char	*ft_find_value(char *dict_str, char *key)
{
	int		index;
	int		start;
	int		len;
	char	*value;

	index = 0;
	while (dict_str[index] != '\0')
	{
		if (dict_str[index] != '\n'
			&& ft_key_match(dict_str, key, index))
		{
			start = ft_value_start(dict_str, index);
			len = ft_value_len(dict_str, start);
			value = ft_copy_value(dict_str, start, len);
			return (value);
		}
		while (dict_str[index] != '\n'
			&& (dict_str[index] != '\0'))
			index++;
		if (dict_str[index] == '\n')
			index++;
	}
	return (NULL);
}
