/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 01:28:41 by pzau              #+#    #+#             */
/*   Updated: 2024/05/25 06:59:17 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	less_u(unsigned int n)
{
	char	digit_char;

	if (n >= 10)
		less_u(n / 10);
	digit_char = n % 10 + '0';
	write(1, &digit_char, 1);
}

void	write_u(unsigned int n)
{
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	less_u(n);
}
