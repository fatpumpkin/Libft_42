/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:28:29 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:13:27 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	*p;

	a = 0;
	p = b;
	if (!p)
		return (b);
	while (a < len)
	{
		p[a] = (unsigned char)c;
		a++;
	}
	return (b);
}
