/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 14:04:24 by ziloughm          #+#    #+#             */
/*   Updated: 2021/12/03 17:33:30 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *f, size_t n)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	i = 0;
	b = (char *)str;
	l = (char *)f;
	if (!l[i])
		return (b);
	while (b[i] != '\0' && i < n)
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (b[i + j] == l[j] && i + j < n)
			{
				if (l[j + 1] == '\0')
					return (b + i);
				j++;
			}
		}
		i++;
	}
	return (0);
}
