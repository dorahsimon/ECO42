/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:52:27 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/21 12:12:27 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int tab2[size];

	i = 0;
	j = (size - 1);
	while (i < j)
	{
		tab2[i] = tab[i];
		tab[i] = tab[j];
		tab[j] = tab2[i];
		i++;
		j--;
	}
}

int	main(void)
{
	int tab[7];

	tab[0] = 6;
	tab[1] = 5;
	tab[2] = 4;
	tab[3] = 3;
	tab[4] = 2;
	tab[5] = 1;
	tab[6] = 0;
	ft_rev_int_tab(tab, 7);
	return (0);
}
