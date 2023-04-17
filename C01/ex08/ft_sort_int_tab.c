/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:47:38 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/07 13:31:19 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	saved;
	int	count;

	count = 0;
	size--;
	while (count < size)
	{
		if (tab[count] > tab[count + 1])
		{
			saved = tab[count];
			tab[count] = tab[count + 1];
			count = 0;
		}
		else
			count++;
	}
}	

/*
int	main(void){
	int tab[4] = {3, 1, 2, 4};
	int size = 4;
	ft_sort_int_tab(tab, size);
	return 0;
}
*/