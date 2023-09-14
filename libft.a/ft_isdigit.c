/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:31:27 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/07 16:18:07 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char a)
{
	if (a > 47 && a < 58)
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d", ft_isdigit('0'));	
// 	return (0);
// }