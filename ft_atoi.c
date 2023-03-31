/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeaulie <sbeaulie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 17:16:34 by sbeaulie          #+#    #+#             */
/*   Updated: 2023/02/05 11:53:30 by sbeaulie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	get_number(char *str, int a)
{
	int	number;

	number = 0;
	while (str[a] >= '0' && str[a] <= '9')
	{
		number = (str[a] - 48) + (10 * number);
		a++;
	}
	return (number);
}

int	ft_atoi(char *str)
{
	int	negative;
	int	a;

	negative = 1;
	a = 0;
	if (!str)
		return (0);
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\t'
		|| str[a] == '\v' || str[a] == '\r' || str[a] == '\f')
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			negative = -1;
		a++;
	}
	if (str[a] < '0' || str[a] > '9')
		return (0);
	else
		return (get_number(str, a) * negative);
}
