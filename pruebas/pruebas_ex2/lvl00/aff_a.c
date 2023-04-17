#include <unistd.h>

int	main(int argc, char **argv)
{
	int		a;

	a = 0;
	if (argc != 2)
		write(1, "a", 1);
	else
	{
		while (argv[1][a])
		{
			if (argv[1][a] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			a++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
