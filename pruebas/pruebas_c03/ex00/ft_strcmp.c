/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:19:02 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/15 12:23:45 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s2[a] && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s1[] = "Hola";
	char	s2[] = "Holi";
	int		c = ft_strcmp(s1, s2);

	if (c == 0)
		printf("Los strings son iguales");
	else if (c > 0)
		printf("el string s1 es mayor que s2");
	else
		printf("El string s1 es menor que s2");
	return (0);
}*/
