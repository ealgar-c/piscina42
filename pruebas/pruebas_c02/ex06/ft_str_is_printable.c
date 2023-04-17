/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 18:04:11 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/09 18:07:10 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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

	n = ft_str_is_printable(str);
	printf("%u", n);
	return 0;
}
*/
