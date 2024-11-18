/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:02:56 by batuhankisk       #+#    #+#             */
/*   Updated: 2024/11/18 17:13:20 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_flags(const char *format_specifier, va_list ap, int *count)
{
	if (*format_specifier == 'c')
	{
		count += write(1, &(char *){va_arg(ap, int)}, 1);
	}
	else if (*format_specifier == 's')
	{
		ft_putstr(va_arg(ap, const char *), count);
	}
	else if (*format_specifier == 'p')
	{
		ft_putstr("0x", count);
		// devam edilecek
	}
	else if (*format_specifier == 'd' || *format_specifier == 'i')
	{
		ft_putnbr(va_arg(ap, int), count);
	}
	else if (*format_specifier == 'u')
	{
	}
	else if (*format_specifier == 'x' || *format_specifier == 'X')
	{
	}
}

int ft_printf(const char *format, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int count;

	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
				count += write(1, "%", 1);
			else
				ft_flags(&format[i + 1], ap, &count);
			i++;
		}
		else
		{
			count += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(ap);
	return (count);
}
