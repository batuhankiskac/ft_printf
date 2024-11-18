/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batuhankiskac <batuhankiskac@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:03:03 by batuhankisk       #+#    #+#             */
/*   Updated: 2024/11/18 17:14:26 by batuhankisk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF.H
#define FT_PRINTF.H


#include <unistd.h>
#include <stdarg.h>

void ft_putnbr(int n,int count);
void ft_putstr(const char *s, int *count);
int	ft_printf(const char *, ...);


#endif
