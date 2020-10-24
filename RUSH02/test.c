/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:40:54 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/24 16:29:01 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int		ft_error(int argc, char **argv)
{
	int i;
	char x;
	char y;
	
	i = 0;
	if (argc != 2 || strlen(argv[1]) != 31)
	{
		write(1, "Error\n" , 6);
		return (0);
	}
	while (i < 8)
	{
		x = argv[1][i];
		y = argv[1][i + 8];

		if ((x == 4 && y !=  1) ||
			(x == 3 && y != 1) ||
			(x == 3 && y != 2) ||
			(x == 2 && y != 2) ||
			(x == 2 && y != 3) ||
			(x == 1 && y != 2) ||
			(x == 1 && y != 3) ||
			(x == 1 && y != 4))
			write(1, "Error\n", 6);
		else
			i += 2;
}
