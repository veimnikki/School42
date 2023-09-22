/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:59:24 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/19 17:37:24 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		(*del)(lst->content);
		free (lst);
	}
}

// void del_content(void *content)
// {
// 	free(content);
// }
// int main()
// {
// 	int data = 42;
// 	t_list *node = ft_lstnew(&data);
// 	ft_lstdelone(node, del_content);
// 	return 0;
// }
