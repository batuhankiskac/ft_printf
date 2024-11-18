/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:03 by batuhankisk       #+#    #+#             */
/*   Updated: 2024/11/18 20:53:41 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putptr(void *ptr, unsigned int *count);
void	ft_puthexp(unsigned long n, unsigned int *count);
void	ft_puthex(unsigned int hex, char format_specifier, unsigned int *count);
void	ft_putunbr(unsigned int n, unsigned int *count);
void	ft_putnbr(int n, unsigned int *count);
void	ft_putstr(const char *s, unsigned int *count);
int		ft_printf(const char *format, ...);

#endif
