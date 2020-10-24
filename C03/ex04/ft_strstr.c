/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:13:41 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/24 10:46:28 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (!*to_find)
		return (str)
	else
		while(*str && *to_find && (str[i] != to_find[i]))
			i++;
		while(*str && *to_find && (str[i] = to_find[i]))
		{
			j = i
			i++;
		}
		if(to_find[i] = '\n')
			return (j);
		else
			return (NULL);
}
