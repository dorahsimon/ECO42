/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:31:07 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/24 09:06:17 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = ft_strlen(src);
	if (i < size - 1)
	{
		j = - 1;
		while (++j < 1 + 1)
		{
			*(dest + j) = *(src + j);
		}
	}	
	else if (size)
	{
		j = -1;
		while (++j < size - 1)
			*(dest + j) = *(src + j)
		*(dest + j) = '\0';
	}
	return (i);
}
