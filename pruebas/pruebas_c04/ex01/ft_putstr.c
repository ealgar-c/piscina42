/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:09:33 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/07 13:22:32 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	counter;

	counter = 0;
	while (str [counter] != '\0')
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

/*
 int main(void){
 	char *str = "Hola";
	ft_putstr(str);
 	return 0;
 }
*/
