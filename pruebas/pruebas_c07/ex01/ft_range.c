/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:19:13 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/20 23:48:56 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	a;

	a = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(*arr) * (max - min));
	if (arr == NULL)
		return (NULL);
	else
	{
		while (a < (max - min))
		{
			arr[a] = (min + a);
			a++;
		}
		return (arr);
	}
}

int	main(void)
{
	int a, min, max;
	int	*tab;

	min = 5; max = 14;
	tab = ft_range(min, max);
	if (tab == NULL)
	{
		printf("ta vacio pringao");
		return (0);
	}
	a = -1;
	while (++a < (max - min))
		printf("%i\n", tab[a]);

return (0);
}
