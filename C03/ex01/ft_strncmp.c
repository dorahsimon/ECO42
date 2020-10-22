/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclaude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 18:44:15 by sclaude           #+#    #+#             */
/*   Updated: 2020/10/22 18:56:16 by sclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int v;

	v = 0;
	if (v <= n)
	{
		while (s1[v] == s2[v])
		{
			v++;
		}
		if (s1[v] != s2[v])
		{
			i = (*s1 - *s2);
			return (i);
		}
		else
			return (0);
	}
	else
		return (0);
}

int	main(void)
{
	ft_strncmp("hello", "Hella", 3);
	return (0);
}
