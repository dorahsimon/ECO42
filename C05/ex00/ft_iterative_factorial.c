/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 08:35:08 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/28 08:54:22 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fac;

	fac = nb - 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (fac > 0)
	{
		nb = nb * fac;
		fac--;
	}
	return (nb);
}
