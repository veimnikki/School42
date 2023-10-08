#include "ft_printf.h"
#include "libft.h"

int	ft_uitoa_len(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
	    len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
// Эта функция принимает беззнаковое целое число и преобразует его в строку. Сначала она вызывает 
// ft_uitoa_len, чтобы узнать, сколько цифр в числе. Затем она выделяет память для строки и 
// заполняет ее цифрами, начиная с последней цифры числа и переходя к первой.
{
	int		len;
	char	*str;

	len = ft_itoa_len(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	str[len] = '\0';
	while (n != 0)
	{
		str[len - 1] = n % 10 + 48;
		n = n / 10;
		len--;
	}
	return (str);
}

int ft_print_unsigned(unsigned int n) //  Эта функция принимает беззнаковое целое число и выводит 
// его на стандартный вывод (в данном случае, на консоль). Если число равно нулю, она выводит 
// одну цифру "0". В противном случае она вызывает ft_uitoa для преобразования числа в строку, 
// затем вызывает ft_printstr для вывода этой строки, и освобождает выделенную память.
{
    int     print_len;
    char    *num;

    print_len = 0;
    if (n == 0)
    {
        print_len += write(1, "0", 1);
    }
    else
    {
        num = uitoa(n);
        print_len += ft_printstr(num);
        free(num);
    }
    return (print_len);
}