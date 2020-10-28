/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 11:41:12 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/27 13:53:59 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;
	int	j;

	len = 0;
	j = 1;
	while (str[len] != '\0')
	{
		while (str[len + j])
		{
			if (str[len] == str[len + j])
				return (0);
			if ((str[len] == 43) || (str[len] == 45))
				return (0);
			else
				j++;
		}
		len++;
	}
	if (len < 2)
		return (0);	
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
	ft_putnbr_base(951236, "01345");
	return (0);
}
