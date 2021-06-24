/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:28:10 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/04 14:51:24 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_liste *liste_a, t_liste *liste_b)
{
	int	tmp;

	tmp = liste_b->premier->nombre;
	insertion_top(liste_a, tmp);
	suppression_top(liste_b);
	write(1, "pa\n", 3);
}

void	push_b(t_liste *liste_a, t_liste *liste_b)
{
	int	tmp;

	tmp = liste_a->premier->nombre;
	insertion_top(liste_b, tmp);
	suppression_top(liste_a);
	write(1, "pb\n", 3);
}
