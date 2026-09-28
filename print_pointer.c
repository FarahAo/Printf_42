#include "ft_printf.h"

static int	convert_tohexa(unsigned long p)
{
	char	*arr;
	int		count;

	count = 0;
	arr = "0123456789ABCDEF";
	if (p == 0)
		return (count);
	count = convert_tohexa(p / 16);
	write(1, &arr[p % 16], 1);
	count++;
	return (count);
}

int	print_pointer(void *ptr)
{
	unsigned long	p;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	p = (unsigned long)ptr;
	write(1, "0x", 2);
	return (2 + convert_tohexa(p));
}
