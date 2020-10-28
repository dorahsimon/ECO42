/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:38:29 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/27 18:25:52 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	if ((neg % 2) != 0)
		minus = -1;
	while (*str != '\0' && (str[i] >= '0' && str[i] <= '9'))
		nb = ((nb + (str[i++] - 48)) * 10);
	nb = nb * minus / 10;
	return (nb);
}
