/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:33:31 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/05 19:02:10 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*tmp;

	tmp = (t_list *) malloc (sizeof(t_list));
	if (!tmp)
		return (NULL);
	tmp->next = NULL;
	tmp->content = content;
	return (tmp);
}
