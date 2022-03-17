/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 18:44:52 by ziloughm          #+#    #+#             */
/*   Updated: 2021/12/02 20:45:54 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)str;
	c = (char)c;
	while (p[i] != '\0')
	{
		if (p[i] == c)
			return (p + i);
		i++;
	}
	if (c == p[i])
		return (p + i);
	return (0);
}
