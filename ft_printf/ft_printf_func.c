/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:57:10 by batuhankisk       #+#    #+#             */
/*   Updated: 2024/11/18 17:31:29 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr(const char *s, unsigned int *count)
{
	if (!s)
	{
		*count += write(1, "(nil)", 1);
		return;
	}
	while (*s)
		count += write(1, s++, 1);
}

void ft_putnbr(int n, unsigned int *count)
{
	char c;

	if (n == -2147483648)
	{
		*count += write(1, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		*count += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10, count);
	c = (n % 10) + '0';
	*count += write(1, &c, 1);
}

void ft_putunbr(unsigned int n, unsigned int *count)
{
	char c;
	
	if (n > 9)
		ft_putnbr(n / 10, count);
	c = (n % 10) + '0';
	*count += write(1, &c, 1);
}
