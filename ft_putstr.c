/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:13:34 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/06 13:13:34 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *s)
{
    int len = 0;
    int count = 0;

    if (!s)
        return (ft_putstr("(null)"));
    while (s[len])
    {
        count += ft_putchar(s[len]);
        len++;
    }
    return (count);
}