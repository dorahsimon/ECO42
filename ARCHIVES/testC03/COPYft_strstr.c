/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:13:41 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/25 18:42:37 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] != to_find[j])
			i++;
		while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
		{
			j++;
		}
		return (&str[i]);
	}
	return (0);
}

int		main(void)
{
	char *str;
	char *to_find;

	str = "Hello Green World";
	to_find = "World";
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
