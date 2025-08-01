#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    char c = 'A';
    char *str = "Hello, world!";
    int dec = -12345;
    int zero = 0;
    unsigned int u = 4294967295U; // max unsigned int (32-bit)
    unsigned int x = 305441741;   // 0x1234ABCD
    void *ptr = str;
    //long long_num = LONG_MIN;

    //Orijinal printf ile karşılaştırma
    printf("Original printf outputs:\n");
    printf("Char: %c\n", c);
    printf("String: %s\n", str);
    printf("Decimal: %d\n", dec);
    printf("Integer: %i\n", dec);
    printf("Unsigned: %u\n", u);
    printf("Hex (lower): %x\n", x);
    printf("Hex (upper): %X\n", x);
    printf("Pointer: %p\n", ptr);
    printf("Percent: %%\n");
    printf("Zero decimal: %d\n", zero);
    //printf("Long min (as decimal): %ld\n\n", long_num);

    // ft_printf ile test
    printf("ft_printf outputs:\n");
    ft_printf("Char: %c\n", c);
    ft_printf("String: %s\n", str);
    ft_printf("Decimal: %d\n", dec);
    ft_printf("Integer: %i\n", dec);
    ft_printf("Unsigned: %u\n", u);
    ft_printf("Hex (lower): %x\n", x);
    ft_printf("Hex (upper): %X\n", x);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Percent: %%\n");
    ft_printf("Zero decimal: %d\n", zero);
    //ft_printf("Long min (as decimal): %ld\n", long_num);

    return 0;
}