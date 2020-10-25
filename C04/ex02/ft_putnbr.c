/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:35:27 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 19:22:51 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	v;

	if (nb < 0)
	{
		ft_putchar('-');
		v = (nb * (-1));
	}
	else
		v = nb;
	if (v >= 0 && v < 10)
		ft_putchar(v + 48);
	else
	{
		ft_putnbr(v / 10);
		ft_putnbr(v % 10);
	}
}
