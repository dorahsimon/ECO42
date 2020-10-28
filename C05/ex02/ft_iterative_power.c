/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 13:36:04 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/28 16:20:45 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0 && nb != 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb = nb * nb;
		power--;
	}
	return (nb);
}
