int ft_iterative_factorial(int nb)
{
  if (nb < 0)
    return (0);
  else if (nb == 0)
    return (1);
  else
    return (nb * ft_iterative_factorial(nb - 1));
}

/*
#include <stdio.h>

int main()
{
    int n = 5;
    printf("The Factorial of %d is %d", n, ft_iterative_factorial(n));
 
    return 0;
}
*/