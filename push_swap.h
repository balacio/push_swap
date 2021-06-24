/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 12:10:10 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/08 17:17:36 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_argumt
{
	char	**arg;
	int	*tab;
	int	nb;
}		t_argumt;

typedef struct 			s_element
{
	int			nombre;
	struct s_element	*suivant;
}				t_element;

typedef struct 		s_liste
{
	t_element	*premier;
}			t_liste;

int	error_print(void);
int	ft_atoi_2(const char *str);
int	*arg_isvalid(int argc, char **argv);
t_liste	*initialisation(t_liste *pile);
void	insertion_top(t_liste *liste, int nvNombre);
void	insertion_bottom(t_liste *liste, t_element *actuel, int nvNombre);
void	suppression_top(t_liste *liste);
void	suppression_bottom(t_liste *liste);
int		list_size(t_liste *liste);
int		*ft_sort_int_tab(int *tab, int argc);
int		ft_median(int argc);
void	push_a(t_liste *liste_a, t_liste *liste_b);
void	push_b(t_liste *liste_a, t_liste *liste_b);
void	r_rotate_a(t_liste *liste_a);
void	r_rotate_b(t_liste *liste_b);
void	r_rotate_r(t_liste *liste_a, t_liste *liste_b);
void	rotate_a(t_liste *liste_a);
void	rotate_b(t_liste *liste_b);
void	rotate_r(t_liste *liste_a, t_liste *liste_b);
void	swap_a(t_liste *liste);
void	swap_b(t_liste *liste);
void	swap_s(t_liste *liste_a, t_liste *liste_b);

int		ft_word_count(char *str, char c);
char	*ft_add_word(char **str, char c);
char	**ft_split(char const *s, char c);

void	afficherListe(t_liste *liste);
void	ft_lstdelone(t_element *lst, void (*del)(void *));
void	ft_lstadd_back(t_element **alst, t_element *new);
void	ft_lstadd_front(t_element **alst, t_element *new);
void	ft_lstclear(t_element **lst, void (*del)(void*));
void	ft_lstiter(t_element *lst, void (*f)(void *));
t_element	*ft_lstlast(t_element *lst);
t_element	*ft_lstmap(t_element *lst, void *(*f)(void *), void (*del)(void *));
t_element	*ft_lstnew(void *content);
int	ft_lstsize(t_element *lst);
size_t		ft_strlen(const char *s);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strdup(const char *s);
t_argumt	make_argument(int argc, char **argv);
int 		valid_arg(int argc, char **argv);

#endif
