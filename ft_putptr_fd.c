/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:35:41 by ipersids          #+#    #+#             */
/*   Updated: 2024/11/13 18:52:45 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putptr_fd(unsigned int n, int fd)
{
	size_t	len;

	if (fd < 0)
		return (0);
	len = 0;
	len += write(fd, "0x", 2);
	len += ft_puthex_fd(n, fd, 0);
	return (len);
}
