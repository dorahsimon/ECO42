/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:08:44 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/21 19:13:58 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str < '1' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "";

	printf("%d\n", ft_str_is_alpha(str));
	return (0);
}
