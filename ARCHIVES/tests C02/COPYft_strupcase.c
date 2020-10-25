/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 11:04:38 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/22 11:52:08 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			str++;
		else
			*str = (*str - 32);
	}
	return (str);
}

int	main(void)
{
	char str[] = "helloLES23;ji8^7*&ftG";

	//marche pas printf("%s\n", ft_strupcase(str));
	return (0);
}
