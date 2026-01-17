/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utilization.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 21:23:32 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/17 22:00:57 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	if (!s)
	{
		return (NULL);
	}
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c)
		{
			return ((char *)s);
		}
		s += 1;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return (NULL);
}

int	putString(char *str)
{
	int	idx;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	idx = 0;
	while (str[idx])
	{
		write(1, &str[idx], 1);
		idx += 1;
	}
	return (idx);
}
