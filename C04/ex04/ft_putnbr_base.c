/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 11:21:38 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/21 18:58:17 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

bool	ft_repeated(char c, char *base, int pos)
{
	int	a;

	a = 0;
	while (base[a])
	{
		if ((c == base[a]) && a != pos)
			return (true);
		a++;
	}
	return (false);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

bool	check_base(char *base)
{
	int		a;
	bool	ret;

	a = 0;
	ret = true;
	if (strlen(base) < 2)
		return (false);
	while (base[a])
	{
		if (base[a] == '+')
			ret = false;
		if (base[a] == '-')
			ret = false;
		if (base[a] == ' ' || (base[a] >= 9 && base[a] <= 13))
			ret = false;
		if (ft_repeated(base[a], base, a))
			ret = false;
		a++;
	}
	return (ret);
}

void	ft_based_nbr(unsigned int n, char *base)
{
	unsigned int	size;

	size = ft_strlen(base);
	if (n > size - 1)
	{
		ft_based_nbr(n / size, base);
		n %= size;
	}
	write(1, &base[n], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "_", 1);
		ft_based_nbr(-nbr, base);
	}
	else
		ft_based_nbr(nbr, base);
}
/*
int main()
{
	int 	nbr = 42;
	char	*base = "0123456789abcdef";
	ft_putnbr_base(nbr, base);
	return (0);
}*/
