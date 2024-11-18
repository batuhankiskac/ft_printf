/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:57:10 by batuhankisk       #+#    #+#             */
/*   Updated: 2024/11/18 17:14:17 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putstr(const char *s, int *count)
{
	if (!s)
	{
		*count += write(1, "(nil)", 1);
		return ;
	}
	while (*s)
		count += write(1, s++, 1);
}

void ft_putnbr(int n,int count)
{
	
}
