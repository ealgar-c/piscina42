#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number()
{
	int	i;

	i = -1;
	while (++i <= 9)
		ft_putchar(i + '0');
	write(1, "\n", 1);
}
