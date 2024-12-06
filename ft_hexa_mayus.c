/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_mayus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:14:59 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/06 13:14:59 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa_mayus(unsigned int num)
{
    int     count = 0;
    char    *base = "0123456789ABCDEF";

    if (num >= 16)
        count += ft_hexa_mayus(num / 16);
    count += ft_putchar(base[num % 16]);
    return (count);
}

