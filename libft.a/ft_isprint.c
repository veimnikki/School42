/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:57:23 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/08 17:27:52 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char a)
{
	if (a >= 32 && a <= 126)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d", ft_isprint('\n'));	
// 	return (0);
// }