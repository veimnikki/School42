/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:49:53 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/08 17:27:41 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	j = 0;
	i = ft_strlen(str) - 1;
	while (str[j] != '\0' && str[i] != c)
	{
		i--;
		j++;
	}
	if (i == 0)
		return (NULL);
	return ((char *)&str[i]);
}

// int main (void)
// {
// 	printf("%s", ft_strrchr("ee", 'e'));
// 	return 0;