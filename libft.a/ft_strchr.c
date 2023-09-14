/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:14:27 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/08 17:27:43 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	if (str[i] == '\0')
		return (NULL);
	return ((char *)&str[i]);
}

// int main (void)
// {
// 	printf("%s", ft_strchr("heye", 'e'));
// 	return 0;