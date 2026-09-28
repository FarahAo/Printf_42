#include "ft_printf.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	print_string(char *c)
{
	if (!c)
	{
		write(1, "(null)", 6);
		return (6);
	}
	write(1, c, ft_strlen(c));
	return (ft_strlen(c));
}
