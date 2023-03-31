/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:56:51 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/05 11:54:43 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit(long n, int sign)
{
	int	a;

	if (n == 0)
		return (1);
	a = 0;
	while (n > 0)
	{
		n = n / 10;
		a++;
	}
	if (sign == -1)
		a++;
	return (a);
}

static void	change_nb(char *str, long n, int i, int sign)
{
	str[i] = '\0';
	str[--i] = n % 10 + '0';
	n = n / 10;
	while (n > 0)
	{
		str[--i] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		digit;
	int		sign;

	sign = 1;
	if (n < 0)
	{
		nb = (long)n * -1;
		sign = -1;
	}
	else
		nb = n;
	digit = get_digit(nb, sign);
	str = malloc(sizeof(char) * (digit + 1));
	if (!str)
		return (NULL);
	change_nb(str, nb, digit, sign);
	return (str);
}
