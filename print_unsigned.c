/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:29:54 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 11:37:12 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb < 10)
	{
		count += print_char(nb + '0');
	}
	if (nb >= 10)
	{
		count += print_unsigned(nb / 10);
		count += print_char((nb % 10) + '0');
	}
	return (count);
}
