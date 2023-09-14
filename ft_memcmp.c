/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:19:00 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/08 17:38:56 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// MUST BE REDONE!!!!!!!!!!!!!

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	i = 0;
	ptr1 = str1;
	ptr2 = str2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char *str1 = "hello";
// 	char *str2 = "hell";
// 	printf("%d", ft_memcmp(str1, str2, 5));
// 	return 0;
// }