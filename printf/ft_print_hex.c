#include "ft_printf.h"
#include "libft.h"

int ft_hex_len(unsigned int n)
{
    int hex_len;
    
    hex_len = 0;
    while(n != 0)
    {
        hex_len++;
        n /= 16;
    }
    return (hex_len);
}

void ft_put_hex(unsigned int n, const char *format)
{
    if (n >= 16)
    {
        ft_put_hex(n / 16, format);
        ft_put_hex(n % 16, format);
    }
    else
    {
        if (n <= 9)
            ft_putchar_fd(n + '0', 1);
        else
        {
            if (format == 'x')
                ft_putchar_fd((nbr - 10 + 'a'), 1);
            if (format == 'X')
                ft_putchar_fd((nbr - 10 + 'A'), 1);
        }
    }
}

int ft_print_hex(unsigned int n, const char *format)
{
    if (n == 0)
        return (write(1, "0", 1));
    else
        ft_put_hex(n, format);
    return (ft_hex_len(n));
}