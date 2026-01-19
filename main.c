#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>

void fun_test(char *var, ...) {
  va_list grp;

  va_start(grp, var);
  printf("%s", var);
  for (int i = 0; i < 4; ++i) {
    printf("%s", va_arg(grp, char *));
  }
  va_end(grp);
}
int main(void) {
  // char *ptr;
  //
  // ptr = "a";
  //  printf("%b%d", 3);
  // ft_printf("%p\nX", NULL);
  // printf("%u\n", -1);
  printf("%d", printf("%s%s\n", "ahmad", "df"));
  // ft_printf("%c\n", 's');
  // ft_printf("%%x\n", -1);
  //   printf("%d", NULL);
  //   ft_printf("%u\n", -2000000000);
  //  printf("%p", NULL);
}
