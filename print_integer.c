/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 10:51:00 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 11:20:02 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_integer(int a)
{
	long	nb;
	int		count;

	nb = a;
	count = 0;
	if (nb < 0)
	{
		count += print_char('-');
		nb = -nb;
	}
	if (nb < 10)
	{
		count += print_char(nb + '0');
	}
	if (nb >= 10)
	{
		count += print_integer(nb / 10);
		count += print_char((nb % 10) + '0');
	}
	return (count);
}
