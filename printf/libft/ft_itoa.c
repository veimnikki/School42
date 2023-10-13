/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:24:25 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/25 14:31:07 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	fill_res(int size, int i, int n, char *res)
{
	while (size > i)
	{
		res[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		size;
	char	*res;

	i = 0;
	size = get_size(n);
	res = (char *)malloc(sizeof(char) * size + 1);
	if (!res)
		return (0);
	if (n == -2147483648)
	{
		res[0] = '-';
		res[1] = '2';
		n = 147483648;
		i = 2;
	}
	if (n < 0)
	{
		res[0] = '-';
		i = 1;
		n = -n;
	}
	fill_res(size, i, n, res);
	res[size] = '\0';
	return (res);
}

// int main()
// {
// 	int n = -1265534543;
// 	int n = -53;
// 	printf("%s", ft_itoa(n));
// }