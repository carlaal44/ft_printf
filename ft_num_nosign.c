/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_nosign.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:15:05 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/06 13:15:05 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

unsigned int ft_num_nosign(unsigned int num)
{
    if (num >= 10)
        return (ft_num_nosign(num / 10));
    ft_putchar(num % 10 + '0');
    return (1);
}
