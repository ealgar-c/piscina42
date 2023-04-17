/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fp_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:35:02 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/06 12:50:12 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	x;

	x = 'z';
	while (x >= 'a')
	{
		write(1, &x, 1);
		x--;
	}
}

/*
int main(void)
{
	ft_print_reverse_alphabet();
	return(0);
}
*/
