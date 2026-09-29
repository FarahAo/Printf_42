/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabo-ome <fabo-ome@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 13:15:10 by fabo-ome          #+#    #+#             */
/*   Updated: 2026/09/29 13:30:25 by fabo-ome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *str, ...);
int	ft_check_str(const char str, va_list track);
int	print_char(char c);
int	print_string(char *c);
int	print_pointer(void *ptr);
int	print_integer(int a);
int	print_unsigned(unsigned int nb);
int	print_lowerhexa(unsigned int a);
int	print_upperhexa(unsigned int a);

#endif
