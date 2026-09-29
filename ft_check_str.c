/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:45:45 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 13:29:45 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_str(const char str, va_list track)
{
	int	count;

	count = 0;
	if (str == 'c')
		count = print_char(va_arg(track, int));
	else if (str == 's')
		count = print_string(va_arg(track, char *));
	else if (str == 'p')
		count = print_pointer(va_arg(track, void *));
	else if (str == 'd' || str == 'i')
		count = print_integer(va_arg(track, int));
	else if (str == 'u')
		count = print_unsigned(va_arg(track, unsigned int));
	else if (str == 'x')
		count = print_lowerhexa(va_arg(track, unsigned int));
	else if (str == 'X')
		count = print_upperhexa(va_arg(track, unsigned int));
	else if (str == '%')
		count = print_char('%');
	return (count);
}
