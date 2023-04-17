/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:27:12 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/19 23:04:14 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;

	argc--;
	while (argc >= 1)
	{
		a = 0;
		while (argv[argc][a])
		{
			write(1, &argv[argc][a], 1);
			a++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
