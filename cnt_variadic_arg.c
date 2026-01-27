/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 21:40:50 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/27 21:41:14 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Read data
int	test(int start, ...)
{
	va_list	list;
	int		cnt;

	if (start)
	{
	}
	va_start(list, start);
	cnt = 1;
	while (va_arg(list, char *))
	{
		cnt += 1;
	}
	return (cnt);
}
