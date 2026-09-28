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

	
	return (count);
}

