#include "ft_printf.h"
#include "libft.h"

int ft_printchar(int c)
{
    write (1, &c, 1);
    return (1);
}

int ft_formats(va_list args, const char format)
{
    int len;

    len = 0;
    if (format == 'c')
		len += ft_printchar(va_arg(args, int));
	else if (format == 's')
		len += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		len += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		len += ft_printpercent();
    return (len);
}

int ft_printf(const char *formats, ...)
{
    va_list args; // объявление переменной типа va_list, которая используется для работы с 
// переменными аргументами функции.
    int     len;
    int     i;

    len = 0;
    va_start(args, formats);
    while (formats[i])
    {
        if (formats[i] != '%')
        {
            len += ft_formats(args, formats[i + 1]);
            i++;
        }
        else
            len += ft_printchar(formats[i]);
        i++;
    }
    va_end(args);
    return (len); // Функция возвращает целое число, представляющее общее количество символов, 
// записанных в стандартный вывод.
}
