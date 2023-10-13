/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:33:15 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/19 16:39:01 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	int data = 42;
// 	t_list *new_node = ft_lstnew(&data);
// 	if (new_node)
// 	{
// 		printf("Size of the list: %d\n", ft_lstsize(new_node));
// 		free(new_node);
// 	}
// 	return 0;
// }