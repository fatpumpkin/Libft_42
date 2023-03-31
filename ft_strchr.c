/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:36:55 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:33:31 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	a;

	a = 0;
	if (!s)
		return (NULL);
	while (s[a])
	{
		if (s[a] == (char)c)
			return ((char *)&s[a]);
		a++;
	}
	if ((char)c == s[a])
		return ((char *)&s[a]);
	return (NULL);
}
