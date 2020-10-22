/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 19:07:17 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/22 19:25:32 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return *(dest);
}

int	main(void)
{
	ft_strcat("Hello", "World");
	return (0);
}
