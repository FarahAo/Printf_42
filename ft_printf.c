/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:25:05 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/27 15:19:06 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{	
	va_list args;
	va_start(args, format);

	size_t	count = 0;

	while(*format && *format != '%')
	{
		write(1, format, 1);
		format++;
		count++;
	}
	if (*format == '%')
		format++;
	if (*format == 'c')
	{
		int c = va_arg(args, int);
		char ch = c;
		write(1, &ch, 1);
		count++;
	}
	return (count);
	
}
int main()
{
	ft_printf("test character %c", 'A', 'B');

}
