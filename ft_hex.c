/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:27:36 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/19 10:35:15 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_turn_hex_lower(unsigned int num)
{
	return (ft_print_base(num, "0123456789abcdef"));
}

int	ft_turn_hex_upper(unsigned int num)
{
	return (ft_print_base(num, "0123456789ABCDEF"));
}
