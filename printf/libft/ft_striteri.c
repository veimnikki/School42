/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:05:22 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/19 15:21:54 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// void print_character_and_index(unsigned int index, char *c)
// {
// 	printf("Character at index %u: %c\n", index, *c);
// }

// int main()
// {
// 	char str[] = "Hello!";
// 	ft_striteri(str, print_character_and_index);
// 	return 0;
// }