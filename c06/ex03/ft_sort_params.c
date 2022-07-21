// NOT WORKING

#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void  ft_putstr(char *str)
{
  while (*str)
  {
    ft_putchar(*str);
    str++;
  }
}

void  ft_swapptr(char **a, char **b)
{
  char *t;

  t = *a;
  *a = *b;
  *b = t;
}

void  ft_sort_str(char **str, int limit)
{
  int i;

  i = 1;
  while (i <= limit)
  {
    if(i <= limit && str[i][0] > str[i + 1][0])
    {
      ft_swapptr((str + 1 - 1), (str + i + 1 - 1));
      i = 1;
    }
    i++;
  }
}

int main(int argc, char **argv)
{
  int i;

  i = 1;
  if (argc > 1)
  {
    ft_sort_str(argv, argc);
    while (i <= argc)
    {
      ft_putstr(argv[i]);
      ft_putchar('\n');
      i++;
    }
  }
  return (0);
}