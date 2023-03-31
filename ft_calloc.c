/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 04:11:46 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:05:29 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	a;
	char	*str;

	str = malloc(count * size);
	if (!str || str == NULL)
		return (str);
	a = 0;
	while (a < count * size)
	{
		str[a] = 0;
		a++;
	}
	return (str);
}
