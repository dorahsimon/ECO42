/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:38:29 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/26 15:02:57 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int minus;
	int nb;

	i = 0;
	neg = 0;
	minus = 1;
	nb = 0;

	while (str[i++] >= 32 && str[i] <=47)
	{
	    if (str[i] == 45)
		    neg++;
	}
	if ((neg % 2) != 0)
		minus = -1;
	while (*str != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nb = ((nb + (str[i++] - 48)) * 10);
	}
	nb = nb * minus / 10;
	printf("%d\n", nb);
	return (nb);
}

int		main(void)
{
	char *str;

	str = " ---+-95695a56895b45";
	ft_atoi(str);
}
