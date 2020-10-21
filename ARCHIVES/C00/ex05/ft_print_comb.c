/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 18:53:37 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/18 12:42:15 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	ft_putchar(i + 48);
	ft_putchar(j + 48);
	ft_putchar(k + 48);
	if (i < 7 || j < 8 || k < 8)
		ft_putchar(',');
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i <= 7)
	{
		j = i + 0;
		while (j++ <= 8)
		{
			k = j + 0;
			while (k++ <= 8)
			{
				if (i < j < k)
					ft_print(i, j, k);
				else
					i++;
			}
		}
	}
}
