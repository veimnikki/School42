/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:48:30 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/22 16:30:10 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sep_found(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
			counter++;
		i++;
	}
	return (counter);
}

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	i;
	size_t	j;
	size_t	k;

	strs = (char **)malloc(sizeof(char *) * (sep_found(s, c) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			strs[k] = (char *)malloc(sizeof(char) * (i - j + 1));
			if (!strs[k])
				return (NULL);
			ft_strncpy(strs[k], &s[j], i - j);
			strs[k][i - j] = '\0';
			k++;
		}
	}
	strs[k] = NULL;
	return (strs);
}

// int main(void)
// {
// 	char *str = "hello world! wassup?";
// 	char **split_result = ft_split(str, ' ');
// 	if (!split_result)
// 	{
// 		printf("Memory allocation error\n");
// 		return 1;
// 	}
// 	for (int i = 0; split_result[i] != NULL; i++)
// 	{
// 		printf("%s\n", split_result[i]);
// 	}
// 	return 0;
// }