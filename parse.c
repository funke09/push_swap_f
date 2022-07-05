/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 22:28:49 by zcherrad         #+#    #+#             */
/*   Updated: 2022/07/04 00:47:57 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_double(char **t)
{
	int	i;
	int	x;

	i = 0;
	while (t[i])
	{
		x = i + 1;
		while (t[x])
		{
			if (ft_atoi(t[i]) == ft_atoi(t[x]))
				return (0);
			x++;
		}
		i++;
	}
	return (1);
}

int	small_check(char **tab, int i)
{
	int	x;

	x = 0;
	while (tab[i][x])
	{
		if (tab[i][x] == '-' || tab[i][x] == '+')
			x++;
		if (!ft_isdigit(tab[i][x]) || !is_double(tab)
			|| ft_atoi(tab[i]) < INT_MIN
				||ft_atoi(tab[i]) > INT_MAX)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		while (ft_isdigit(tab[i][x]) == 1)
		{
			if (tab[i][x + 1] == '-' || tab[i][x + 1] == '+')
				return (0);
			x++;
		}
	}
	return (1);
}

int	check_array(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		small_check(tab, i);
		i++;
	}
	return (1);
}

static	size_t	count_espace(char *av)
{
	int		i;
	size_t	x;

	i = 0;
	x = 0;
	while (av[i])
	{
		if (av[i] == 32)
			x++;
		i++;
	}
	return (x);
}

int	check_args(char **tab)
{
	int	i;

	i = 1;
	while (tab[i])
	{
		if (ft_strlen(tab[i]) == count_espace(tab[i]))
			return (0);
		i++;
	}
	return (1);
}
