/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 00:56:50 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/20 21:01:47 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	errors(char *str)
{
	int	len;
	int	i;
	int	j;

	i = 0;
	len = ft_strlen(str);
	while (str[0] == '\0' || len == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbrtmp;
	int		len;

	len = ft_strlen(base);
	nbrtmp = nbr;
	if (errors(base) == 1)
	{
		if (nbrtmp < 0)
		{
			write(1, "-", 1);
			nbrtmp *= -1;
		}
		if (nbrtmp < len)
			write(1, &base[nbrtmp], 1);
		if (nbrtmp >= len)
		{
			ft_putnbr_base(nbrtmp / len, base);
			ft_putnbr_base(nbrtmp % len, base);
		}
	}
}
