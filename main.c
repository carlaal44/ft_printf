#include "ft_printf.h"
#include <stdio.h> // Para comparar con printf

int main(void)
{
    int     num = 42;
    char    *str = "Hello, world!";
    char    ch = 'A';
    void    *ptr = &num;

    // Pruebas básicas
    ft_printf("Texto plano\n");
    ft_printf("Caracter: %c\n", ch);
    ft_printf("Cadena: %s\n", str);
    ft_printf("Entero: %d\n", num);
    ft_printf("Unsigned: %u\n", (unsigned int)num);
    ft_printf("Hexadecimal minúsculas: %x\n", num);
    ft_printf("Hexadecimal mayúsculas: %X\n", num);
    ft_printf("Puntero: %p\n", ptr);

    // Comparación con printf
    printf("Texto plano\n");
    printf("Caracter: %c\n", ch);
    printf("Cadena: %s\n", str);
    printf("Entero: %d\n", num);
    printf("Unsigned: %u\n", (unsigned int)num);
    printf("Hexadecimal minúsculas: %x\n", num);
    printf("Hexadecimal mayúsculas: %X\n", num);
    printf("Puntero: %p\n", ptr);

    return 0;
}
