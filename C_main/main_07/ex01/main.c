/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfgarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:39:52 by alfgarci          #+#    #+#             */
/*   Updated: 2022/07/21 14:54:50 by alfgarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	max;
	int min;
	int	*arr;

	min = 7;
	max = 15;
	arr = ft_range(min, max);
	for (int i = 0; i < (max - min); i++)
		printf("%d\n", arr[i]);
	return (0);
}
