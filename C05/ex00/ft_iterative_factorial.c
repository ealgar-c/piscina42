/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:27:09 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/19 12:53:50 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	t;

	t = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 0)
	{
		t *= nb;
		nb--;
	}
	return (t);
}
/*
#include<stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(3));
	return (0);
}*/
