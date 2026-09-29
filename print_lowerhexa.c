/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lowerhexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 11:57:24 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 16:18:20 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_lowerhexa(unsigned int a)
{
	char	*arr;
	int		count;

	count = 0;
	arr = "0123456789abcdef";
	if (a == 0)
		return (0);
	count = print_lowerhexa(a / 16);
	write(1, &arr[a % 16], 1);
	count++;
	return (count);
}
