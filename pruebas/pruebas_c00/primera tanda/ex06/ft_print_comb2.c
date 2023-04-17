/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:59:58 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/05 16:57:04 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribe(char c, int digito)
{
	char	x;

	if (digito == 0)
		x = c / 10 + '0';
	else
		x = c % 10 + '0';
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			escribe(a, 0),
			escribe(a, 1),
			write(1, " ", 1);
			escribe(b, 0);
			escribe(b, 1);
			if (!(a == 98 && b == 99))
				write (1, ", ", 1);
			b++;
		}
		a++;
	}
}
