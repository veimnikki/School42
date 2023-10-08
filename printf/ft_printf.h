#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>

int ft_printf(const char *formats, ...);
int	ft_printstr(char *str);
int ft_print_ptr(unsigned long long ptr);
int ft_print_unsigned(unsigned int n);
int ft_print_hex(unsigned int n, const char *format);

#endif
