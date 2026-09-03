/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 21:16:37 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/03 21:36:51 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*create_copy(char *src)
{
	int		i;
	char	*copy;
	int		len;

	i = 0;
	len = ft_strlen(src);
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (0);
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*copy;

	copy = create_copy(src);
	if (!copy)
		return (0);
	return (copy);
	free (copy);
}
