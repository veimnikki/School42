/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:17:29 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/08 17:27:48 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *str1, const char *str2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	i = 0;
	ptr1 = (char *)str1;
	ptr2 = (char *)str2;
	while (ptr1[i] != '\0' && ptr2[i] != '\0' && i < n)
	{
		if (ptr1[i] > ptr2[i])
			return (1);
		else if (ptr1[i] < ptr2[i])
			return (-1);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char str1[] = "hello!";
// 	char str2[] = "world";
// 	printf("%d", strncmp(str1, str2, 3));
// 	return 0;
// }