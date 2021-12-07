/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbonvin <qbonvin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 16:13:43 by qbonvin           #+#    #+#             */
/*   Updated: 2021/12/06 16:55:04 by qbonvin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_number(unsigned long int n)
{
	int		len;

	len = 0;
	if (n == 0)
	{
		len = 1;
	}
	while (n > 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}
