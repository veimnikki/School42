/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:48:30 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/25 14:34:56 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words_count(const char *s, char c)
{
	int	i;
	int	word_num;

	i = 0;
	word_num = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			word_num++;
		i++;
	}
	return (word_num);
}

static int	split_words(char **result, const char *s, char c, int word)
{
	int	start_i;
	int	end_i;

	start_i = 0;
	end_i = 0;
	while (s[end_i])
	{
		if (s[end_i] == c || s[end_i] == 0)
			start_i = end_i + 1;
		if (s[end_i] != c && (s[end_i + 1] == c || s[end_i + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (end_i - start_i + 2));
			if (!result[word])
			{
				while (word++)
					free(result[word]);
				return (0);
			}
			ft_strlcpy(result[word], (s + start_i), end_i - start_i + 2);
			word++;
		}
		end_i++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
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