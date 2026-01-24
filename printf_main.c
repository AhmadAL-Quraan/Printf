/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+
+#+           */
/*   Created: 2026/01/19 06:30:42 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/24 19:01:15 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check(int idx, const char *var, va_list arg, int *cnt)
{
	int	x;

	if (var[idx] == 'c')
	{
		x = va_arg(arg, int);
		ft_putchar(x, cnt);
	}
	else if (var[idx] == 's')
		ft_put_string(va_arg(arg, char *), cnt);
	else if (var[idx] == 'd' || var[idx] == 'i')
		ft_itoa(va_arg(arg, int), cnt);
	else if (var[idx] == 'p')
		(ft_pointer(va_arg(arg, void *), cnt));
	else if (var[idx] == 'u')
		(ft_utostr(va_arg(arg, unsigned int), cnt));
	else if (var[idx] == 'x')
		(ft_turn_hex_lower(va_arg(arg, unsigned int), cnt));
	else if (var[idx] == 'X')
		(ft_turn_hex_upper(va_arg(arg, unsigned int), cnt));
}

void	print_it(int *cnt, int *idx)
{
	ft_putchar('%', cnt);
	(*idx) += 1;
}

int	ft_printf(const char *var, ...)
{
	va_list	arg;
	char	*find;
	int		idx;
	int		cnt;

	cnt = 0;
	va_start(arg, var);
	find = "cspdiuxX";
	idx = 0;
	while (var[idx])
	{
		if (var[idx] == '%' && var[idx + 1] == '%')
			print_it(&cnt, &idx);
		else if (var[idx] == '%' && ft_strchr(find, var[idx + 1]))
		{
			check(idx + 1, var, arg, &cnt);
			idx += 1;
		}
		else
			ft_putchar(var[idx], &cnt);
		idx += 1;
	}
	return (cnt);
}
