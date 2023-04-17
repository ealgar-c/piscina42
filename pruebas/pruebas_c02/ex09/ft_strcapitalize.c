/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:19:47 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/11 19:29:33 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		sig;
	char	c;

	i = 0;
	sig = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (sig == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (sig == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			sig = 1;
		else
			sig = 0;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/
