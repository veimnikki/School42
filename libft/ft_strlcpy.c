/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:15:38 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/20 15:04:35 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (res);
}

// int main(void)
// {
// 	char	dest1[] = "bedfsdf";
// 	char	src1[] = "aa";
// 	printf("%zu\n%s", ft_strlcpy(dest1, src1, 2), dest1);
// 	return (0);
// }