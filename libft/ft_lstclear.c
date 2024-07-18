/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:07:04 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/09 17:44:55 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while ((*lst)->next != NULL)
	{
		tmp = (*lst)->next;
		if ((*lst)->content)
			del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}
