/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:05:16 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/05 11:58:40 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start(const char *s1, const char *set)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(s1);
	b = 0;
	while (b < a)
	{
		if (ft_strchr(set, s1[b]) == 0)
			break ;
		b++;
	}
	return (b);
}

static int	end(const char *s1, const char *set)
{
	size_t	a;
	size_t	b;

	a = ft_strlen(s1);
	b = 0;
	while (b < a)
	{
		if (ft_strchr(set, s1[a - b - 1]) == 0)
			break ;
		b++;
	}
	return (a - b);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	char	*new;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	a = start(s1, set);
	b = end(s1, set);
	if (a >= b)
		return (ft_strdup(""));
	new = (char *)malloc(sizeof(char) *(b - a + 1));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1 + a, b - a + 1);
	return (new);
}
