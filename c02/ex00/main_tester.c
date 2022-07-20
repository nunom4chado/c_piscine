char  *ft_strcpy(char *dest, char *src);

#include <stdio.h>

int main(void)
{
  char a[] = "abcd";
  char b[] = "qwer";

  printf("source:\t\t%s\n", a);
  printf("dest:\t\t%s\n", b);

  ft_strcpy(b, a);
  printf("-> after ft_strcpy...\n");

  printf("source:\t\t%s\n", a);
  printf("dest:\t\t%s\n", b);

  int i;
  int error = 0;

  i = 0;
  while (a[i] != '\0')
  {
    if(b[i] != a[i])
      error = 1;
    i++;
  }

  if (error)
  {
    printf("result: FAILED!!\n");
  }
  else
  {
    printf("result: OK\n");
  }
  return (0);
}