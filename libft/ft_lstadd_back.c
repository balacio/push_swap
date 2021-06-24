/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 08:47:31 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 10:55:42 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_element **alst, t_element *new)
{
	t_element	*the_last;

	if (!alst)
		return ;
	else if (*alst)
	{
		the_last = ft_lstlast(*alst);
		the_last->suivant = new;
	}
	else
		*alst = new;
}
