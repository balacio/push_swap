#include "push_swap.h"

void	afficherListe(t_liste *liste)
{
	t_element	*actuel;
	int			i;

	i = 0;
	if (liste == NULL)
		exit(EXIT_FAILURE);
	actuel = liste->premier;
	while (actuel != NULL)
	{
		printf("%d -> ", actuel->nombre);
		actuel = actuel->suivant;
		i++;
	}
	printf("NULL\n");
}
