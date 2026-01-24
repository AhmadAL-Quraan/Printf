/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:50:48 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/24 20:46:54 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_pointer(void *ptr, int *cnt) {
  unsigned long num;

  num = (unsigned long)ptr;
  if (num == 0)
    return (ft_put_string("(nil)", cnt));
  ft_put_string("0x", cnt);
  return (ft_print_base(num, "0123456789abcdef", cnt));
}
