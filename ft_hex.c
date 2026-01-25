#include "ft_printf.h"

void ft_turn_hex_lower(unsigned int num, int *cnt) {
  ft_print_base(num, "0123456789abcdef", cnt);
}

void ft_turn_hex_upper(unsigned int num, int *cnt) {
  ft_print_base(num, "0123456789ABCDEF", cnt);
}
