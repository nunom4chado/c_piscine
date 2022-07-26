int ft_iterative_power(int nb, int power)
{
    int i;
    int pow;
    
    i = 0;
    pow = 1;
    if (power < 0)
      return (0);
    if (nb == 0 && power == 0)
      return (1);
    while(i < power)
    {
      pow *= nb;
      i++;
    }
    return (pow);
}

#include <stdio.h>

int main(void)
{
    int x = 2;
    int n = 3;
 
    printf("%d power %d is %d", x, n, ft_iterative_power(x, n));
 
    return (0);
}