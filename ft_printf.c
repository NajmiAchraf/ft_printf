/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:53:11 by anajmi            #+#    #+#             */
/*   Updated: 2021/11/28 16:43:06 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	process(char id, char *str)
{
	size_t	index;

	index = 0;
	if (id == 'c')
		index += ft_putchar((char)str);
	else if (id == 's')
		index += ft_putstr(str);
	else if (id == 'p')
		index += ft_putstr("0x") + ft_putnbr_pnt(id, (unsigned long long)str);
	else if (id == 'd' || id == 'i')
		index += ft_putnbr((int)str);
	else if (id == 'u')
		index += ft_putnbr_usi((unsigned int)str);
	else if (id == 'x' || id == 'X')
		index += ft_putnbr_hex(id, (unsigned int)str);
	return (index);
}

int	ft_printf(const char *var, ...)
{
	va_list	ap;
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	va_start(ap, var);
	while (var[i])
	{
		if (var[i] == '%' && var[i + 1] != '%')
		{
			j += process(var[i + 1], (char *)va_arg(ap, const char *)) - 2;
			i++;
		}
		else if (var[i] == '%' && var[i + 1] == '%')
		{
			j += ft_putchar('%') - 2;
			i++;
		}
		else
			ft_putchar(var[i]);
		i++;
	}
	va_end(ap);
	return (i + j);
}
