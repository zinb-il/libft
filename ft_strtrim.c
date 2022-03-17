/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ziloughm <ziloughm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:22:56 by ziloughm          #+#    #+#             */
/*   Updated: 2021/12/04 20:39:12 by ziloughm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in(char c, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

static int	ft_total_len(char const *s2, char const *set1)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[i] != '\0' && !ft_is_in(s2[i], set1))
	{
		j++;
		i++;
	}
	if (s2[i] != '\0')
	{
		i = ft_strlen(s2) - 1;
		while (i >= 0 && !ft_is_in(s2[i], set1))
		{
			j++;
			i--;
		}
	}
	return (ft_strlen(s2) - j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	m;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_total_len(s1, set);
	m = 0;
	while (s1[i] != '\0' && !ft_is_in(s1[i], set))
	{
		m++;
		i++;
	}
	p = ft_substr(s1, m, j);
	return (p);
}
