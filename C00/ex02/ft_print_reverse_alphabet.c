/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:49:16 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/06 17:57:13 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	caracter;

	caracter = 'z';
	while (caracter >= 'a')
	{
		write(1, &caracter, 1);
		caracter--;
	}
}

/*
int main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}
*/
