/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:38:15 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/04 02:38:17 by zcherrad         ###   ########.fr       */
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
