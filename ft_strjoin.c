/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 13:00:59 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/06 12:44:11 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;

	if (!s1 && !s2)
		return (NULL);
	ss1 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ss1 && s1 && s2)
	{
		ss2 = ss1;
		while (*s1)
			*ss1++ = *s1++;
		while (*s2)
			*ss1++ = *s2++;
		*ss1 = '\0';
	}
	else
		return (NULL);
	return (ss2);
}
