/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:19:32 by raalonso          #+#    #+#             */
/*   Updated: 2023/03/28 18:23:20 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*aux;

	head = ft_lstnew(f(lst->content));
	aux = lst->next;
	while (aux != 0)
	{
		new = ft_lstnew(f(aux->content));
		if (!new)
		{
			ft_lstclear(&aux, del);
			return (0);
		}
		ft_lstadd_back(&head, new);
		aux = aux->next;
	}
	ft_lstclear(&lst, del);
	return (head);
}
