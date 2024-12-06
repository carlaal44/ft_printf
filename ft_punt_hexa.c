/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:15:08 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/06 13:15:08 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int  ft_hexa_ptr(uintptr_t nbr)
{
    int     count = 0;
    char    *base = "0123456789abcdef";

    if (nbr >= 16)
        count += ft_hexa_ptr(nbr / 16);
    count += ft_putchar(base[nbr % 16]);
    return (count);
}

int ft_punt_hexa(void *p)
{
    uintptr_t   addr;
    int         count = 0;

    addr = (uintptr_t)p;
    count += ft_putstr("0x");
    if (addr == 0)
        count += ft_putchar('0');
    else
        count += ft_hexa_ptr(addr);
    return (count);
}

