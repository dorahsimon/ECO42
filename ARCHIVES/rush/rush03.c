/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 10:18:30 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/17 16:00:20 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(char c)
{
	write(1, &c, 2);
}

void	rush3(int x, int y)
{
	char	tab[3]={'A', 'B', 'C'};
	int l;


	l = x;
	if (y  > 2)
	{
		if (x == 1)
		{
			ft_putchar(tab[0]);
		}
		else if (x == 2)
		{
			ft_putchar(tab[0]);
			ft_putchar(tab[1]);
		}
		else if (x >= 3)
		{
			ft_putchar(tab[0]);
			while (l-- >=1)
			{
				ft_putchar(tab[1]);
			}
			ft_putchar(tab[0]);
			ft_putchar('\n');
		}
	}
}


void rush2(int x, int y)

{
	int	j;
	int k;

	j = x;
	k = y;
	while (k-- >= 3)
	{
		if (x == 1)
			ft_putchar('B');
		else if (x == 2)
		{
			ft_putchar('B');
			ft_putchar('B');

		} 
		else if (x >= 3)
		{
			ft_putchar('B');
			while (j-- >= 3)
			{
				ft_putchar('D');
			}
		ft_putchar('B');
		ft_putchar('\n');
		}
	}
	rush3(x, y);
}



void	rush1(int x, int y)
{
	char	tab[3]={'A', 'B', 'C'};
	int i;

	i = x;
	if (y >= 1)
	{
		if (x == 1)
			ft_putchar(tab[0]);
		else if (x == 2)
		{
			ft_putchar(tab[0]); 
			ft_putchar(tab[1]);
		}
		else if (x >= 3)
		{
			ft_putchar(tab[0]);
			while (i-- >= 3)
			{
				ft_putchar(tab[1]);
			}
			ft_putchar(tab[2]);
			ft_putchar('\n');
		}
	}
	rush2(x, y);
}


int	main()
{
	rush1(4, 2);
	return (0);
}
