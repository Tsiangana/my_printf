/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_p.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:56:42 by pzau              #+#    #+#             */
/*   Updated: 2024/05/25 07:20:36 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	priting(char str)
{
	write(1, &str, 1);
}

void	write_p(void *ptr)
{
	unsigned long	n;
	const char		*hex_digits;

	n = (unsigned long)ptr;
	hex_digits = "0123456789abcdef";
	if (n >= 16)
		write_p((void *)(n / 16));
	priting(hex_digits[n % 16]);
}

void	print_pointer(void *str)
{
	unsigned long	addr;

	addr = (unsigned long)str;
	write(1, "0x", 2);
	if (addr == 0)
		write(1, "0", 1);
	else
		write_p(str);
}
