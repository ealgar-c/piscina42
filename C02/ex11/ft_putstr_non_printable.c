/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealgar-c <ealgar-c@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 18:06:01 by ealgar-c          #+#    #+#             */
/*   Updated: 2023/02/20 18:58:56 by ealgar-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_base(int c, int err)
{
	char	*base;

	base = "0123456789abcdef";
	if (c <= 0 && err == 0)
		c += 256;
	if (c >= 16)
	{
		ft_base(c / 16, 1);
		ft_base(c % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(base[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a])
	{
		if (str[a] < 32 || str[a] == 127)
		{
			ft_putchar('\\');
			b = str[a];
			ft_base(b, 0);
		}
		else
		{
			ft_putchar(str[a]);
		}
		a++;
	}
}
