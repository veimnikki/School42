/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 16:44:20 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/22 13:28:50 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t	i;

	if (!str1 && !str2)
		return (0);
	if (str2 < str1)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)str1)[i] = ((unsigned char *)str2)[i];
			i++;
		}
	}
	return (str1);
}

// int main(void)
// {
// 	char str1[] = "hello!";
// 	char str2[] = "world";
// 	ft_memmove(str1, str2, 4);
// 	printf("%s", str1);
// 	return 0;
// }