/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:39:18 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/04 02:39:20 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	x;

	x = 0;
	if (dstsize > 0)
	{
		while (src[x] && --dstsize)
		{
			dst[x] = src[x];
			x++;
		}
		dst[x] = '\0';
	}
	while (src[x])
	{
		x++;
	}
	return (x);
}
