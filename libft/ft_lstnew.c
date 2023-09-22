/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:47:05 by voliinyk          #+#    #+#             */
/*   Updated: 2023/09/19 18:28:57 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	if (!(elt = (t_list*)malloc(sizeof(*elt))))
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}

// int main()
// {
// 	int data = 42;
// 	t_list *new_node = ft_lstnew(&data);
// 	if (new_node) {
// 		printf("Node content: %d\n", *(int *)(new_node->content));
// 		free(new_node);
// 	}
// 	return 0;
// }
