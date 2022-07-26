int ft_fibonacci(int index)
{
  if (index < 0)
    return (-1);
  else if (index <= 1)
    return (index);
  return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include<stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
int main ()
{
  int n = 5;
  printf("%d", ft_fibonacci(n));
  return (0);
}
*/