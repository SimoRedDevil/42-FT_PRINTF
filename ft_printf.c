/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-yous <mel-yous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:03:43 by mel-yous          #+#    #+#             */
/*   Updated: 2022/11/10 21:43:23 by mel-yous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <assert.h>
static int	ft_format_checker(char c, va_list args)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count += ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(c);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		j;
	va_list	args;

	i = 0;
	j = 0;
	if (write(1, "m", 0) == -1)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				break ;
			j += ft_format_checker(format[i], args);
		}
		else
			j += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (j);
}

/*int main(void)
{
	fclose(stdout);
	int x = ft_printf("%d\n", 5);
	dprintf(2, "%d", x);
}*/