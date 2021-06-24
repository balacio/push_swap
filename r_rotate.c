/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:41:25 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 11:02:02 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(t_liste *liste_a)
{
	t_element	*actuel;
	int			swap;

	if (liste_a == NULL)
		exit(EXIT_FAILURE);
	actuel = liste_a->premier;
	while (actuel->suivant != NULL)
		actuel = actuel->suivant;
	swap = actuel->nombre;
	insertion_top(liste_a, swap);
	suppression_bottom(liste_a);
	write(1, "rra\n", 4);
}

void	r_rotate_b(t_liste *liste_b)
{
	t_element	*actuel;
	int			swap;

	if (liste_b == NULL)
		exit(EXIT_FAILURE);
	actuel = liste_b->premier;
	while (actuel->suivant != NULL)
		actuel = actuel->suivant;
	swap = actuel->nombre;
	insertion_top(liste_b, swap);
	suppression_bottom(liste_b);
	write(1, "rrb\n", 4);
}

void	r_rotate_r(t_liste *liste_a, t_liste *liste_b)
{
	r_rotate_a(liste_a);
	r_rotate_b(liste_b);
	write(1, "rrr\n", 4);
}
