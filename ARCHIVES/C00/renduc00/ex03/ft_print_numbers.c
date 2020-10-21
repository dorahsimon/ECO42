/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 15:19:57 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/15 17:36:50 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + 48);
		i++;
	}
}