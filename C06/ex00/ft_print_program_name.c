/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:59:32 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/19 22:20:08 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	argc = 0;
	a = 0;
	while (argv[0][a])
	{
		write(1, &argv[0][a], 1);
		a++;
	}
	write(1, "\n", 1);
	return (0);
}
