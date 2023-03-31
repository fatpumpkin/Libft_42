/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 02:41:32 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:34:08 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*str;
	unsigned char	b;

	str = (unsigned char *)s;
	b = (unsigned char )c;
	a = 0;
	if (!str || str == NULL)
		return (NULL);
	while (a < n)
	{
		if (*str == b)
			return (str);
		str++;
		a++;
	}
	return (NULL);
}
