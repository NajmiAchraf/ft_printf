/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 14:58:06 by anajmi            #+#    #+#             */
/*   Updated: 2021/11/28 16:23:30 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_pnt(char bs, unsigned long long nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (bs == 'X')
		base = "0123456789ABCDEF";
	if (nbr > 15)
		ft_putnbr_pnt(bs, nbr / 16);
	ft_putchar(base[nbr % 16]);
	return (ft_pnt_length(nbr));
}

size_t	ft_putnbr_hex(char bs, unsigned int nbr)
{
	char	*base;

	base = "0123456789abcdef";
	if (bs == 'X')
		base = "0123456789ABCDEF";
	if (nbr > 15)
		ft_putnbr_hex(bs, nbr / 16);
	ft_putchar(base[nbr % 16]);
	return (ft_hex_length(nbr));
}
