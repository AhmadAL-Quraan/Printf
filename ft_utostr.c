/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:40:06 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/19 10:45:33 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_utostr(int num)
{
	unsigned int	conv;

	conv = (unsigned int)num;
	return (ft_print_base(conv, "0123456789"));
}
