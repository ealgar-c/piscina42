/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:50:27 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/09 17:53:05 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "1232332432323864sdf8685";
	int	n;

	n = ft_str_is_numeric(str);
	printf("%u", n);
	return 0;
}
*/
