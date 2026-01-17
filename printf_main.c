#include "ft_printf.h"

int check(int idx, const char *var, va_list arg) {

  if (var[idx] == 'c') {
    write(1, va_arg(arg, int), 1);
    return (1);
  } else if (var[idx] == 's') {
    putString(va_arg(arg, char *));
  } else if (var[idx] == 'p') {
  }
}
int ft_printf(const char *var, ...) {
  va_list arg;
  char *find;
  int idx;
  int ptr;

  va_start(arg, var);
  find = "cspdiuxX%";
  idx = 0;
  ptr = 1;
  while (var[idx]) {
    if (var[idx] == '%') {
      if (ft_strchr(find, var[idx])) {
        check(idx, var, arg);
      }
    }
    idx += 1;
  }
}
