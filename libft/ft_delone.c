/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delone.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 07:54:06 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 10:55:17 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstdelone(t_element *lst, void (*del)(void *))
{
	if (lst)
	{
		del(lst->nombre);
		free(lst);
		lst = NULL;
	}
}
