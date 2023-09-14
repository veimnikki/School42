/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 17:19:46 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/08 17:27:45 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	j;

	i = 0;
	number = 0;
	while ((str[i] < 48 || str[i] > 57) && str[i] != '\0')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	j = 0;
	while (str[j] != '\0' && j < i)
	{
		if (str[j] == '-')
			number *= -1;
		j++;
	}
	return (number);
}

// int	main (void)
// {
// 	char str[] = "483489+-734dsksd32";
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }