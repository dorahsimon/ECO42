/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:05:36 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/28 16:23:24 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb == 0)
		return (1);
	if (power == 0 && nb != 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		return (nb = nb * (ft_recursive_power(nb, power - 1)));
	else
		return (0);
}
