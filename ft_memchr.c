/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 12:30:57 by ziloughm          #+#    #+#             */
/*   Updated: 2021/12/03 13:31:25 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;
	char	*s;

	i = 0;
	c = (char)c;
	s = (char *)str;
	if (n == 0)
		return (0);
	if (s[i] == c)
		return (s + i);
	while (i < n)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
