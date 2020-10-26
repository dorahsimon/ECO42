/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 15:09:19 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/26 17:09:06 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;
	while (str + i != 0)
		i++;
	return (i);
}

int		ft_srch_error(int nbr, char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (base[i] != '\0' )
	{
		while (base[i + j] != '\n') 
			if (base[i] = base[i + j])
				return (0);
			else 
				j++;
		if ((base[i]= 43) || (base[i] = 45))
			return (0);
		i++;
	}
	return (i);
}

unsigned int		ft_atoi(char *str)
{
	unsigned int i;
	unsigned int neg;
	unsigned int minus;
	unsigned int nb;

	i = 0;
	neg = 0;
	minus = 1;
	nb = 0;
	while (str[i++] >= 32 && str[i] <= 47)
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
	return (nb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len;
	unsigned int	v;
	unsigned int	*unbase;

	len =  ft_srch_error(base); 
	unbase = ft_atoi(base);
	if (len <= 1)
		return;
	else
	{
	if (nbr < 0)
	{
			ft_putchar('-');
			v = (nbr * (-1));
		}
		else
			v = nbr;
		if (v >= 0 && v < unbase[i])
			ft_putchar(v + 48);
		else
		{
			ft_putnbr_base(v / unbase[i]);
			ft_putnbr_base(v % unbase[i]);
		}
	}
}
		
	

int		main(void)
{
	int		nbr;
	char	*base;

	base = 
	void ft_putnbr_base(50,"0123456789");
	return (0);
}
