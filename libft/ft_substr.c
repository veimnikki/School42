/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:21:30 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/12 17:23:56 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_length;

	s_length = 0;
	if (!s)
		return (NULL);
	while (s[s_length])
		s_length++;
	if (len > s_length - start)
		len = s_length - start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len && start < s_length)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main()
// {
// 	char *str = "Hello World!";
// 	printf("%s", ft_substr(str, 4, 5));
// 	return 0;
// }