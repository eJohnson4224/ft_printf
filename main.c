#include "ft_printf.h"
//#include "libft/libft.h"
#include <stdio.h>

int     main(int argc,char *argv[])
{
    int i;
    int count;

    i = 2333;
    count = printf("teste %% %d %s %p \n", 34, argv[1], i);
    ft_printf("teste %% %d %s %p \n", 34, argv[1], i);
    printf("count = %%%d\n", count);

/*
    count = 0;
    count = printf("teste %% %d (null) %p \n", 22, &argv[3]);
    printf("count = %%%d", count);
*/

    return (0);
}