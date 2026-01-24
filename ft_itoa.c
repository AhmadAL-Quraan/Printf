/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 07:29:30 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/24 21:24:12 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int int_len(int n) {
  int size;

  size = 0;
  if (n <= 0) {
    size += 1;
  }
  while (n != 0) {
    size += 1;
    n /= 10;
  }
  return (size);
}

static void turn_to_string(long long new_num, int last, int *idx, char *ptr) {
  while (new_num != 0) {
    last = new_num % 10;
    ptr[(*idx)--] = last + '0';
    new_num /= 10;
  }
}

void contin(char *ptr, int *cnt) {
  ft_put_string(ptr, cnt);
  free(ptr);
}

void ft_itoa(int n, int *cnt) {
  long long new_num;
  int negative;
  int last;
  int idx;
  char *ptr;

  new_num = n;
  negative = 0;
  last = 0;
  idx = int_len(n);
  if (new_num < 0) {
    negative = 1;
    new_num *= -1;
  }
  ptr = malloc(idx + 1);
  if (!ptr)
    return;
  ptr[idx--] = '\0';
  if (new_num == 0)
    ptr[idx] = '0';
  turn_to_string(new_num, last, &idx, ptr);
  if (negative)
    ptr[idx] = '-';
  contin(ptr, cnt);
}
