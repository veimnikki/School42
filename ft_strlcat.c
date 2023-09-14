/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:48:26 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/07 14:12:19 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// IT HAS TO BE REVIEWED!!!

#include <string.h>
#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	j = dest_length;
	i = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[i] && dest_length + i < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = 0;
	}
	if (dest_length >= size)
		dest_length = size;
	return (dest_length + src_length);
}

int main(void)
{
	// int i = 0;
	// int j = 0;
	char str1[] = "hey my friend";
	char str2[] = ", how are you?";
	printf("%zu\n", ft_strlcat(str1, str2, 6));
	printf("%s\n", str1);
	return 0;
}