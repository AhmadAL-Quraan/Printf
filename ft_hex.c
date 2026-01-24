/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:27:36 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/24 20:45:57 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_turn_hex_lower(unsigned int num, int *cnt) {
  ft_print_base(num, "0123456789abcdef", cnt);
}

void ft_turn_hex_upper(unsigned int num, int *cnt) {
  ft_print_base(num, "0123456789ABCDEF", cnt);
}
