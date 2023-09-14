/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 10:57:53 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/07 16:18:01 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char a)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123))
		return (1);
	else
		return (0);
}

// int main(void)
// {
// 	printf("%d", ft_isalpha('A'));	
// 	return (0);
// }