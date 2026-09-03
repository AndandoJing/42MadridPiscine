/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/03 18:40:20 by jinjin            #+#    #+#             */
/*   Updated: 2026/09/03 18:55:22 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	search_and_replace(char *str, char search_for, char replace_with)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search_for)
			str[i] = replace_with;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write(1, "\n", 1);
	return (0);
}
