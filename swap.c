/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:14:18 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/04 10:36:04 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_liste *liste)
{
	int	swap;
	int	swing;

	swap = liste->premier->nombre;
	swing = liste->premier->suivant->nombre;
	liste->premier->nombre = swing;
	liste->premier->suivant->nombre = swap;
	write(1, "sa\n", 3);
}

void	swap_b(t_liste *liste)
{
	int	swap;
	int	swing;

	swap = liste->premier->nombre;
	swing = liste->premier->suivant->nombre;
	liste->premier->nombre = swing;
	liste->premier->suivant->nombre = swap;
	write(1, "sb\n", 3);
}

void	swap_s(t_liste *liste_a, t_liste *liste_b)
{
	swap_a(liste_a);
	swap_b(liste_b);
	write(1, "ss\n", 3);
}
