/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:57:25 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 15:54:00 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	ran;

	i = -1;
	ran = max - min;
	if (ran <= 0)
	{
		*range = 0;
		return (0);
	}
	arr = (int *)malloc(ran * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (-1);
	}
	*range = arr;
	while (++i < ran)
		arr[i] = min + i;
	return (ran);
}
