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
    int len;

    if (!s)
        return (write(1, "(null)", 6));
    len = 0;
    while (s[len])
    {
        if (write(1, &s[len], 1) != 1)
            return (-1);
        len++;
    }
    return (len);
}
