/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 12:11:35 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/22 16:26:09 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			str++;
		else
			*str = (*str + 32);
	}
	str--;
	while (*str)
	{
		if (*(str + 1) >= 'a' && *(str + 1) <= 'z')
		{
			if (!((*str >= 'a' && *str <= 'z') || (*str >= '1' && *str <= '9')))
				*(str + 1) = (*(str + 1) - 32);
			else
				str--;
		}
		else
			str--;
	}
	str++;
	if (*str >= 'a' && *str <= 'z')
		*str = (*str - 32);
	return (str);
}

int		main(void)
{
	char str[] = " aLuT 1a 21 l ToI";

	printf("%s\n", ft_strcapitalize(str));
	return (0);
}
