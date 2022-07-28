/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:06:49 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/10 11:42:51 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_errors(int x, int y)
{
	int	error;

	error = 0;
	if (x < 0 || y < 0)
	{
		write(1, "ERROR - PARAMETROS NEGATIVOS", 28);
		error = 1;
	}
	else if (x == 0 || y == 0)
	{
		ft_putchar('\n');
		error = 1;
	}
	return (error);
}

void	ft_checks(int i, int j, int x, int y)
{
	if ((i == 1 || i == y) && (j == 1 || j == x))
	{
		ft_putchar('o');
	}
	else if ((i == 1 || i == y) && (j != 1 || j != x))
	{
		ft_putchar('-');
	}
	else if ((i != 1 && i != y) && ((j == 1) || (j == x)))
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	if (ft_errors(x, y) != 1)
	{
		while (i <= y)
		{
			j = 1;
			while (j <= x)
			{
				ft_checks(i, j, x, y);
				j++;
			}
			i++;
			ft_putchar('\n');
		}
	}	
}
