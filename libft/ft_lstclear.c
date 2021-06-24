/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:17:28 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 10:55:18 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstclear(t_element **lst, void (*del)(void*))
{
	t_element	*ptr;
	t_element	*tmp;

	if (lst)
	{
		ptr = *lst;
		while (ptr)
		{
			tmp = ptr->suivant;
			ft_lstdelone(ptr, del);
			ptr = tmp;
		}
		*lst = NULL;
	}
}
