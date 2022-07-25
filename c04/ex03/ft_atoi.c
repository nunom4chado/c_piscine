#include <unistd.h>

int ft_handle_signs(char *str)
{
  int   minus;

  minus = 0;
  while (*str)
  {
    if ((*str >= 9 && *str <= 13) || *str == ' ')
      str++;
    else if (*str == '-' || *str == '+')
    {
      if (*str == '-')
        minus++;
    }
    else
      break;
  }
  if (minus % 2 != 0)
    return (0);
  return (1);
}

int ft_atoi(char *str)
{
  int i;
  int minus;
  int printed_minus;

  i = 0;
  minus = 0;
  printed_minus = 0;
  while (str[i] != '\0')
  {
    if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
      i++;
    else if (str[i] == '-' || str[i] == '+') {
      if (str[i] == '-')
        minus++;
    }

    else if (str[i] >= '0' && str[i] <= '9')
    {
      if (!printed_minus)
      {
        if (minus % 2 != 0)
          ft_putchar('-');
        printed_minus = 1;
      } else {
        ft_putchar(str[i]);
      }
    }
  }
}