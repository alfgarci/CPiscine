/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 10:06:49 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/10 10:54:43 by alfgarci         ###   ########.fr       */
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
	if ((j == 1 && i == 1) || (j == x && i == y))
	{
		ft_putchar('/');
	}
	else if ((j == x && i == 1) || (j == 1 && i == y))
	{
		ft_putchar('\\');
	}
	else if ((j == 1) || (j == x) || (i == 1) || (i == y))
	{
		ft_putchar('*');
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
