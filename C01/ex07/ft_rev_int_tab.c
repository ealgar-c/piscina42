/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:48:59 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/07 12:24:51 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	saved;
	int	i;

	i = 0;
	size--;
	while (i < size)
	{
		saved = tab[i];
		tab[i] = tab[size];
		tab[size] = saved;
		i++;
		size--;
	}
}

/*
int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	size = 4;
	ft_rev_int_tab(tab, size);
	return 0;
}
*/
