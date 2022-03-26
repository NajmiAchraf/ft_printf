/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:58:11 by anajmi            #+#    #+#             */
/*   Updated: 2021/11/28 16:23:30 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *s);
size_t	ft_putendl(char *s);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_usi(unsigned int nbr);
size_t	ft_putnbr_pnt(char bs, unsigned long long nbr);
size_t	ft_putnbr_hex(char bs, unsigned int nbr);
size_t	ft_strlen(const char *s);

size_t	ft_hex_length(unsigned int value);
size_t	ft_pnt_length(unsigned long long value);
size_t	ft_usi_length(unsigned long value);
size_t	ft_int_length(long value);

#endif
