#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_revprint(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
	{
		ft_putchar(str[i]);
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		ft_revprint(argv[1]);
	return (0);
}
