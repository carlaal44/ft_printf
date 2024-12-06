/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:15:03 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/06 13:15:03 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_hexa_min(unsigned int num)
{
    int     count = 0;
    char    *base = "0123456789abcdef";

    if (num >= 16)
        count += ft_hexa_min(num / 16);
    count += ft_putchar(base[num % 16]);
    return (count);
}

