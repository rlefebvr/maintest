#include <stdio.h>

void ft_ft(int *nbr);

int     main()
{
    int a = 19;
    int *nbr;

    a = 19;
    nbr = &a;
    ft_ft(nbr);
    printf("%d", a);

}