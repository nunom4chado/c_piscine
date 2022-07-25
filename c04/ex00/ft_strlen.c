int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }

  return (i);
}
/*
#include <stdio.h>

int main(void)
{
  char a[] = "hello";
  char b[] = "";

  printf("a length: %d\n", ft_strlen(a));
  printf("b length: %d\n", ft_strlen(b));
  return (0);
}
*/