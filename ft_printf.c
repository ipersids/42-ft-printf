/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipersids <ipersids@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 23:33:28 by ipersids          #+#    #+#             */
/*   Updated: 2024/11/13 01:03:13 by ipersids         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * @brief Print formatted data to stdout.
 * 
 * Writes the C string pointed by format to the standard output. If format 
 * includes format specifiers (subsequences beginning with %), the additional
 * arguments following format are formatted and inserted in the resulting
 * string replacing their respective specifiers.
 * 
 * Format specifiers:
 * %c Prints a single character.
 * %s Prints a string (as defined by the common C convention).
 * %p The void * pointer argument has to be printed in hexadecimal format.
 * %d Prints a decimal (base 10) number.
 * %i Prints an integer in base 10.
 * %u Prints an unsigned decimal (base 10) number.
 * %x Prints a number in hexadecimal (base 16) lowercase format.
 * %X Prints a number in hexadecimal (base 16) uppercase format.
 * %% Prints a percent sign
 * 
 * @param format C string that contains the text to be written.
 * 				 It can optionally contain embedded format specifiers
 * 				 that are replaced by the values specified in subsequent
 * 				 additional arguments and formatted as requested.
 * @param ... subsequent additional arguments.
 * @return int On success, the total number of characters written is returned.
 * 			   If an error occur, a negative number is returned.
 */
int	ft_printf(const char *format, ...)
{
	va_list args;
	int		len;

	len = 0;
	va_start(args, format);
	while (*format != '\0')
	{
		// %[flags][width][.precision][length]specifier
		// 1. Search for %
		// 2. Check flags #, (space) and +
		// 3. Check width ???
		// 4. Check specifier
		// 5. Print content or return -1 if error
	}
	return (len);
}
