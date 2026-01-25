#include "ft_printf.h"

void ft_utostr(int num, int *cnt) {
  unsigned int conv;

  conv = (unsigned int)num;
  ft_print_base(conv, "0123456789", cnt);
}
