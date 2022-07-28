/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 06:36:40 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 22:08:06 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	errors_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 2;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	base_index(char str, char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
	{
		if (str == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	whitespaces(char *str, int *iter)
{
	int	sig;
	int i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	sig = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig = sig * -1;
		i++;
	}
	*iter = i;
	return (sig);
}

int	ft_atoi_base(char *str, char *base)
{
	int		sig;
	long	n;
	long	n2;
	int		len;
	int		i;

	n = 0;
	i = 0;
	sig = 1;
	len = errors_base(base);
	if (len >= 2)
	{
		sig = whitespaces(str, &i);
		n2 = base_index(str[i], base);
		while (n2 != 1)
		{
			n = (n * begin_len) + n2;
			i++;
			n2 = base
		}
	}
	i = -1;
	while (str[++i] >= base[0] && str[i] <= base[len -1] && str[i])
		n = (n * len) + (base_index(str[i], base));
	return (n);
}
