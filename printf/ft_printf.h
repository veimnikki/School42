/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: voliinyk <voliinyk@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:21:00 by voliinyk          #+#    #+#             */
/*   Updated: 2023/10/13 14:44:27 by voliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "./libft/libft.h"
# include "stdio.h"

int	ft_printf(const char *formats, ...);
int	ft_printstr(char *str);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int n, const char format);
int	ft_printnbr(int n);
int	ft_printpercent(void);
int	ft_formats(va_list args, const char format);

#endif