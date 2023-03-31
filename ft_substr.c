/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:30:04 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/05 10:53:28 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > i)
		return (ft_strdup(""));
	if (len > (i - start))
		len = i - start;
	new = malloc((len + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, &s[start], len);
	new[len] = '\0';
	return (new);
}
