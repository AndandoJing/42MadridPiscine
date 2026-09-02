/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 17:25:01 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 22:08:53 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_skip_spaces(char *dict_str, int i)
{
	while (dict_str[i] == ' ')
		i++;
	return (i);
}

int	ft_key_match(char *dict_str, char *key, int index)
{
	int	i;

	i = 0;
	while (key[i] != '\0' && dict_str[index + i] == key[i])
		i++;
	if (key[i] != '\0')
		return (0);
	index = index + i;
	index = ft_skip_spaces(dict_str, index);
	if (dict_str[index] != ':')
		return (0);
	return (1);
}

char	*ft_copy_value(char *dict_str, int start, int len)
{
	char	*value;
	int		i;

	value = malloc(len + 1);
	if (!value)
		return (NULL);
	i = 0;
	while (i < len)
	{
		value[i] = dict_str[start + i];
		i++;
	}
	value[i] = '\0';
	return (value);
}
