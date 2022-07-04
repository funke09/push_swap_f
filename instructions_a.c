/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 22:12:28 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/04 22:12:31 by zcherrad         ###   ########.fr       */
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
