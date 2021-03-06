/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adespond <adespond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 09:35:14 by adespond          #+#    #+#             */
/*   Updated: 2015/09/09 09:01:40 by adespond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 1;
	while (*s1++ == *s2++)
	{
		if (i >= n)
			return (0);
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		i++;
	}
	return (*--s1 - *--s2);
}
