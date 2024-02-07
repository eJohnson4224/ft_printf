#include "ft_printf.h"
//#include "libft/libft.h"
#include <stdio.h>

int     main(int argc,char *argv[])
{
    unsigned int i;
    unsigned int *ptr_i;
    int ft_count;
    int count;

    i = 34857634;
    ptr_i = &i;
    /*count = printf("teste %% %d %s %p \n", 34, argv[1], ptr_i);
    ft_count = ft_printf("teste %% %d %s %p \n", 34, argv[1], ptr_i);
    count += printf("tesst %X %d %u\n", i, i, i);
    ft_count += ft_printf("tesst %X %d %u\n", i, i, i);
    */

    count = printf("test %s %c%c%c", "15", '0', '0', '1');
    printf("\n");
    ft_count = ft_printf("test %s %c%c%c", "15", '0', '0', '1');
    printf("\n");

    printf("count = %%%d\n", count);
    ft_printf("ft_count = %%%d\n", ft_count);

/*
    count = 0;
    count = printf("teste %% %d (null) %p \n", 22, &argv[3]);
    printf("count = %%%d", count);
*/

    return (0);
}
