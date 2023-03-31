/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 15:06:09 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:18:38 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst2;
	size_t	src2;
	size_t	a;

	dst2 = ft_strlen(dst);
	src2 = ft_strlen(src);
	a = 0;
	if (!dst && !src)
		return (0);
	if (dstsize < dst2 + 1)
		return (dstsize + src2);
	if (dstsize > dst2 + 1)
	{
		while (src[a] && dst2 + 1 + a < dstsize)
		{
			dst[dst2 + a] = src[a];
			a++;
		}
	}
	dst[dst2 + a] = '\0';
	return (dst2 + src2);
}
