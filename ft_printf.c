/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:04:21 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/04 18:04:21 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int  handle_format(char specifier, va_list args);

static int  process_percent(char specifier, va_list args) {
    int chars_written = 0;

    if (specifier != '%') {
        chars_written = handle_format(specifier, args);
        if (chars_written == -1) return (-1);
        return (chars_written);
    } else {
        if (write(1, &specifier, 1) != 1) return (-1);
        return (1);
    }
}

static int  process_string(const char *format, va_list args, int total_chars) {
    int i = 0;

    while (format[i]) {
        if (format[i] == '%') {
            total_chars += process_percent(format[i + 1], args);
            if (total_chars == -1) return (-1);
            i++;
        } else {
            if (write(1, &format[i], 1) != 1) return (-1);
            total_chars++;
        }
        i++;
    }
    return (total_chars);
}

int ft_printf(const char *format, ...) {
    va_list args;
    int total_chars = 0;

    va_start(args, format);
    total_chars = process_string(format, args, total_chars);
    va_end(args);
    return (total_chars);
}

static int  handle_format(char specifier, va_list args) {
    if (specifier == 'c') return (ft_putchar(va_arg(args, int)));
    if (specifier == 's') return (ft_putstr(va_arg(args, char *)));
    if (specifier == 'p') return (ft_punt_hexa(va_arg(args, void *)));
    if (specifier == 'd' || specifier == 'i') return (ft_putnbr(va_arg(args, int)));
    if (specifier == 'u') return (ft_num_nosign(va_arg(args, unsigned int)));
    if (specifier == 'x') return (ft_hexa_min(va_arg(args, int)));
    if (specifier == 'X') return (ft_hexa_mayus(va_arg(args, int)));
    return (0);
}
