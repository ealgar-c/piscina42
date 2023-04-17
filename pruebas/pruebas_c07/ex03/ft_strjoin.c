/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:21:45 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/21 18:00:56 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	len_result(int size, char **strs, int size_sep)
{
	int i;
	int length;

	i = -1;
	length = size_sep * -1;
	while (++i < size)
		length = size_sep + ft_strlen(strs[i]);
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	char *result;
	int length;

	if (size == 0)
	{
		result = (char*)malloc(1);
		return (result);
	}
	length = len_result(size, strs, ft_strlen(sep));
	i = -1;
	if ((result = malloc(sizeof(char) * (length + 1))) == NULL)
		return (0);
	while (++i < size)
	{
		result = ft_strcpy(result, strs[i]);
		if (i + 1 < size)
			result = ft_strcpy(result, sep);
	}
	*result = '\0';
	return (result - length);
}

#include <stdio.h>
int	main(void)
{
	char *str[6];
	str[0] = " ";
	str[1] = " ";
	str[2] = " ";
	str[3] = " ";
	str[4] = " ";
	str[5] = " ";

	printf("%s", ft_strjoin(6, str, "hola"));
	return (0);
}
