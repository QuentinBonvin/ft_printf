/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 14:04:37 by qbonvin           #+#    #+#             */
/*   Updated: 2021/12/06 16:54:50 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_formator(va_list args, const char format, int count);
int		ft_putstr(char *str);
int     ft_putnbr(int nb);
int		ft_putnbr_hexa_min(unsigned long int nb);
int		ft_putnbr_hexa_maj(unsigned int nb);
int		ft_len_number(unsigned long int n);
int     ft_putnbr_unsigned(unsigned int nb);
char    *ft_uitoa(unsigned int nb);

#endif