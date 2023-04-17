/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:25:29 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/20 19:16:23 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 1)
		return (0);
	if (nb < 2)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 2)
		return (2);
	while (ft_is_prime(i) == 0)
		i++;
	return (i);
}
/*
int	main(void)
{
	printf("%i", ft_find_next_prime(83));
	return (0);
}
*/
