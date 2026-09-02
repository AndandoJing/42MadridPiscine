/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 20:48:29 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 22:09:02 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_print_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}

int	ft_print_dict_error(void)
{
	write(1, "Dict Error\n", 11);
	return (1);
}

void	ft_print_newline(void)
{
	write(1, "\n", 1);
}
