/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 02:37:47 by zcherrad          #+#    #+#             */
/*   Updated: 2022/07/04 02:38:09 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

long	ft_atoi(const char *str)
{
	int		x;
	int		signe;
	long	rst;

	x = 0;
	signe = 1;
	rst = 0;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			signe *= -1;
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		rst = rst * 10 + (str[x++] - 48);
	}
	return (rst * signe);
}
