/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:30:04 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 14:23:16 by jahuang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 31)
		return (1);
	return(0);
}

int	ft_error(char *str)
{
	int i;
	char x;
	char y;
	char a;
	char b;

	i = 0;
	while (i < 7)
	{
		x = str[i];
		y = str[i + 8];
		a = str[i + 16];
		b = str[i + 16 + 8];

		if (x + y > 101 || a + b > 101)
		{	
			i += 2;
			return (0);
		}
		else
			i += 2;
	}
	return (1);
}
