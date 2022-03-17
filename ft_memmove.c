/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 16:39:09 by ziloughm          #+#    #+#             */
/*   Updated: 2021/12/08 16:23:46 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*strcp(char *de, char *sr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		de[i] = sr[i];
		++i;
	}
	return (de);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (d > s)
	{
		while (i < n)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	else
		strcp(d, s, n);
	return (dest);
}
