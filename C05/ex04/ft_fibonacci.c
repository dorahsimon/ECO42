/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:24:41 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/28 17:38:16 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index == 2)
		return (1);
	else
	{
		while (i++ <= index)
			return (index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
		return (index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
