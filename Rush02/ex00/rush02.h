/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinjin <jinjin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 21:58:47 by jinjin            #+#    #+#             */
/*   Updated: 2026/08/30 23:02:21 by jinjin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_is_digit(char c);
int		ft_skip_spaces(char *dict_str, int i);
int		ft_key_match(char *dict_str, char *key, int index);
char	*ft_copy_value(char *dict_str, int start, int len);
int		ft_valid_dict(char *dict_str);
char	*ft_find_value(char *dict_str, char *key);
int		ft_print_error(void);
int		ft_print_dict_error(void);
void	ft_print_newline(void);
char	*ft_read_dict(char *dict_path);
int		ft_print_lkp(char *dict_str, char *num_key, int *first);
int		ft_print_box(int box, char *dict_str, int *first);
int		ft_get_chunk(char *chunk, char *number, int len);
int		ft_translate(char *number, char *dict_str);
int		ft_process_box(char *chunk, char *dict_str, int *first);
int		ft_process_uni(char *chunk, char *dict_str, int *first);
void	ft_make_key(char *k, char c1, char c2, char c3);
int		ft_chunk_zero(char *str);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
