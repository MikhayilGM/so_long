/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 17:45:50 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/13 17:49:16 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lstmap(t_list *other, t_list **head,
					void *(*f)(void *), void (*del)(void *))
{
	if (!other)
		return ;
	*head = ft_lstnew(f(other->content));
	lstmap(other->next, &((*head)->next), f, del);
}

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void(*del)(void *))
{
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	lstmap(lst, &head, f, del);
	return (head);
}
