/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:45:00 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/27 21:50:58 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		test(int start, ...);
void	ft_putchar(char c, int *cnt);
void	ft_utostr(int num, int *cnt);
void	ft_print_base(unsigned long num, char *base, int *cnt);
void	ft_pointer(void *ptr, int *cnt);
void	ft_turn_hex_lower(unsigned int num, int *cnt);
void	ft_turn_hex_upper(unsigned int num, int *cnt);
void	ft_itoa(int n, int *cnt);
size_t	ft_strlen(const char *str);
int		ft_atoi(const char *nptr);
void	ft_put_string(char *str, int *cnt);
char	*ft_strchr(const char *s, int c);
int		ft_printf(const char *var, ...);
int		test(int start, ...);
#endif
