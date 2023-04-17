/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:48:03 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/13 12:53:30 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char dest[50] = "matadme ya ";
	char src[] = "por favor";

	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
