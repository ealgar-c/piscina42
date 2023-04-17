/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:56:29 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/09 17:59:33 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
