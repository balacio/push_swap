#include "push_swap.h"

int main()
{
	char str1[20];
	int i = 0;
	t_liste *liste_a;
	t_liste *liste_b;
	
	liste_a = initialisation();
	liste_b = initialisation();
	
	insertion_top(liste_a, 4);
	insertion_top(liste_a, 8);
	insertion_top(liste_a, 15);
	insertion_top(liste_a, 112);
	insertion_top(liste_a, 1);
	insertion_top(liste_a, 6);
	insertion_top(liste_a, 21);
	insertion_top(liste_a, 35);
	insertion_top(liste_a, 42);
	insertion_top(liste_a, 69);
	insertion_top(liste_a, 420);
	insertion_top(liste_a, 5);
	printf("PILE A: ");
	afficherListe(liste_a);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	swap_a(liste_a);
	printf("PILE A: ");
	afficherListe(liste_a);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	push_b(liste_a, liste_b);
	push_b(liste_a, liste_b);
	push_b(liste_a, liste_b);
	push_b(liste_a, liste_b);
	push_b(liste_a, liste_b);
	push_b(liste_a, liste_b);
	printf("PILE A: ");
	afficherListe(liste_a);
	printf("PILE B: ");
	afficherListe(liste_b);

	push_a(liste_a, liste_b);
	push_a(liste_a, liste_b);
	push_a(liste_a, liste_b);
	printf("PILE A: ");
	afficherListe(liste_a);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	rotate_a(liste_a);
	printf("PILE A: ");
	afficherListe(liste_a);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	rotate_b(liste_b);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	swap_s(liste_a, liste_b);
	printf("PILE A: ");
	afficherListe(liste_a);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);
	
	rotate_r(liste_a, liste_b);
	printf("PILE A: ");
	afficherListe(liste_a);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	r_rotate_a(liste_a);
	printf("PILE A: ");
	afficherListe(liste_a);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	r_rotate_a(liste_a);
	printf("PILE A: ");
	afficherListe(liste_a);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	r_rotate_b(liste_b);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	r_rotate_b(liste_b);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);

	r_rotate_r(liste_a, liste_b);
	printf("PILE A: ");
	afficherListe(liste_a);
	printf("PILE B: ");
	afficherListe(liste_b);
	i++;
	printf("%d=======================\n", i);
	printf("continue: \n");
	scanf("%s", str1);
	
	return 0;
}