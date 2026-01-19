/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 06:30:42 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/19 11:10:57 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int check(int idx, const char *var, va_list arg, size_t cnt) {
  int x;
  char *number;

  if (var[idx] == 'c') {
    x = va_arg(arg, int);
    ft_putchar(x, cnt);
  } else if (var[idx] == 's')
    return (ft_put_string(va_arg(arg, char *)));
  else if (var[idx] == 'd' || var[idx] == 'i') {
    number = ft_itoa(va_arg(arg, int));
    write(1, number, ft_strlen(number));
    return (ft_strlen(number));
  } else if (var[idx] == 'p')
    return (ft_pointer(va_arg(arg, void *)));
  else if (var[idx] == 'u')
    return (ft_utostr(va_arg(arg, unsigned int)));
  else if (var[idx] == 'x')
    return (ft_turn_hex_lower(va_arg(arg, unsigned int)));
  else if (var[idx] == 'X')
    return (ft_turn_hex_upper(va_arg(arg, unsigned int)));
  return (0);
}

int ft_printf(const char *var, ...) {
  va_list arg;
  char *find;
  int idx;
  size_t cnt = 0;

  va_start(arg, var);
  find = "cspdiuxX";
  idx = 0;
  while (var[idx]) {
    if (var[idx] == '%' && var[idx + 1] == '%') {
      ft_putchar('%', cnt);

    } else if (var[idx] == '%' && ft_strchr(find, var[idx + 1])) {
      cnt += check(idx + 1, var, arg, cnt);
      idx += 1;
    } else
      ft_putchar(var[idx], cnt);
    idx += 1;
  }
  return (cnt);
}
