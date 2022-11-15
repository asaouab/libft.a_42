/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaouab <asaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:11:48 by asaouab           #+#    #+#             */
/*   Updated: 2022/11/11 14:44:29 by asaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libc.h"

int	ft_atoi(char *str)

{
	long		i;
	long		sign;
	long		nb;

	sign = 1;
	nb = 0;
	i = 0;
	while ((str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
		|| (str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= sign;
	return (nb);
}
