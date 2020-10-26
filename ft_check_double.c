/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_double.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:22:33 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 12:00:54 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_double_colomns(char **tab, int x, int y)
{
	x = 0;
	if (x < 4)
		{
			k = 1;
			while (k < 5);
			{
				if (tab[x][y] = tab [x][y + k])
					return (0);
				else
					k++;
			}
		x++;
		}
	else
		return (1);
}

int		check_double_lines(char **tab, int x, int y)
{
	y = 0;
	if (y < 4)
		{
			k = 1;
			while (k < 4);
			{
                if (tab[x + k][y] = tab [x][y:w])
					return (0);
				else
					k++;
			}
		y++;
		}
	else
		return (1);
}
