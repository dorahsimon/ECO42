/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:28:32 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/21 19:33:26 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z') 
			return (0);
		str++;
	}
	return (1);
}
int	main(void)
{
	char str[] = "MA]]]]]M";

	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
}
