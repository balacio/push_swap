/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argument.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagosti <joagosti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 17:06:54 by joagosti          #+#    #+#             */
/*   Updated: 2021/06/08 17:45:58 by joagosti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_argumt	make_argument(int argc, char **argv)
{
	char 			*argument;
	t_argumt		arg_split;
	int				i;
	
	arg_split.nb = 0;
	i = 0;
	argument = NULL;
	while (++i < argc)
	{
		if (!argument)
			argument = ft_strdup(argv[i]);
		else
			argument = ft_strjoin(argument, argv[i]);
	}
	arg_split.arg = ft_split(argument, ' ');
	i = 0;
	while (arg_split.arg[i] != NULL)
		i++;
	arg_split.nb = i;
	if (arg_split.nb < 2)
		{
			write(2, "Error\n", 6);
			exit(2);
		}
	return (arg_split);
}

int valid_arg(int argc, char **argv)
{
	t_argumt	argument;
	int		*tab;
	int		i;
	int 		j;

	if (argc == 1)
	{
		write(2, "Error\n", 6);
		exit(2);
	}
	tab = malloc((argc - 1) * sizeof(int));
	if (!tab)
		exit;
	i = -1;
	argument = make_argument(argc, argv);
	while (++i < argument.nb)
		tab[i] = ft_atoi_2(argument.arg[i]);
	i = -1;
	while (++i < argument.nb - 1)
	{
		j = i;
		while (++j < argument.nb)
		{
			if (tab[i] == tab[j])
			{
				// error_print;
				write(2, "Error\n", 6);
				exit(2);
			}
		}
	}
	return(tab);
}

int	ft_atoi_2(const char *str)
{
	long int	res;
	int			neg;

	res = 0;
	neg = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\f'
			|| *str == '\n' || *str == '\r' || *str == '\v'))
		++str;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && '0' <= *str && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if (res > INT_MAX || res < INT_MIN)
		{
			// error_print();
			write(2, "Error\n", 6);
			exit(2);
		}
		++str;
	}
	if ((*str && !('0' <= *str && *str <= '9')))
	{
		// error_print();
		write(2, "Error\n", 6);
		exit(2);
	}
	res = res * neg;
	return (res);
}

int error_print(void)
{
	write(2, "Error\n", 6);
	exit(2);
	return(0);
}
