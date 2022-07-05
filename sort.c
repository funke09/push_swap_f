/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:11:09 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/05 03:34:21 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**get_args(int ac, char **av)
{
	char	**tab;
	char	*str;
	char	*arg;
	int		i;

	i = 1;
	str = (char *)malloc(1 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	if (check_args(av) == 0)
	{
		write (2, "Error\n", 6);
		exit (1);
	}
	while (i < ac)
	{
		arg = ft_strjoin(str, av[i++]);
		free (str);
		str = ft_strjoin(arg, " ");
		free(arg);
	}
	tab = ft_split(str, ' ');
	free (str);
	return (tab);
}

void	sort_2(t_stack *array)
{
	if (array->array_a[array->head_a] > array->array_a[array->head_a + 1])
		sa(array, "sa\n");
}

void	sort_3(t_stack *array)
{
	while (!is_sortd(array))
	{
		if (array->array_a[array->head_a] > array->array_a[array->last_a])
			ra(array, "ra\n");
		else if (array->array_a[array->head_a]
			> array->array_a[array->head_a + 1])
			sa(array, "sa\n");
		else
			ra(array, "ra\n");
	}
}

void	push_max_nd_min(t_stack *stack)
{
	int	max;
	int	min;
	int	i;

	i = 0;
	max = get_maximum_a(stack);
	min = get_minimum(stack);
	while (i < 2)
	{
		if (stack->array_a[stack->head_a] == max
			|| stack->array_a[stack->head_a] == min)
		{
			pb(stack, "pb\n");
			i++;
		}
		else
			ra(stack, "ra\n");
	}
}

void	sort_5(t_stack *stack)
{
	push_max_nd_min(stack);
	sort_3(stack);
	while (stack->head_b < stack->size)
	{
		if (stack->array_b[stack->head_b] > stack->array_a[stack->head_a])
		{
			pa(stack, "pa\n");
			ra(stack, "ra\n");
		}
		else
			pa(stack, "pa\n");
	}
}
