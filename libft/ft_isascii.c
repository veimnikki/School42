/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:40:40 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/07 16:21:39 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0x00 && a <= 0x7F)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d", ft_isascii(' '));	
// 	return (0);
// }