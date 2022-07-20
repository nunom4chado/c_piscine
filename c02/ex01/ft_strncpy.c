char *ft_strncpy(char *dest, char *src, unsigned int n)
{
  while (*src && n > 0)
  {
    *dest = *src;
    src++;
    dest++;
    n--;
  }
  return (dest);
}