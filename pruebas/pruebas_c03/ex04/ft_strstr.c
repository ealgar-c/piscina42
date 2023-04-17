/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:58:19 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/18 11:57:19 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		if (str[a] == to_find[b])
		{
			while (str[a + b] == to_find[b])
			{
				b++;
				if (to_find[b] == '\0')
					return (&str[a]);
			}
		}
		a++;
	}
	return (0);
}

#include <stdio.h>
int	main(void)
{
	char	str[50] = "hola caracola";
	char	to_find[5] = "cola";
	char 	*x;

	x = ft_strstr(str, to_find);
	printf("%s", x);
	return (0);
}

