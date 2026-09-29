/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_upperhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:06:37 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 16:18:39 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_upperhexa(unsigned int a)
{
	char	*arr;
	int		count;

	count = 0;
	arr = "0123456789ABCDEF";
	if (a == 0)
		return (0);
	count = print_upperhexa(a / 16);
	write(1, &arr[a % 16], 1);
	count++;
	return (count);
}
