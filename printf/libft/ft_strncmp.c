/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:17:29 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/22 16:31:52 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	i = 0;
	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	while (n > 0)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		if (*ptr1 == '\0')
			return (0);
		ptr1++;
		ptr2++;
		n--;
	}
	return (0);
}

// int main(void)
// {
// 	char str1[] = "hello!";
// 	char str2[] = "hello";
// 	printf("%d", ft_strncmp(str1, str2, 6));
// 	return 0;
// }