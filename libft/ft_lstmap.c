/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:42:16 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 10:57:00 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_element	*ft_lstmap(t_element *lst, void *(*f)(void *), void (*del)(void *))
{
	t_element	*new;
	t_element	*head;

	head = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->nombre));
		if (new == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		if (!head)
			head = new;
		lst = lst->suivant;
	}
	return (head);
}
