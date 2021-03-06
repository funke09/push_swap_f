/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:37:11 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/04 02:37:18 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack, char *str)
{
	int	tmp;

	if (stack->last_a == 0 || !str)
		return ;
	tmp = stack->array_a[stack->head_a];
	stack->array_a[stack->head_a] = stack->array_a[stack->head_a + 1];
	stack->array_a[stack->head_a + 1] = tmp;
	ft_putstr(str);
}

void	pa(t_stack *stack, char *str)
{
	int	i;

	stack->last_a++;
	i = stack->last_a;
	while (i > 0)
	{
		stack->array_a[i] = stack->array_a[i - 1];
		i--;
	}
	stack->array_a[stack->head_a] = stack->array_b[stack->head_b];
	stack->head_b++;
	stack->size_a++;
	stack->size_b--;
	ft_putstr(str);
}

void	ra(t_stack *stack, char *str)
{
	int	tmp;
	int	i;

	i = stack->head_a;
	tmp = stack->array_a[stack->head_a];
	while (i < stack->size_a - 1)
	{
		stack->array_a[i] = stack->array_a[i + 1];
		i++;
	}
	stack->array_a[stack->last_a] = tmp;
	ft_putstr(str);
}

void	rra(t_stack *stack, char *str)
{
	int	tmp;
	int	i;

	tmp = stack->array_a[stack->last_a];
	i = stack->last_a;
	while (i > 0)
	{
		stack->array_a[i] = stack->array_a[i - 1];
		i--;
	}
	stack->array_a[stack->head_a] = tmp;
	ft_putstr(str);
}
