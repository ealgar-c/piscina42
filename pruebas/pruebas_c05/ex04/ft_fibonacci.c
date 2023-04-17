/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:16:24 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/19 14:32:26 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>
int main(void)
{
	printf("%i", ft_fibonacci(7));
	return (0);
}
*/
