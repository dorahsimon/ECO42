/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:30:04 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/24 18:09:09 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int	ft_error(int argc, char **argv)
{
	int i;
	char x;
	char y;

	i = 0;
	if (argc != 2 || ft_strlen(argv[1]) != 31)
	{
		write(1, "Error\n" , 6);
		return (0);
	}
	while (i < 7)
	{
		x = argv[1][i];
		y = argv[1][i + 8];

		if ((x == '4' && y != '1') ||
			(x == '3' && y != '1') ||
			(x == '3' && y != '2') ||
			(x == '2' && y != '2') ||
			(x == '2' && y != '1') ||
			(x == '2' && y != '3') ||
			(x == '1' && y != '2') ||
			(x == '1' && y != '3') ||
			(x == '1' && y != '4'))
		{	
			write(1, "Error\n", 6);
			i += 2;
			return (0);
		}
		else
			i += 2;
	}
	i = 16;
	while (i < 23)
	{
		x = argv[1][i];
		y = argv[1][i + 8];

		if ((x == '4' && y != '1') ||
			(x == '3' && y != '1') ||
			(x == '3' && y != '2') ||
			(x == '2' && y != '1') ||
			(x == '2' && y != '2') ||
			(x == '2' && y != '3') ||
			(x == '1' && y != '2') ||
			(x == '1' && y != '3') ||
			(x == '1' && y != '4'))
		{
			write(1, "Error\n", 6);
			i += 2;
			return (0);
		}
		else
			i += 2;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	ft_error(argc, argv);
	return (0);
}
