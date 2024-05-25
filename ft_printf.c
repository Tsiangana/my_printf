/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:18:02 by pzau              #+#    #+#             */
/*   Updated: 2024/05/25 06:57:53 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_specifier(const char **format, va_list args)
{
	if (**format == 'c')
		write_c(va_arg(args, int));
	else if (**format == 's')
		write_s(va_arg(args, char *));
	else if (**format == 'p')
		write_p(va_arg(args, void *));
	else if (**format == 'd' || **format == 'i')
		write_d(va_arg(args, int));
	else if (**format == 'u')
		write_u(va_arg(args, unsigned int));
	else if (**format == 'x')
		write_x(va_arg(args, unsigned int));
	else if (**format == 'X')
		write_xx(va_arg(args, unsigned int));
	else if (**format == '%')
		write_percent();
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			handle_specifier(&format, args);
		}
		else
		{
			write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (i);
}
