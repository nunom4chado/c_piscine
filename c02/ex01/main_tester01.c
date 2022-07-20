char *ft_strncpy(char *dest, char *src, unsigned int n);
void  ft_check(char *dest, char *src, unsigned int limit);

#include <stdio.h>

int main(void)
{
  char src[] = "abcd";

  unsigned int limit1 = 0;
  unsigned int limit2 = 2;
  unsigned int limit3 = 6;
  
  char dest1[limit1];
  char dest2[limit2];
  char dest3[limit3];

  printf("1) check limit 0:\n");
  ft_check(dest1, src, limit1);

  printf("2) check limit under max size:\n");
  ft_check(dest2, src, limit2);

  printf("3) check limit over max size:\n");
  ft_check(dest3, src, limit3);

  return (0);
}

void  ft_check(char *dest, char *src, unsigned int limit)
{

  printf("source:\t\t%s\n", src);
  printf("dest:\t\t%s\n", dest);

  ft_strncpy(dest, src, limit);
  printf("-> after ft_strncpy...\n");

  printf("source:\t\t%s\n", src);
  printf("dest:\t\t%s\n", dest);

  int error = 0;

  while (*dest)
  {
    if(*dest != *src)
    {
      error = 1;
    }
    src++;
    dest++;
  }

  if (error)
  {
    printf("result: FAILED!!\n");
  }
  else
  {
    printf("result: OK\n");
  }
  printf("\n");
}