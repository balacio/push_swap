/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 11:41:25 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/07 11:02:11 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_liste *liste_a)
{
	t_element	*actuel;
	int			swap;

	if (liste_a == NULL)
		exit(EXIT_FAILURE);
	swap = liste_a->premier->nombre;
	actuel = liste_a->premier;
	while (actuel->suivant != NULL)
		actuel = actuel->suivant;
	insertion_bottom(liste_a, actuel, swap);
	suppression_top(liste_a);
	write(1, "ra\n", 3);
}

void	rotate_b(t_liste *liste_b)
{
	t_element	*actuel;
	int			swap;

	if (liste_b == NULL)
		exit(EXIT_FAILURE);
	swap = liste_b->premier->nombre;
	actuel = liste_b->premier;
	while (actuel->suivant != NULL)
		actuel = actuel->suivant;
	insertion_bottom(liste_b, actuel, swap);
	suppression_top(liste_b);
	write(1, "rb\n", 3);
}

void	rotate_r(t_liste *liste_a, t_liste *liste_b)
{
	rotate_a(liste_a);
	rotate_b(liste_b);
	write(1, "rr\n", 3);
}
