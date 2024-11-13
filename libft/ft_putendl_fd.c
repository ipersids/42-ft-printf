/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:21:13 by ipersids          #+#    #+#             */
/*   Updated: 2024/11/13 15:32:06 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs a string to the specified file descriptor, 
 *        followed by a newline.
 * 
 * This function writes the string `s` to the given file descriptor `fd`, 
 * and then appends a newline character (`\n`).
 * 
 * @param s The string to output.
 * @param fd The file descriptor to which the string and newline are written.
 */
size_t	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	if (!s || fd < 0)
		return (0);
	len = ft_strlen(s);
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
	return (++len);
}
