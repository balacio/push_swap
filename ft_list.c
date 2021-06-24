/* ************************************************************************** */
/*										*/
/*							:::	  ::::::::   */
/*   ft_list.c						:+:	  :+:	:+:   */
/*							+:+ +:+		 +:+	 */
/*   By: joagosti <joagosti@student.42.fr>		  +#+  +:+	   +#+		*/
/*						+#+#+#+#+#+   +#+		   */
/*   Created: 2021/06/03 11:26:46 by joagosti		  #+#	#+#			 */
/*   Updated: 2021/06/04 10:15:22 by joagosti	        ###   ########.fr	   */
/*									      */
/* ************************************************************************** */

#include "push_swap.h"

t_liste	*initialisation(t_liste *pile)
{
	t_liste		*liste;
	t_element	*element;

	liste = (t_liste *)malloc(sizeof (t_liste));
	element = (t_element *)malloc(sizeof (t_element));
	if ((!liste) || (!element))
		exit(EXIT_FAILURE);
	liste->premier = NULL;
	return (liste);
}

void	insertion_top(t_liste *liste, int nvNombre)
{
	t_element	*nouveau;

	nouveau = (t_element *)malloc(sizeof (t_element));
	if (!nouveau)
		exit(EXIT_FAILURE);
	nouveau->nombre = nvNombre;
	nouveau->suivant = liste->premier;
	liste->premier = nouveau;
}

void	insertion_bottom(t_liste *liste, t_element *actuel, int nvNombre)
{
	t_element	*nouveau;

	nouveau = (t_element *)malloc(sizeof (t_element));
	if (!nouveau)
		exit(EXIT_FAILURE);
	nouveau->nombre = nvNombre;
	nouveau->suivant = NULL;
	actuel->suivant = nouveau;
}

void	suppression_top(t_liste *liste)
{
	t_element	*a_supprimer;

	if (liste == NULL)
		exit(EXIT_FAILURE);
	if (liste->premier != NULL)
	{
		a_supprimer = liste->premier;
		liste->premier = liste->premier->suivant;
		free(a_supprimer);
	}
}

void	suppression_bottom(t_liste *liste)
{
	t_element	*a_supprimer;
	t_element	*courant;

	if (liste == NULL)
		exit(EXIT_FAILURE);
	if (liste->premier != NULL)
	{
		courant = liste->premier;
		while (courant->suivant->suivant != NULL)
			courant = courant->suivant;
		a_supprimer = courant->suivant;
		courant->suivant = NULL;
		free(a_supprimer);
	}
}
