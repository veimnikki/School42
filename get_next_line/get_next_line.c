/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikka <nikka@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:05:32 by nikka             #+#    #+#             */
/*   Updated: 2023/10/27 16:19:32 by nikka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	int			bytes_read;
	static char	*str;
	char		*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (free(str), str = NULL, NULL);
	if (check_n(str))
		return (print_line(&str));
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		buffer[bytes_read] = 0;
		str = ft_strjoin(str, buffer);
		if (check_n(str))
			break ;
	}
	if (buffer)
		free(buffer);
	buffer = NULL;
	return (print_line(&str));
}

// int main(void)
// {
// 	int fd = open("fd", O_RDONLY);
// 	char	*str;
// 	int		i = 0;

// 	while (i < 10)
// 	{
// 		str = get_next_line(fd);
// 		printf("%s", str);
// 		free(str);
// 		i++;
// 	}
// 	return (0);
// }
