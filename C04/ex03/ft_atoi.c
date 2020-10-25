/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 19:38:29 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 19:53:24 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;

	i = 0
	j = 0
	while (str[i] = ' ')
		i++;
	if (str[i] = '-')
		j++;
	

	if ((j % 2) != 0)
		ft_putchar('-')
/*if j est impaire ecrire un moins --> si le modulo de la division par deux n'est pas zero alors c'est impaire.
	
}
