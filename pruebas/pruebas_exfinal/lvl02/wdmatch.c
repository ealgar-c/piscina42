#include <unistd.h>

int ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

void ft_putstr(char *str)
{
	int	a;

	a = -1;
	while(str[++a])
		write(1, &str[a], 1);
}
int	main(int argc, char *argv[])
{
	int a;
	int b;
	int tot;

	if (argc != 3)
	{
		write (1, "\n", 1);
		return (0);
	}
	a = 0;
	b = 0;
	tot = ft_strlen(argv[2]);
	while (argv[1][a])
	{
		while ((argv[2][b] != argv[1][a]) && (b != tot))
			b++;
		if (b == tot)
			break ;
		a++;	
	}
	if (b != tot)
		ft_putstr(argv[1]);
	write (1, "\n", 1);
	return (0);
}
