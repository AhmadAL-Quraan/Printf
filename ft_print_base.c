/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+
+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 07:32:27 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/19 09:50:38 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *Turn into hexadecimal
 binary -> integer -> hexa
 * */

#include "ft_printf.h"

static int int_len(unsigned long num, char *base) {
  int cnt;
  int len;

  len = ft_strlen(base);
  cnt = 0;
  while (num > 0) {
    cnt += 1;
    num /= len;
  }
  return (cnt);
}

static void swap(int len, char *str) {
  int idx;
  char temp;

  idx = 0;
  while (idx != len / 2) {
    temp = str[idx];
    str[idx] = str[len - idx - 1];
    str[len - idx - 1] = temp;
    idx += 1;
  }
}

void ft_print_base(unsigned long num, char *base, int *cnt) {
  int len;
  char *str;
  int idx;
  int base_len;

  base_len = ft_strlen(base);
  len = int_len(num, base);
  str = malloc(len);
  if (!str)
    return;

  idx = 0;
  while (num > 0) {
    str[idx] = base[num % base_len];
    num /= base_len;
    idx += 1;
  }
  swap(len, str);
  ft_put_string(str, cnt);
  free(str);
}
