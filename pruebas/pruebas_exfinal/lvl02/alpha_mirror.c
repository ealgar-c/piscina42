#include <unistd.h>

char	opp_char_mayus(char c)
{
	int	pos;

	pos = c - 64;
	pos -= 13;
	if (pos <= 0)
		return (-pos + 14 + 64);
	else
		return (14 - pos + 64);
}
	
char	opp_char_minus(char c)
{
	int	pos;

	pos = c - 96;
	pos -= 13;
	if (pos <= 0)
		return (-pos + 14 + 96);
	else
		return (14 - pos + 96);
}

int main(int argc, char **argv)
{
	char	*str;
	int		a;
	char	to_write;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	str = argv[1];
	a = -1;
	while (str[++a])
	{
		if (str[a] >= 65 && str[a] <= 90)
			to_write = opp_char_mayus(str[a]);
		else if (str[a] >= 97 && str[a] <= 122)
			to_write = opp_char_minus(str[a]);
		else
			to_write = str[a];
		write(1, &to_write, 1);
	}
	write(1, "\n", 1);
	return (0);
}
