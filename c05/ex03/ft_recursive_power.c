int ft_recursive_power(int nb, int power)
{
  if (nb == 0 && power == 0)
      return (1);
  else if (power != 0)
    return (nb * ft_recursive_power(nb, power - 1));
  return (1);
}

/*
#include <stdio.h>

int main(void)
{
    int x = 2;
    int n = 3;
 
    printf("pow(%d, %d) = %d", x, n, ft_recursive_power(x, n));
 
    return 0;
}
*/