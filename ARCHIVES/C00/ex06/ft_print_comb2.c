/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 10:44:33 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/18 17:08:30 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(int c)
{
	write(1, &c, 2);
}

void	ft_print_comb2(void)
{
	int	n;
	int	m;

	n = -1;
	while (n++ <= 98)
	{
		m = n;
		while (m++ <= 98)
		{
			ft_putchar((n / 10) + 48);
			ft_putchar((n % 10) + 48);
			ft_putchar(' ');
			ft_putchar((m / 10) + 48);
			ft_putchar((m % 10) + 48);
			if (n < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
