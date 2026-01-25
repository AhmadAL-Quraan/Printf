#include "ft_printf.h"

size_t ft_strlen(const char *str) {
  size_t len;

  len = 0;
  while (*str) {
    str += 1;
    len += 1;
  }
  return (len);
}

char *ft_strchr(const char *s, int c) {
  if (!s) {
    return (NULL);
  }
  while (*s) {
    if ((unsigned char)*s == (unsigned char)c) {
      return ((char *)s);
    }
    s += 1;
  }
  if (*s == c) {
    return ((char *)s);
  }
  return (NULL);
}

void ft_put_string(char *str, int *cnt) {
  int idx;

  if (!str) {
    write(1, "(null)", 6);
    (*cnt) += 6;
    return;
  }
  idx = 0;
  while (str[idx]) {
    ft_putchar(str[idx], cnt);
    idx += 1;
  }
}

void ft_putchar(char c, int *cnt) {
  (*cnt) += 1;
  write(1, &c, 1);
}
