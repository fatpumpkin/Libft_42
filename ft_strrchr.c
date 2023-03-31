/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 16:34:34 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/05 11:58:26 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;

	if (!s)
		return (NULL);
	a = ft_strlen(s);
	while (a > 0)
	{
		if (s[a] == (char)c)
			return ((char *)&s[a]);
		a--;
	}
	if (s[a] == (char)c)
		return ((char *)&s[a]);
	return (NULL);
}
