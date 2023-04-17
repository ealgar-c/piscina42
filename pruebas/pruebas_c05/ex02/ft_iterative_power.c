/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:58:18 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/19 13:06:47 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	t;

	t = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		t *= nb;
		power--;
	}
	return (t);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%i", ft_iterative_power(5, 2));
	return (0);
}
*/
