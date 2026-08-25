/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 20:14:17 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/25 11:02:04 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (&str[i]);
		}
		else
		{
			i++;
		}
	}
	return (NULL);
}
/*
int	ft_strlen(char *s)
{
	int	nbr;

	nbr = 0;
	while (s[nbr] != '\0')
	{
		nbr++;
	}
	return (nbr);
}

void	ft_print_result(char *result)
{
	if (result != 0)
		write(1, result, ft_strlen(result));
	else
		write(1, "Not found", 9);
	write(1, "\n", 1);
}

int	main(void)
{
	char	*str;
	char	*to_find1;
	char	*to_find2;
	char	*to_find3;
	char	*result1;
	char	*result2;
	char	*result3;

	str = "abcCatxyz";
	to_find1 = "Cat";
	to_find2 = "Cax";
	to_find3 = "";
	result1 = ft_strstr(str, to_find1);
	result2 = ft_strstr(str, to_find2);
	result3 = ft_strstr(str, to_find3);
	ft_print_result(result1);
	ft_print_result(result2);
	ft_print_result(result3);
	return (0);
}
*/
