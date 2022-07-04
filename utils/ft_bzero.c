/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad<megrisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 03:39:27 by zcherrad         #+#    #+#             */
/*   Updated: 2022/06/18 03:44:01 by zcherrad        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_bzero(void *s, int n)
{
	unsigned char	*ptr;
	int				x;

	ptr = (unsigned char *) s;
	x = 0;
	while (n > 0)
	{
		ptr[x] = 0;
		x++;
		n--;
	}
}
