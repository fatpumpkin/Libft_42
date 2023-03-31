/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:20:09 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/05 10:52:09 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	a;
	size_t	b;
	char	*copy;

	a = 0;
	b = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * (b + 1));
	if (!copy || !s1)
		return ((char *) NULL);
	while (a < b)
	{
		copy[a] = s1[a];
		a++;
	}
	copy[a] = '\0';
	return ((char *) copy);
}
