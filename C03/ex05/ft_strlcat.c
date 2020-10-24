/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 10:46:56 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/24 11:02:13 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while ((size > 1) &&  (dest[i] != '\0'))
	{
		i++;
		size--;
	}
	while ((size > 1) && (size > 1 && src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (dest);
}
