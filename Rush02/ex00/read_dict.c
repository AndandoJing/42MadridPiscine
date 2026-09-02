/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 14:54:07 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 22:34:09 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static void	ft_copy(char *dest, char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
}

static char	*ft_expand(char *old_str, int size, int new_size)
{
	char	*new_str;

	new_str = malloc(new_size);
	if (!new_str)
	{
		free(old_str);
		return (NULL);
	}
	ft_copy(new_str, old_str, size);
	free(old_str);
	return (new_str);
}

static char	*ft_read_loop(int fd, char *dict_str, int size, int capacity)
{
	int	bytes;

	while (1)
	{
		if (size == capacity - 1)
		{
			dict_str = ft_expand(dict_str, size, capacity * 2);
			if (!dict_str)
				return (NULL);
			capacity = capacity * 2;
		}
		bytes = read(fd, dict_str + size, capacity - size - 1);
		if (bytes < 0)
		{
			free(dict_str);
			return (NULL);
		}
		if (bytes == 0)
			break ;
		size = size + bytes;
	}
	dict_str[size] = '\0';
	return (dict_str);
}

char	*ft_read_dict(char *dict_path)
{
	int		fd;
	char	*dict_str;

	fd = open(dict_path, O_RDONLY);
	if (fd < 0)
		return (NULL);
	dict_str = malloc(4096);
	if (!dict_str)
	{
		close(fd);
		return (NULL);
	}
	dict_str = ft_read_loop(fd, dict_str, 0, 4096);
	close(fd);
	return (dict_str);
}
