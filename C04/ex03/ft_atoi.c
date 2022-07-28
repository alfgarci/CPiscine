/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:30:44 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/20 12:11:31 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	get_number(char *str, int *pt_start, int *pt_neg)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	*pt_start = i;
	*pt_neg = neg;
}

int	ft_atoi(char *str)
{
	int	sig;
	int	number;
	int	i;

	number = 0;
	get_number(str, &i, &sig);
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		number = number * 10;
		number += str[i] - '0';
		i++;
	}
	return (number * sig);
}
