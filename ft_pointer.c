/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:50:48 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/19 10:52:31 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *ptr)
{
	unsigned long	num;

	num = (unsigned long)ptr;
	if (num == 0)
		return (ft_put_string("(nil)"));
	ft_put_string("0x");
	return (ft_print_base(num, "0123456789abcdef"));
}
