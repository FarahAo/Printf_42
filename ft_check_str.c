/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:45:45 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 16:58:20 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checklowhexa(va_list track)
{
	int				count;
	unsigned int	a;

	a = va_arg(track, unsigned int);
	if (a == 0)
		count = print_char('0');
	else
		count = print_lowerhexa(a);
	return (count);
}

static	int	checkupperhexa(va_list track)
{
	int				count;
	unsigned int	a;

	a = va_arg(track, unsigned int);
	if (a == 0)
		count = print_char('0');
	else
		count = print_upperhexa(a);
	return (count);
}

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
		count = checklowhexa(track);
	else if (str == 'X')
		count = checkupperhexa(track);
	else if (str == '%')
		count = print_char('%');
	return (count);
}
