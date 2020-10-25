/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:31:07 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 09:31:04 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	unsigned int j;

	len = ft_strlen(src);
	j = 0;
	while(*(src + j) && (j < size - 1))
	{
		*(dest + j) = *(src + j);
		j++;
	}	
	if (size > 0)
	{
		*(dest + j) = '\0';
	}
	return (len);
}

int	main(void)
{
	char dest[10];
	char *src;

	src = "blablabla";
	printf("%d\n", ft_strlcpy(dest, src, 9));
	return (0);
}
