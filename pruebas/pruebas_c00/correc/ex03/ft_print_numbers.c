/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:38:37 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/06 12:56:22 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	x;

	x = 0;
	while (x <= 9)
	{	
		write(1, &x, 1);
		x++;
	}	
}

/*
int main(void){
	ft_print_numbers();
	return 0;
}*/