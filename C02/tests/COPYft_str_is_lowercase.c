/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:17:36 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/21 19:24:39 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if ((*str < 'a' || *str > 'z'))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "";

	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}
