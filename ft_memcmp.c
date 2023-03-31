/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 12:45:29 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/03 11:22:18 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	a = 0;
	if (!ss1 || !ss2 || ss1 == ss2)
		return (0);
	while (a < n)
	{
		if (ss1[a] != ss2[a])
			return (ss1[a] - ss2[a]);
		a++;
	}
	return (0);
}
