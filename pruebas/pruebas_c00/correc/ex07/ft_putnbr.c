/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 17:05:30 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/06 12:56:52 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		x;
	char	valor;

	if (x == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		x = -147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		x = -nb;
	}
	else
		x = nb;
	if (x > 9)
	{
		ft_putnbr(x / 10);
		x %= 10;
	}
	valor = x + '0';
	write (1, &valor, 1);
}

/*
int	main(void)
{
	ft_putnbr(0);
	return (0);
}
*/