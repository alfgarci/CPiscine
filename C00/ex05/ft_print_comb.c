/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 08:11:07 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/14 13:17:43 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int n1, int n2, int n3)
{
	char	ascii1;
	char	ascii2;
	char	ascii3;

	ascii1 = n1 + '0';
	ascii2 = n2 + '0';
	ascii3 = n3 + '0';
	write(1, &ascii1, 1);
	write(1, &ascii2, 1);
	write(1, &ascii3, 1);
	if (n1 != 7 || n2 != 8 || n3 != 9)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;

	num1 = 0;
	while (num1 < 8)
	{
		num2 = num1 + 1;
		while (num2 < 9)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				ft_print_nums(num1, num2, num3);
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
