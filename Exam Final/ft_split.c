#include <stdlib.h>

int	is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i]) == 1)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && is_sep(str[i]) == 0)
			i++;
	}
	return (count);
}

int	word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && is_sep(str[i]) == 0)
		i++;
	return (i);
}

char	*create_word(char *str)
{
	char	*word;
	int		len;
	int		i;

	len = word_len(str);
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;
	int		j;

	result = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_sep(str[i]) == 1)
			i++;
		if (str[i] != '\0')
		{
			result[j] = create_word(str + i);
			if (!result[j])
				return (NULL);
			j++;
			while (str[i] != '\0' && is_sep(str[i]) == 0)
				i++;
		}
	}
	result[j] = NULL;
	return (result);
}
