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

int ft_punt_hexa(void *p)
{
    unsigned long long addr;
    char *base = "0123456789abcdef";

    addr = (unsigned long long)p;
    write(1, "0x", 2);
    return (write(1, &base[addr], 1));
}
