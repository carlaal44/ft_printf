/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:04:21 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/07 13:18:41 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(char specifier, va_list args)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == 'p')
		count += ft_punt_hexa(va_arg(args, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		count += ft_num_nosign(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count += ft_hexa_min(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count += ft_hexa_mayus(va_arg(args, unsigned int));
	else if (specifier == '%')
		count += ft_putchar('%');
	else
		count += ft_putchar(specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			total_chars;
	int			i;
	int			result;

	va_start(args, format);
	total_chars = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			result = process_specifier(format, &i, args);
			if (result == -1)
				return (-1);
			total_chars += result;
		}
		else
		{
			result = process_text(format, &i);
			if (result == -1)
				return (-1);
			total_chars += result;
		}
	}
	va_end(args);
	return (total_chars);
}
