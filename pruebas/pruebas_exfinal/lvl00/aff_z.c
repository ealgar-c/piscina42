#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	a = -1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][++a])
	{
		if (argv[1][a] == 'z')
			write(1, &argv[1][a], 1);
	}
	write (1, "\n", 1);
	return (0);
}
