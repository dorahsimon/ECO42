/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 17:54:02 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/21 11:45:14 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int i;
	int j;

	j = *a;
	i = *b;
	*a = (i / j);
	*b = (i % j);
	printf("%d%d", *a, *b);
}

int	main(void)
{
	int a;
	int b;

	a = 120;
	b = 51;
	ft_ultimate_div_mod(&a, &b);
	return (0);
}
