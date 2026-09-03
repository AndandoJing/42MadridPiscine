/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/01 17:11:42 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/02 22:02:22 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char c, char *charset)
{
	int		i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
			count++;
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
			i++;
	}
	return (count);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
		i++;
	return (i);
}

char	*ft_create_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	len = ft_word_len(str, charset);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset) == 1)
			i++;
		if (str[i] != '\0')
		{
			result[j] = ft_create_word(str + i, charset);
			if (!result[j])
				return (0);
			j++;
			while (str[i] != '\0' && ft_is_sep(str[i], charset) == 0)
				i++;
		}
	}
	result[j] = NULL;
	return (result);
}
/*
#include <stdio.h>

void	print_split(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
}

int	main(void)
{
	char	charset1[] = " ";
	char	charset2[] = ";,";
	char	charset3[] = ",;";
	char	charset4[] = ";";
	char	str1[] = "hello world";
	char	str2[] = ";;cat,dog;;;42";
	char	str3[] = "hello";
	char	str4[] = "";
	char	str5[] = ";;;;;";

	print_split(ft_split(str1, charset1));
	print_split(ft_split(str2, charset2));
	print_split(ft_split(str3, charset3));
	print_split(ft_split(str4, charset4));
	print_split(ft_split(str5, charset4));
	return (0);
}
*/