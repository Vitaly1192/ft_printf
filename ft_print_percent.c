/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 21:27:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/05 18:04:52 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/*
**	Про флаг 0.
**	В явной форме об этом не написано, как и не описанно поведение функции в таком случае,
**	 поэтому будем считать это неопределённым поведением.
**	В моём случае я просто игнорирую флаг 0
*/
int	ft_print_percent(t_unit *unit)
{
	int		k;

	k = unit->width - 1;
	if (unit->flag == '-')
	{
		ft_putchar('%');
		while (k-- > 0)
			ft_putchar(' ');
	}
	else
	{
		while (k-- > 0)
			ft_putchar(' ');
		ft_putchar('%');
	}
	return (ft_max(unit->width, 1));
}