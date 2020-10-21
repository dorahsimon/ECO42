/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abesombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:03:38 by abesombe          #+#    #+#             */
/*   Updated: 2020/10/17 18:09:40 by abesombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER_LEFT_CORNER 'A'
#define UPPER_SIDE	'B'
#define UPPER_RIGHT_CORNER 'A'
#define LATERAL_SIDE 'B'
#define LOWER_LEFT_CORNER 'C'
#define LOWER_SIDE 'B'
#define LOWER_RIGHT_CORNER 'C'

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	int line;

	line = -1;
	ft_putchar(UPPER_LEFT_CORNER);
	while (++line < x - 2)
		ft_putchar(UPPER_SIDE);
	if (x > 1)
		ft_putchar(UPPER_RIGHT_CORNER);
	ft_putchar('\n');
}

void	ft_print_last_line(int x)
{
	int line;

	line = -1;
	ft_putchar(LOWER_LEFT_CORNER);
	while (++line < x - 2)
		ft_putchar(LOWER_SIDE);
	if (x > 1)
		ft_putchar(LOWER_RIGHT_CORNER);
	ft_putchar(' ');
}

void	ft_print_intermed_line(int x)
{
	int line;

	line = -1;
	ft_putchar(LATERAL_SIDE);
	if (x > 1)
	{
		while (++line < x - 2)
			ft_putchar(' ');
		ft_putchar(LATERAL_SIDE);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;
	int column;

	column = -1;
	if (x == 1 && y == 1)
		ft_putchar(UPPER_LEFT_CORNER);
	else
	{
		while (++column < y)
		{
			line = -1;
			if (column == 0)
				ft_print_first_line(x);
			else if (column == y - 1)
				ft_print_last_line(x);
			else if (column > 0 && column < y - 1)
				ft_print_intermed_line(x);
		}
	}
}
