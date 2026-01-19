/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqoraan <aqoraan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:45:00 by aqoraan           #+#    #+#             */
/*   Updated: 2026/01/19 11:10:39 by aqoraan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putchar(char c, size_t cnt);
int ft_utostr(int num);
int ft_print_base(unsigned long num, char *base);
int ft_pointer(void *ptr);
int ft_turn_hex_lower(unsigned int num);
int ft_turn_hex_upper(unsigned int num);
char *ft_itoa(int n);
size_t ft_strlen(const char *str);
int ft_atoi(const char *nptr);
int ft_put_string(char *str);
char *ft_strchr(const char *s, int c);
int ft_printf(const char *var, ...);
#endif
