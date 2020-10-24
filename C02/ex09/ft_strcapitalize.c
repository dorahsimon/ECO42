/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 12:11:35 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/24 18:38:43 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (!((*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')))
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
