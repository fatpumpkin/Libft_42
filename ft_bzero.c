/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 01:22:43 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/09 12:31:18 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			a;
	unsigned char	*str;

	str = s;
	if (!str || str == NULL)
		return ;
	if (n == 0)
		return ;
	a = 0;
	while (a < n)
		str[a++] = 0;
	return ;
}
