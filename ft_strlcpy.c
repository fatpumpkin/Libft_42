/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:25:33 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/03 11:35:07 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	a;

	a = 0;
	if (!dst && !src)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[a] && a < (dstsize - 1))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (ft_strlen(src));
}
