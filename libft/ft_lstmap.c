/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:03:06 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/19 18:27:45 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	current = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (current)
			{
				new = current->next;
				(*del)(current->content);
				free(current);
				current = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&current, new);
		lst = lst->next;
	}
	return (current);
}