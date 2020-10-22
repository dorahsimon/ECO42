/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:31:07 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/22 17:48:56 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while (*src)
	{
		while (*(dest - 1))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		if (*(dest + (size - 1)))
			*dest = '\n';
	}
	return (ft_strlen);
}
