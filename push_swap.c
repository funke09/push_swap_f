/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:36:56 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/05 03:34:04 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *array)
{
	free(array->array_s);
	free(array->array_a);
	free(array->array_b);
	free(array);
}

static void	norm(t_stack *array, int count)
{
	if (count <= 1)
		return ;
	else if (count == 2)
		sort_2(array);
	else if (count == 3)
		sort_3(array);
	else if (count <= 5)
		sort_5(array);
	else if (count <= 100)
		sort_100_nd_500(array, 3);
	else
		sort_100_nd_500(array, 5);
}

int	main(int ac, char **av)
{
	char		**tab;
	t_stack		*array;
	int			count;
	int			i;
	int			j;

	i = 0;
	array = (t_stack *) malloc(sizeof(*array));
	tab = parse_to_stack(ac, av, &i);
	count = i;
	array->size = i;
	init_stacks(i, array);
	j = -1;
	while (++j < i)
		push(array, ft_atoi(tab[j]), j);
	if (is_sortd(array) == 1)
		return (0);
	norm(array, count);
	ft_free(array);
}
