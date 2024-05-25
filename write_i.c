/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_i.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 23:29:29 by pzau              #+#    #+#             */
/*   Updated: 2024/05/25 06:55:43 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_i(int n);

void	less(int num_digits, int *n)
{
	int		digit;
	int		i;
	char	digit_char;

	digit = *n;
	i = 0;
	while (i < num_digits - 1)
	{
		digit /= 10;
		i++;
	}
	digit_char = digit % 10 + '0';
	write(1, &digit_char, 1);
	num_digits--;
}

void	write_i(int n)
{
	int	is_negative;
	int	num_digits;
	int	temp;

	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	num_digits = 0;
	temp = n;
	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}
	if (is_negative)
		write(1, "-", 1);
	while (num_digits > 0)
	{
		less(num_digits, &n);
		num_digits--;
	}
}
