/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 21:22:55 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 23:08:14 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	ft_get_input(int argc, char **argv, char **number, char **dict_path)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
	{
		*number = argv[1];
		*dict_path = "numbers.dict";
	}
	else
	{
		*number = argv[2];
		*dict_path = argv[1];
	}
	return (1);
}

static int	ft_valid_number(char *number)
{
	int	i;

	i = 0;
	if (number[0] == 0)
		return (0);
	while (number[i] != 0)
	{
		if (number[i] > '9' || number[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*number;
	char	*dict_path;
	char	*dict_str;

	if (!ft_get_input(argc, argv, &number, &dict_path))
		return (ft_print_error());
	if (!ft_valid_number(number))
		return (ft_print_error());
	while (*number == '0' && *(number + 1) != 0)
		number++;
	dict_str = ft_read_dict(dict_path);
	if (!dict_str)
		return (ft_print_dict_error());
	if (!ft_valid_dict(dict_str))
	{
		free(dict_str);
		return (ft_print_dict_error());
	}
	if (!ft_translate(number, dict_str))
	{
		free(dict_str);
		return (ft_print_dict_error());
	}
	free(dict_str);
	return (0);
}
