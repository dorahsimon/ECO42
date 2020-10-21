/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 19:37:48 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/21 19:54:26 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 && *str > 126)
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char str[] = "659 84``~///5";

	printf("%d\n", ft_str_is_printable(str));
	return (0);
}
