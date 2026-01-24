/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 09:40:06 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/24 20:44:36 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_utostr(int num, int *cnt)
{
	unsigned int	conv;

	conv = (unsigned int)num;
	ft_print_base(conv, "0123456789", cnt);
}
