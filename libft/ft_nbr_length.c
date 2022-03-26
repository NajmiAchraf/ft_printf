/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:25:05 by anajmi            #+#    #+#             */
/*   Updated: 2021/11/28 16:23:19 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_hex_length(unsigned int value)
{
	size_t	l;

	l = 1;
	while (value > 0xf)
	{
		l++;
		value /= 16;
	}
	return (l);
}

size_t	ft_pnt_length(unsigned long long value)
{
	size_t	l;

	l = 1;
	while (value > 0xf)
	{
		l++;
		value /= 16;
	}
	return (l);
}

size_t	ft_usi_length(unsigned long value)
{
	size_t	l;

	l = 1;
	while (value > 9)
	{
		l++;
		value /= 10;
	}
	return (l);
}

size_t	ft_int_length(long value)
{
	size_t	l;

	l = 1;
	if (value < 0)
	{
		value *= (-1);
		l += 1;
	}
	while (value > 9)
	{
		l++;
		value /= 10;
	}
	return (l);
}
