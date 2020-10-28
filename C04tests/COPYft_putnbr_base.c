/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 11:41:12 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/27 13:28:24 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	v;
	unsigned int	len;

	len = (ft_strlen(base));
	if (nbr < 0)
	{
		ft_putchar('-');
		v = (nbr * (-1));
	}
	else
		v = nbr;
	if (v >= 0 && v < len)
		ft_putchar(base[v]);
	else
	{		
		ft_putnbr_base(v / len, base);
		ft_putnbr_base(v % len, base);
	}
}

int	main(void)
{
	ft_putnbr_base(125, "01");
	return (0);
}
