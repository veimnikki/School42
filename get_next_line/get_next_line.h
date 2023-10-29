/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikka <nikka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:05:39 by nikka             #+#    #+#             */
/*   Updated: 2023/10/27 18:43:57 by nikka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*print_line(char **temp);
int		check_n(char *str);
char	*ft_strdup(char *s, int len);
int		ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif
