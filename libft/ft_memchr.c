/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:46:03 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/22 16:30:10 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		if (ptr[i] == '\0')
			break;
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "hello!";
// 	char *ptr = ft_memchr(str, 'l', 5);
// 	printf("%s", ptr);
// 	return 0;
// }