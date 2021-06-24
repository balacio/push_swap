/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 08:37:42 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 10:53:51 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstiter(t_element *lst, void (*f)(void *))
{
	if (lst)
	{
		while (lst)
		{
			f(lst->nombre);
			lst = lst->suivant;
		}
	}
}
