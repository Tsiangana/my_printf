/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 02:01:35 by pzau              #+#    #+#             */
/*   Updated: 2024/05/25 07:01:02 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	less_x(unsigned int n)
{
	const char	*hex_digits;
	char		digit_char;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		less_x(n / 16);
	digit_char = hex_digits[n % 16];
	write(1, &digit_char, 1);
}

void	write_x(unsigned int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	less_x(n);
}
