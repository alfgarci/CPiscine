/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 02:08:21 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/28 12:39:52 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*arr;

	i = -1;
	if (min >= max)
		return (0);
	range = max - min;
	arr = (int *) malloc(range * sizeof(int));
	if (!arr)
		return (0);
	while (++i < range)
		arr[i] = min + i;
	return (arr);
}
