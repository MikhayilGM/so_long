/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhmart <mikhmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:51:14 by mikhmart          #+#    #+#             */
/*   Updated: 2024/02/13 17:44:30 by mikhmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	p = *lst;
	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while ((p)->next != NULL)
		p = (p)->next;
	(p)->next = new;
}

// int main()
// {
// 	t_list *a;
// 	t_list *b;
// 	// a = malloc (sizeof(t_list));
// 	b = malloc (sizeof(t_list));
// 	a  = NULL;
// 	b->content = (void *)"asad   adada  dadadad asa";
// 	b->next = NULL;
// 	ft_lstadd_back(&a, b);
// 	printf ("%s\n", (char *)(a->content));
// }