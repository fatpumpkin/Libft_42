/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:00:44 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 17:41:28 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	if (!s[0])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb++;
	return (nb);
}

static void	get_str(char **str, size_t *len, char c)
{
	size_t	i;

	*str += *len;
	*len = 0;
	i = 0;
	while (**str && **str == c)
		(*str)++;
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			return ;
		(*len)++;
		i++;
	}
}

static char	**malloc_error(char **str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		free(str[a]);
		a++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	char	*str2;
	size_t	a;
	int		i;

	i = -1;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	str2 = (char *)s;
	a = 0;
	while (++i < count_words(s, c))
	{
		get_str(&str2, &a, c);
		str[i] = (char *)malloc(sizeof(char) * (a + 1));
		if (!str[i])
			return (malloc_error(str));
		ft_strlcpy(str[i], str2, a + 1);
	}
	str[i] = NULL;
	return (str);
}
