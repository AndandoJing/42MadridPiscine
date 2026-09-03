/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:37:59 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/03 21:45:41 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		left;
	int		right;
	int		i;
	char	temp;

	i = 0;
	left = 0;
	while (str[i] != '\0')
		i++;
	right = i - 1;
	while (left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
	return (str);
}
