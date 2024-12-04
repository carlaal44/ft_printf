/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:05:40 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/04 18:05:40 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int ft_putchar(int c);
int ft_putnbr(int n);
int ft_putstr(char *s);
int ft_printf(const char *format, ...);
unsigned int ft_num_nosign(unsigned int num);
int ft_punt_hexa(void *p);
int ft_strlen(char *s);
int ft_hexa_min(int num);
int ft_hexa_mayus(int num);

#endif
