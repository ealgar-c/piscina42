/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:15:24 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/05 17:22:30 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	b;
	int	a;

	if (x <= 0 && y <= 0)
		return ;
	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((b == 1 && a == 1) || (b == y && a == x && x > 1 && y > 1))
				ft_putchar('A');
			else if ((b == 1 && a == x) || (b == y && a == 1))
				ft_putchar('C');
			else if (b == 1 || a == 1 || b == y || a == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
