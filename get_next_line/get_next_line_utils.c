/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikka <nikka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:05:22 by nikka             #+#    #+#             */
/*   Updated: 2023/10/27 18:54:33 by nikka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		total_len;
	int		i;
	int		j;

	total_len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (total_len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < total_len)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[total_len] = '\0';
	return (str);
}

char	*ft_strdup(char *s, int len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr || !len)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	check_n(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*print_line(char **temp)
{
	int		n_pos;
	char	*return_line;
	char	*str;

	if (!temp)
		return (NULL);
	str = *temp;
	n_pos = 0;
	while (str[n_pos] && n_pos != '\n')
		n_pos++;
	if (n_pos == '\n')
		n_pos++;
	return_line = ft_strdup(str, n_pos);
	*temp = ft_strdup(str + n_pos, ft_strlen(str + n_pos));
	if (str)
		free(str);
	str = NULL;
	return (return_line);
}
