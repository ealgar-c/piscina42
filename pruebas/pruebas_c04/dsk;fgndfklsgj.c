void	ft_based_nbr(unsigned int n, char *base)
{
	unsigned int	size;

	size = ft_strlen(base);
	if (n > size - 1)
	{
                                            unsigned int	size;

                                    size = ft_strlen(base);
                                    if (n > size - 1)
                                    {
                                                                    unsigned int	size;

                                                                    size = ft_strlen(base);
                                                                    if (n > size - 1)
                                                                    {
                                                                    ft_based_nbr(n / size, base);
                                                                    n %= size;
                                                                    }
                                                                    write(1, &base[n], 1);
                                        n %= size;
                                    }
                                    write(1, &base[n], 1);
	10