/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:46:56 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 12:39:22 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;


	i = 0;
	j = 0;
	while ((i < size - 1) && (dest[i] != '\0'))
	{
		i++;
	}
	while ((i < size - 1) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	
	return (i);
}

int				main(void)
{
	char dest[10];
	char *src;

	src = "blablabla";
	printf("%u\n", ft_strlcat(dest, src, 19));
	return (0);
}
