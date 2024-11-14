/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:02:08 by ipersids          #+#    #+#             */
/*   Updated: 2024/11/14 12:52:05 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>				// va_list, va_start, and va_end.
# include "libft.h"

# define SPECIFIERS "cspdiuxX%"

int		ft_printf(const char *format, ...);

size_t	ft_putunbr_fd(unsigned int n, int fd);
size_t	ft_puthex_fd(unsigned int n, int fd, short int is_uppercase);
size_t	ft_putptr_fd(unsigned long long n, int fd);

#endif
