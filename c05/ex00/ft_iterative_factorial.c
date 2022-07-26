int ft_iterative_factorial(int nb)
{
  int i;
  int fact;

  i = 1;
  fact = 1;
  if (nb < 0)
    return (0);
  while (i <= nb)
  {
    fact *= i;
    i++;
  }
  return (fact);
}

/*
#include <stdio.h>

int main()
{
    int n = 7;
    printf("The Factorial of %d is %d", n, ft_iterative_factorial(n));
 
    return 0;
}
*/