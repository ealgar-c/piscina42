/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:53:19 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/21 00:08:18 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	a;

	if (min >= max)
		return (-1);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	if (arr == NULL)
		return (-1);
	else
	{
		a = -1;
		while (++a < (max - min))
			arr[a] = (min + a);
		*range = arr;
		return (a);
	}
}

int	main(void)
{
	int min, max, a, result;
	int	*range;

	min = 5; max = 14;
	result = ft_ultimate_range(&range, min, max);
	if (result == -1)
	{
		printf("algo ha pasao");
		return (0);
	}
		printf("has metido %i numeros\n", result);
		a = -1;
		while (++a < (max - min))
			printf("%i\n", range[a]);

return (0);
}
