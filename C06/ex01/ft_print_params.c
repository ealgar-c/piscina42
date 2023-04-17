/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:20:56 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/19 22:30:10 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int c, char **v)
{
	int	a;
	int	b;

	a = 1;
	while (a < c)
	{
		b = 0;
		while (v[a][b])
		{
			write(1, &v[a][b], 1);
			b++;
		}
		write(1, "\n", 1);
		a++;
	}
	return (0);
}