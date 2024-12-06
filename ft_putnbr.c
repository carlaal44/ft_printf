/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carfern2 <carfern2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:27:45 by carfern2          #+#    #+#             */
/*   Updated: 2024/12/04 18:27:45 by carfern2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

// Función auxiliar para contar los dígitos de un número
static int count_digits(unsigned int nbr) {
    int count = 1;  // Al menos 1 dígito
    while (nbr /= 10)
        count++;
    return count;
}

// Escribe los dígitos de un número
static void write_digits(unsigned int nbr, int fd) {
    if (nbr >= 10)  // Descomposición recursiva
        write_digits(nbr / 10, fd);
    char digit = (nbr % 10) + '0';
    write(fd, &digit, 1);
}

// Función principal para escribir un número en un descriptor de archivo
void ft_putnbr_fd(int nb, int fd) {
    unsigned int num;

    if (nb < 0) {
        num = -nb;  // Convierte a positivo
        write(fd, "-", 1);  // Escribe el signo negativo
    } else {
        num = nb;
    }

    if (num == 0) {
        write(fd, "0", 1);  // Maneja el caso especial de 0
    } else {
        write_digits(num, fd);  // Escribe los dígitos
    }
}
