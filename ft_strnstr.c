/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:01:02 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:27:19 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!haystack)
		return (NULL);
	if (*needle == '\0' || needle == NULL || !needle)
		return ((char *)haystack);
	while (haystack[a] && a < len)
	{
		b = 0;
		while (haystack[a + b] == needle[b] && a + b < len)
		{
			b++;
			if (needle[b] == '\0')
				return ((char *)&haystack[a]);
		}
		a++;
	}
	return (NULL);
}
