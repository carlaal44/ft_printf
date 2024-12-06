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

#include "libft.h"
#include "ft_printf.h"

int ft_hexa_mayus(int num)
{
    char *base = "0123456789ABCDEF";
    if (num >= 16)
        return (ft_hexa_mayus(num / 16));
    ft_putchar(base[num % 16]);
    return (1);
}
