/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pzau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 12:15:58 by pzau              #+#    #+#             */
/*   Updated: 2024/05/25 07:23:06 by pzau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	write_percent(void);
void	write_c(char word);
void	write_d(int n);
void	write_i(int n);
void	write_p(void *ptr);
void	write_s(const char *str);
void	write_u(unsigned int n);
void	write_x(unsigned int n);
void	write_xx(unsigned int n);

#endif
