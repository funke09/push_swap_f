/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad<megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 21:13:28 by zcherrad         #+#    #+#             */
/*   Updated: 2022/06/21 21:13:21 by zcherrad        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ss(t_stack *array, char *str)
{
	sa(array, "");
	sb(array, "");
	ft_putstr(str);
}

void	rr_b(t_stack *array)
{
	ra(array, "");
	rb(array, "");
}

void	rrr(t_stack *array)
{
	rra(array, "");
	rrb(array, "");
}
