/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:06:28 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/07 16:04:09 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 'a' - 'A');
	return (ch);
}

// int main(void)
// {
// 	printf("%d", ft_tolower('A'));
// 	return 0;
// }